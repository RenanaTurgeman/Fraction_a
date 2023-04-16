#ifndef FRACTION_HPP
#define FRACTION_HPP

#include <iostream>
using namespace std;

namespace ariel{
class Fraction {
    private:
        int numerator;
        int denominator;
    public:
        // Constructors
        Fraction(int num = 0, int den = 1) : numerator(num), denominator(den) {}
        Fraction(float f);
        // Overloaded operators
        Fraction operator+(const Fraction& other) const;
        Fraction operator-(const Fraction& other) const;
        Fraction operator*(const Fraction& other) const;
        Fraction operator/(const Fraction& other) const;
        bool operator==(const Fraction& other) const;
        bool operator>(const Fraction& other) const;
        bool operator<(const Fraction& other) const;
        bool operator>=(const Fraction& other) const;
        bool operator<=(const Fraction& other) const;
        Fraction& operator++(); // prefix increment
        const Fraction operator++(int); // postfix increment
        Fraction& operator--(); // prefix decrement
        const Fraction operator--(int); // postfix decrement
        friend std::ostream& operator<<(std::ostream& os, const Fraction& f);
        friend std::istream& operator>>(std::istream& is, Fraction& f);


};

};
#endif
