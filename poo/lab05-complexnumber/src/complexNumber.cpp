#include "../include/complexNumber.h"

ComplexNumber::ComplexNumber(double r, double i) : real(r), imag(i) {} //constructor

ComplexNumber ComplexNumber::operator+(const ComplexNumber& outro) const {
    return ComplexNumber(real + outro.real, imag + outro.imag); //soma os dois número, simples
} 

ComplexNumber ComplexNumber::operator-(const ComplexNumber& outro) const {
    return ComplexNumber(real - outro.real, imag - outro.imag);
}

ComplexNumber ComplexNumber::operator*(const ComplexNumber& outro) const {
    double r = real * outro.real - imag * outro.imag;
    double i = real * outro.imag + imag * outro.real;
    return ComplexNumber(r, i);
}

ComplexNumber ComplexNumber::operator-() const {
    return ComplexNumber(-real, -imag);
}

double ComplexNumber::operator!() const {
    return std::sqrt(real * real + imag * imag);
}

std::ostream& operator<<(std::ostream& os, const ComplexNumber& cn) {
    if (cn.imag < 0)
        os << cn.real << cn.imag << "i";
    else
        os << cn.real << "+" << cn.imag << "i";
    return os;
}