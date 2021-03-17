#ifndef RATIONAL_H
#define RATIONAL_H

class Rational 
{
    private:
    int _numerator, _denominator; 
    int GCD(int numerator, int denominator);
    Rational reduction();
    public:
    bool equal(Rational r);
    void print();
    Rational add(Rational r);
    int getNumerator();
    int getDenominator();
    void setNumerator(int numerator);
    void setDenominator(int denominator); 
    Rational(int numerator=0, int denominator=1);
};
#endif