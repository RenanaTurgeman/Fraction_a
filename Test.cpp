#include "doctest.h"
#include "sources/Fraction.hpp"
using namespace ariel;

TEST_CASE("legal inputs while build the Fraction constructor")
{
    // chek some regular cases that shold be good:
    CHECK_NOTHROW(Fraction(1, 1));
    CHECK_NOTHROW(Fraction(0, 1));    // this is ok. 0/1=0.
    CHECK_NOTHROW(Fraction(-5, -5));  // 0k. -5/-5=1
    CHECK_NOTHROW(Fraction(-10, -5)); // ok. -10/-5=2
    CHECK_NOTHROW(Fraction(-5, 10));  // ok. -5/10 =-1/2
    CHECK_NOTHROW(Fraction(0, -7));
}

TEST_CASE(" illegal input while build the Fraction constructor")
{
    CHECK_THROWS(Fraction(1, 0)); // It is illegal to have 0 in the denominator
    CHECK_THROWS(Fraction(-8, 0));
}

TEST_CASE("Arithmetic test")
{

    Fraction f1(1, 2);
    Fraction f2(3, 4);
    Fraction f3(1, 6);

    // check + - * / functions
    CHECK((f1 + f2) == Fraction(5, 4));
    CHECK((f2 + f3) == Fraction(11, 12));

    CHECK((f2 - f3) == Fraction(7, 12));
    CHECK((f1 - f3) == Fraction(2, 6)); //=1/3

    CHECK((f1 * f3) == Fraction(1, 12));
    CHECK((f1 * f2) == Fraction(3, 12)); //=1/4

    CHECK((f1 / f2) == Fraction(2, 3));
    CHECK((f2 / f3) == Fraction(9, 2));
}

TEST_CASE("Arithmetic worng test ")
{
    Fraction f1(1, 2);
    Fraction f2(3, 4);
    Fraction f3(1, 6);

    // check + - * / functions
    CHECK_FALSE((f1 + f2) == f3);
    CHECK_FALSE((f2 + f3) == f1);

    CHECK_FALSE((f2 - f1) == f3);
    CHECK_FALSE((f2 - f3) == f1);

    CHECK_FALSE((f1 * f2) == f3);
    CHECK_FALSE((f3 * f3) == f3);

    CHECK_FALSE((f2 / f1) == f3);
    CHECK_FALSE((f3 / f2) == f1);
}

TEST_CASE("Equality test")
{
    Fraction f1(1, 2);
    Fraction f2(3, 4);
    Fraction f3(3, 4);

    // check > < >= <= == functions
    CHECK((f1 < f2) == true);
    CHECK((f1 > f2) == false);

    CHECK((f1 <= f2) == true);
    CHECK((f3 <= f2) == true);
    CHECK((f1 >= f2) == false);
    CHECK((f1 <= f2) == true);

    CHECK((f1 == f2) == false);
    CHECK((f1 == f1) == true);
    CHECK((f2 == f3) == true);
    CHECK(((f1 != f2)==true));
}

TEST_CASE("prefix and postfix increment")
{
    Fraction f1(1, 2);

    CHECK((++f1) == Fraction(3, 2)); // first add , second return
    CHECK((f1++) == Fraction(3, 2)); // first return, after add
    CHECK((f1) == Fraction(5, 2));   // check if increment after return
}

TEST_CASE("prefix and postfix decrement")
{
    Fraction f1(3, 2);

    CHECK((--f1) == Fraction(1, 2)); // first sub , second return
    CHECK((f1--) == Fraction(1, 2)); // first return, after sub
    CHECK((f1) == Fraction(-1, 2));  // check if decrement after return
}

TEST_CASE("Distributive commutativitive checks")
{
    Fraction f1(1, 2);
    Fraction f2(3, 4);
    Fraction f3(3, 4);

    CHECK((f1 + f2) == (f2 + f1));
    CHECK((f1 * f2) == (f2 * f1));

    CHECK((f1 + f2) + f3 == f1 + (f2 + f3));
    CHECK((f1 * f2) * f3 == f1 * (f2 * f3));

    CHECK((f1 * (f2 + f3)) == (f1 * f2) + (f1 * f3));
}

TEST_CASE("Reducing fractures")
{
    Fraction f1(7, 28);
    Fraction f2(3, 4);
    Fraction f3(52, 56);

    CHECK(f1 == Fraction(1, 4));
    CHECK(f2 == Fraction(9, 12));
    CHECK(f3== Fraction(13,14));
}

TEST_CASE("Check printing function"){
    Fraction f1(1,2);
    
    CHECK_NOTHROW(cout << f1 << endl);
}

TEST_CASE("Arithmetic operations with numbers"){
  Fraction f1(1, 2);
    Fraction f2(3, 4);
    Fraction f3(1, 6);

    // check + - * / functions
    CHECK((f1 + 1) == Fraction(3, 2));
    CHECK((0.8 + f3) == Fraction(29, 30));

    CHECK((f2 - 0.25) == f1);
    CHECK((0.5 - f3) == Fraction(2, 6)); 

    CHECK((f1 * 1) == f1);
    CHECK((f1 * 0.5) == 0.25); //=1/4

    CHECK((f2 / f2) == 1);
}

TEST_CASE("Equality operations with numbers")
{
    Fraction f1(1, 2);
    Fraction f2(3, 4);
    Fraction f3(3, 4);

    // check > < >= <= == functions
    CHECK((f1 < 1) == true);
    CHECK((0.333 > f2) == false);

    CHECK((f1 <= 5.66) == true);
    CHECK((0.1 <= f2) == true);
    CHECK((f1 >= 84.2) == false);
    CHECK((f1 <= 82.6) == true);

    CHECK((f1 == 0.99) == false);
    CHECK((f1 != 3)==true);
}