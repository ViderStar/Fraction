#include "Fraction.h"
using namespace std;

void Fraction::setNumerator(long m_numerator) 
{
	numerator = m_numerator;
}
long Fraction::getNumerator()
{
	return numerator;
}
void Fraction::setDenominator(long m_denominator) 
{
	denominator = m_denominator;
}
long Fraction::getDenominator() 
{
	return denominator;
}
void Fraction::print() 
{
	if (denominator != 1) 
	{
		cout << numerator << "/" << denominator;
	}
	else 
	{
		cout << numerator;
	}
}
void Fraction::check() 
{
	if (denominator == 0) 
	{
		throw exception("denominator is equal to zero");
	}
}
long Fraction::reduction(long m_numerator, long m_denominator)
{
	m_numerator = abs(m_numerator);
	while (m_numerator && m_denominator) 
	{
		if (m_numerator > m_denominator) 
		{
			m_numerator %= m_denominator;
		}
		else if (m_numerator < m_denominator)
		{
			
			m_denominator %= m_numerator;
		}
	}
	return m_numerator + m_denominator;
}
Fraction::Fraction(long m_numerator, long m_denominator)
{
	numerator = m_numerator;
	denominator = m_denominator;
	if (denominator < 0)
	{
		denominator = abs(denominator);
		numerator *= -1;
	}
	if (numerator == 0) 
	{
		 denominator=1; 
	}
	long m_reduction = reduction(numerator, denominator);
	numerator = numerator / m_reduction;
	denominator = denominator / m_reduction;
}
bool Fraction::operator >(Fraction secondfraction) 
{
	return (numerator * secondfraction.getDenominator() - denominator * secondfraction.getNumerator() > 0);
}
bool Fraction::operator <(Fraction secondfraction) 
{
	return (numerator * secondfraction.getDenominator() - denominator * secondfraction.getNumerator() < 0);
}
bool Fraction::operator >=(Fraction secondfraction)
{
	return (numerator * secondfraction.getDenominator() - denominator * secondfraction.getNumerator() >= 0);
}
bool Fraction::operator <=(Fraction secondfraction) 
{
	return (numerator * secondfraction.getDenominator() - denominator * secondfraction.getNumerator() <= 0);
}
bool Fraction::operator ==(Fraction secondfraction) 
{
	return (numerator * secondfraction.getDenominator() - denominator * secondfraction.getNumerator() == 0);
}
bool Fraction::operator !=(Fraction secondfraction)
{
	return (numerator * secondfraction.getDenominator() - denominator * secondfraction.getNumerator() != 0);
}
Fraction Fraction::operator *(Fraction secondfraction) 
{
	long compnumerator = numerator * secondfraction.getNumerator();
	long compdenominator = denominator * secondfraction.getDenominator();
	return Fraction(compnumerator, compdenominator);
}
Fraction Fraction::operator +(Fraction secondfraction) 
{
	long addnumerator = numerator * secondfraction.getDenominator() + denominator * secondfraction.getNumerator();
	long adddenominator = denominator * secondfraction.getDenominator();
	return Fraction(addnumerator, adddenominator);
}
Fraction Fraction::operator -(Fraction secondfraction)
{
	long diffnumerator = numerator * secondfraction.getDenominator() - denominator * secondfraction.getNumerator();
	long diffdenominator = denominator * secondfraction.getDenominator();
	return Fraction(diffnumerator, diffdenominator);
}
Fraction Fraction::operator /(Fraction secondfraction) 
{
	if (secondfraction.getDenominator() != 0)
	{
		long divnumerator = numerator * secondfraction.getDenominator();
		long divdenominator = denominator * secondfraction.getNumerator();
		return Fraction(divnumerator, divdenominator);
	}
}