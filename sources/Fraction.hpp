#ifndef FRACTION_HPP
#define FRACTION_HPP

#include <iostream>
#include <cmath>

using namespace std;

namespace ariel{
class Fraction {
    private:
        int numerator;
        int denominator;
        // Recursive function to
    // return GCD of a and b
    long long gcd(long long a, long long b);
    public:
        // Constructors
        Fraction(int num , int den ) : numerator(num), denominator(den) {}
        // https://www.geeksforgeeks.org/convert-given-decimal-number-into-an-irreducible-fraction/
        Fraction(float number){
            // Fetch integral value of the decimal
            double intVal = floor(number);
 
            // Fetch fractional part of the decimal
            double fVal = number - intVal;
 
            // Consider precision value to
            // convert fractional part to
            // integral equivalent
            const long pVal = 1000000000;
 
            // Calculate GCD of integral
            // equivalent of fractional
            // part and precision value
            long long gcdVal = gcd(round(fVal * pVal), pVal);
 
            // Calculate num and deno
            long long num = round(fVal * pVal) / gcdVal;
            long long deno = pVal / gcdVal;
 
            // save the fraction
            numerator=(intVal * deno) + num;
            denominator= deno;
        }
        ~Fraction()= default;
        // Overloaded operators
        friend Fraction operator+(const Fraction& num1, const Fraction& num2);
        friend Fraction operator-(const Fraction& num1, const Fraction& num2);
        friend Fraction operator*(const Fraction& num1, const Fraction& num2);
        friend Fraction operator/(const Fraction& num1, const Fraction& num2);
        friend bool operator==(const Fraction& num1, const Fraction& num2);
        friend bool operator!=(const Fraction& num1, const Fraction& num2);
        friend bool operator>(const Fraction& num1, const Fraction& num2);
        friend bool operator<(const Fraction& num1, const Fraction& num2);
        friend bool operator>=(const Fraction& num1, const Fraction& num2);
        friend bool operator<=(const Fraction& num1, const Fraction& num2);

        Fraction& operator++(); // prefix increment
        const Fraction operator++(int); // postfix increment
        Fraction& operator--(); // prefix decrement
        const Fraction operator--(int); // postfix decrement
        friend std::ostream& operator<<(std::ostream& os, const Fraction& f);
        friend std::istream& operator>>(std::istream& is, Fraction& f);
};

};
#endif
