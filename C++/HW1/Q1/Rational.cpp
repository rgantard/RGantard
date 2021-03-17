#include "Rational.h"
#include "iostream"

int Rational::GCD(int a, int b)
	{
		if(a==0)
		{
			return b;
		}
		return GCD(b%a,a);
	}
bool Rational::equal(Rational r)
	{
		return this->reduction().getNumerator() == r.reduction().getNumerator() && 
			this->reduction().getDenominator() == r.reduction().getDenominator();
	}
int Rational::getDenominator()
	{
		return _denominator;
	}
int Rational::getNumerator()
	{
		return _numerator;
	}
void Rational::setNumerator(int numerator)
	{
		_numerator = numerator;
	}
void Rational::setDenominator(int denominator)
	{
		if(denominator==0)
		denominator=1;
		_denominator = denominator;
	}
void Rational::print()
	{
		std::cout << _numerator << '/' << _denominator << ' ';
	}
Rational Rational::reduction()
	{
		int _GCD = GCD(_numerator, _denominator);
		Rational reduced(_numerator/_GCD, _denominator/_GCD);
		return reduced;
	}
Rational::Rational(int numerator, int denominator)
	{
		_numerator = numerator;
		_denominator = denominator;
	}
Rational Rational::add(Rational r)
	{	
		int numerator, denominator;
		numerator = (this->_numerator*r._denominator)+(this->_denominator*r._numerator);
		denominator = this->_denominator*r._denominator;
		Rational sum(numerator, denominator);
		return sum.reduction();
	}
