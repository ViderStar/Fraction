#pragma once
#include <iostream>
class Fraction
{
private:
	long numerator;
	long denominator;
public:
	Fraction(long, long);
	long reduction(long, long);
	void setNumerator(long);
	long getNumerator();
	void setDenominator(long);
	long getDenominator();
	void check();
	void print();
	bool operator > (Fraction);
	bool operator < (Fraction);
	bool operator >= (Fraction);
	bool operator <= (Fraction);
	bool operator == (Fraction);
	bool operator != (Fraction);
	Fraction operator * (Fraction);
	Fraction operator + (Fraction);
	Fraction operator - (Fraction);
	Fraction operator / (Fraction);
	
};

