#include "Fraction.hpp"
 
namespace ariel{
    
    Fraction::Fraction(float f){

    }

    // Overloaded operators
    Fraction Fraction::operator+(const Fraction& other) const{
        return Fraction(1,1);
    }

    Fraction Fraction::operator+(const int num) const{
        return Fraction(1,1);
    }

    Fraction Fraction::operator+(const double num) const{
        return Fraction(1,1);
    }

    

    Fraction Fraction::operator-(const Fraction& other) const{
        return Fraction(1,1);
    }
     Fraction Fraction::operator-(const int num) const{
        return Fraction(1,1);
    }
    Fraction Fraction::operator-(const double num) const{
        return Fraction(1,1);
    }


    Fraction Fraction::operator*(const Fraction& other) const{
        return Fraction(1,1);
    }
    Fraction Fraction::operator*(const int num) const{
        return Fraction(1,1);
    }
    Fraction Fraction::operator*(const double num) const{
        return Fraction(1,1);
    }


    Fraction Fraction::operator/(const Fraction& other) const{
        return Fraction(1,1);
    }
    Fraction Fraction::operator/(const int num) const{
        return Fraction(1,1);
    }
    Fraction Fraction::operator/(const double num) const{
        return Fraction(1,1);
    }


    bool Fraction::operator==(const Fraction& other) const{
        return true;
    }
    bool Fraction::operator==(const int num) const{
        return true;
    }
    bool Fraction::operator==(const double num) const{
        return true;
    }


    bool Fraction::operator>(const Fraction& other) const{
        return true;
    }
    bool Fraction::operator>(const int num) const{
        return true;
    }
    bool Fraction::operator>(const double num) const{
        return true;
    }


    bool Fraction::operator<(const Fraction& other) const{
        return true;
    }
    bool Fraction::operator<(const int num) const{
        return true;
    }
    bool Fraction::operator<(const double num) const{
        return true;
    }



    bool Fraction::operator>=(const Fraction& other) const{
        return true;
    }
    bool Fraction::operator>=(const int num) const{
        return true;
    }
    bool Fraction::operator>=(const double num) const{
        return true;
    }


    bool Fraction::operator<=(const Fraction& other) const{
        return true;
    }
    bool Fraction::operator<=(const int num) const{
        return true;
    }
    bool Fraction::operator<=(const double num) const{
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

    // std::ostream& Fraction::operator<<(std::ostream& os, const Fraction& f){
    //     os << f.numerator <<'/' << f.denominator;
    //     return os;    
    // }

    // std::istream& Fraction::operator>>(std::istream& is, Fraction& f){
    //     return is;
    // }
}