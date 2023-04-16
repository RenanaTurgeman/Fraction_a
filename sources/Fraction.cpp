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

    // std::ostream& Fraction::operator<<(std::ostream& os, const Fraction& f){
    //     return os;
    // }

    // std::istream& Fraction::operator>>(std::istream& is, Fraction& f){
    //     return is;
    // }
}