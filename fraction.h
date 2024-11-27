#ifndef FRACTION_H_
#define FRACTION_H_

class Fraction {

private:						// internal implementation is hidden
	int num;					// numerator
	int den;					// denominator

	int gcd(int a, int b) const;		// calculates the gcd of a and b
	int lcm(int a, int b) const;

public:
	Fraction();					// empty constructor
	Fraction(int, int = 1); 	// constructor taking values for fractions and
								// integers. Denominator by default is 1
								
	
    friend std::ostream& operator<<(std::ostream& os, const Fraction& f);
    friend std::istream& operator>>(std::istream& is, Fraction& f);
    Fraction operator*(const Fraction& f) const;
    Fraction operator/(const Fraction& f) const;
	Fraction operator+(const Fraction& f) const;
	Fraction operator-(const Fraction& f) const;

	Fraction& operator=(const Fraction& f);

	bool operator<(const Fraction &f) const;
	bool operator>(const Fraction &f) const;
    
};


#endif /* FRACTION_H_ */
