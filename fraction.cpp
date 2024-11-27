#include <iostream>
#include "fraction.h"

Fraction::Fraction()
{
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b) const
{
	int tmp_gcd = 1;

	if (b>a){
		tmp_gcd = b;
		b = a;
		a = tmp_gcd;
	}

	for ( int i = 0; i < b; i++){
		if (a % i == 0 && b % i == 0){
			tmp_gcd = i;
		}
	}

	return tmp_gcd;
}

int Fraction::lcm(int a, int b) const
{
	return a * b / gcd(a, b);

}

std::ostream& operator<<(std::ostream& os, const Fraction& f){
    os << f.num << '/' << f.den;
    return os;
}

std::istream& operator>>(std::istream& is, Fraction& f){
    char slash;
    is >> f.num >> slash >> f.den;
    return is;
}

Fraction Fraction::operator*(const Fraction &f) const{
    return Fraction (num * f.num, den * f.den);
}
Fraction Fraction::operator/(const Fraction &f) const{
    return Fraction (num * f.den, den * f.num);
}

Fraction Fraction::operator+(const Fraction &f) const {
    int common_den = lcm(den, f.den);
    int new_num = num * (common_den / den) + f.num * (common_den / f.den);
    return Fraction(new_num, common_den);
}
Fraction Fraction::operator-(const Fraction &f) const {
    int common_den = lcm(den, f.den);
    int new_num = num * (common_den / den) - f.num * (common_den / f.den);
    return Fraction(new_num, common_den);
}


Fraction& Fraction::operator=(const Fraction& f){
	if ( this != &f){
		num = f.num;
		den = f.den;
	}
	return *this;
}

bool Fraction::operator<(const Fraction &f) const{
	return num * f.den < f.num * den;
}
bool Fraction::operator>(const Fraction &f) const{
	return num * f.den > f.num * den;
}
