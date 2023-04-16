#include "Fraction.hpp"
 
namespace ariel{
    
    Fraction::Fraction(float f){

    }

    // Overloaded operators
    Fraction Fraction::operator+(const Fraction& other) const{
        return Fraction(1,1);
    }

    Fraction Fraction::operator-(const Fraction& other) const{
        return Fraction(1,1);
    }

    Fraction Fraction::operator*(const Fraction& other) const{
        return Fraction(1,1);
    }

    Fraction Fraction::operator/(const Fraction& other) const{
        return Fraction(1,1);
    }

    bool Fraction::operator==(const Fraction& other) const{
        return true;
    }

    bool Fraction::operator>(const Fraction& other) const{
        return true;
    }

    bool Fraction::operator<(const Fraction& other) const{
        return true;
    }

    bool Fraction::operator>=(const Fraction& other) const{
        return true;
    }

    bool Fraction::operator<=(const Fraction& other) const{
        return true;
    }

    Fraction& Fraction::operator++(){ // prefix increment
        return *this;
    }

    const Fraction Fraction::operator++(int){ // postfix increment
        return Fraction(1,1);
    }

    Fraction& Fraction::operator--(){ // prefix increment
        return *this;
    }

    const Fraction Fraction::operator--(int){ // postfix increment
        return Fraction(1,1);
    }

    ostream& Fraction::operator<<(ostream& os, const Fraction& f){
        return os;
    }

    istream& Fraction::operator>>(istream& is, Fraction& f){
        return is;
    }
}