#include "Fraction.hpp"
 using namespace std;

namespace ariel{
    
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

    void Fraction::reduce(){
        // If denominator is negative, move sign to numerator
        if(denominator < 0){
            numerator *= -1;
            denominator *= -1;
        }
        // Simplify the fraction
        long long gcdVal = gcd(abs(numerator), denominator);
        numerator /= gcdVal;
        denominator /= gcdVal;
    }

    // Overloaded operators:
    Fraction operator+(const Fraction& num1, const Fraction& num2) {
        int num = num1.numerator * num2.denominator + num1.denominator * num2.numerator;
        int den = num1.denominator * num2.denominator;
        Fraction result(num, den);
        result.reduce();
        return result;
    }

    Fraction operator-(const Fraction& num1, const Fraction& num2){
        int num = num1.numerator * num2.denominator - num1.denominator * num2.numerator;
        int den = num1.denominator * num2.denominator;
        Fraction result(num, den);
        result.reduce();
        return result;
    }

    Fraction operator*(const Fraction& num1, const Fraction& num2){
        int num = num1.numerator * num2.numerator;
        int den = num1.denominator * num2.denominator;
        Fraction result(num, den);
        result.reduce();
        return result;    
    }

    Fraction operator/(const Fraction& num1, const Fraction& num2) {
        int num = num1.numerator * num2.denominator ;
        int den = num1.denominator * num2.numerator;
        Fraction result(num, den);
        result.reduce();
        return result;  
    }

    bool operator==(const Fraction& num1, const Fraction& num2){
        return (num1.numerator == num2.numerator) && (num1.denominator ==num2.denominator);
    }
    bool operator!=(const Fraction& num1, const Fraction& num2){
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
        advance();
        return *this;
    }

    const Fraction Fraction::operator++(int){ // postfix increment
        Fraction result = *this; //save it for return the object before the changes
        advance();
        return result;
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

 
}