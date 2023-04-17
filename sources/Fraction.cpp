#include "Fraction.hpp"
 using namespace std;

namespace ariel{
    
    // Fraction::Fraction(float f){

    // }

    // Overloaded operators
    Fraction operator+(const Fraction& num1, const Fraction& num2){
        return Fraction(1,1);
    }

    Fraction operator-(const Fraction& num1, const Fraction& num2){
         return Fraction(1,1);
    }
    // Fraction operator-(const Fraction& num1, const Fraction& num2){
    //     return Fraction(1,1);
    // }

    Fraction operator*(const Fraction& num1, const Fraction& num2){
        return Fraction(1,1);
    }

    Fraction operator/(const Fraction& num1, const Fraction& num2) {
        return Fraction(1,1);
    }

    bool operator==(const Fraction& num1, const Fraction& num2){
        return true;
    }
    bool operator>(const Fraction& num1, const Fraction& num2){
        return true;
    }

    bool operator<(const Fraction& num1, const Fraction& num2){
        return true;
    }

    bool operator>=(const Fraction& num1, const Fraction& num2){
        return true;
    }

    bool operator<=(const Fraction& num1, const Fraction& num2){
        return true;
    }

    Fraction& Fraction::operator++(){ // prefix increment
        return *this;
    }

    const Fraction Fraction::operator++(int){ // postfix increment
        return Fraction(1,1);
    }

    Fraction& Fraction::operator--(){ // prefix decrement
        return *this;
    }

    const Fraction Fraction::operator--(int){ // postfix decrement
        return Fraction(1,1);
    }

    std::ostream& operator<<(std::ostream& os, const Fraction& f){
        os << f.numerator <<'/' << f.denominator;
        return os;    
    }

    std::istream& operator>>(std::istream& is, Fraction& f){
        return is;
    }

    long long Fraction::gcd(long long a, long long b){
        if (a == 0)
            return b;
        else if (b == 0)
            return a;
        if (a < b)
            return gcd(a, b % a);
        else
            return gcd(b, a % b);
    }
 
}