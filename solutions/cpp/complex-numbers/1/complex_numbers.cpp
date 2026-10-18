#include "complex_numbers.h"

namespace complex_numbers {

    Complex::Complex(double realVal, double img){
        Complex::realVal = realVal;
        Complex::imgVal = img;
    }

   double  Complex::real() const{
        return this->realVal;
    }

    double  Complex::imag() const{
        return this->imgVal;
    }

    Complex& Complex::operator*(const Complex& other) const{
        double real = this->realVal * other.realVal - this->imgVal * other.imgVal;
        double img = this->realVal * other.imgVal + this->imgVal * other.realVal;
        return *(new Complex(real, img));
    }

    Complex& Complex::operator+(const Complex& other) const {
        double real = this->realVal + other.realVal;
        double img = this->imgVal + other.imgVal;
        return *(new Complex(real, img));
    }

    Complex& Complex::operator-(const Complex& other) const {
        double real = this->realVal - other.realVal;
        double img = this->imgVal - other.imgVal;
        return *(new Complex(real, img));
    }

    Complex& Complex::operator/(const Complex& other) const {
        double real = ((this->realVal * other.realVal) + (this->imgVal * other.imgVal))/(other.realVal*other.realVal + other.imgVal*other.imgVal);
        double img = ((this->imgVal * other.realVal) - (this->realVal * other.imgVal))/(other.realVal*other.realVal + other.imgVal*other.imgVal);
        return *(new Complex(real, img));
    }

    double Complex::abs() const{
        return sqrt(pow(this->realVal,2)+pow(this->imgVal,2));
    }

    Complex& Complex::conj() const{
        double real = this->realVal;
        double img  = - this->imgVal;
        return *(new Complex(real, img));
    }

    Complex& Complex::exp() const{
        double real = std::exp(this->realVal) * cos(this->imgVal);
        double img = std::exp(this->realVal) * sin(this->imgVal);
        return *(new Complex(real, img));
    }



}  // namespace complex_numbers
