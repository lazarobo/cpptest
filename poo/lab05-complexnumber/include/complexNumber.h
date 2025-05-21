#include <iostream>
#include <math.h>

class ComplexNumber {

    private:

    double real;
    double imag;

    public:

    ComplexNumber(double r = 0.0, double i = 0.0);

    ComplexNumber operator+(const ComplexNumber& outro) const;
    ComplexNumber operator-(const ComplexNumber& outro) const;
    ComplexNumber operator*(const ComplexNumber& outro) const;

    ComplexNumber operator-() const;   // operadores unarios  
    double operator!() const;            

    //saída formatada
    friend std::ostream& operator<<(std::ostream& os, const ComplexNumber& cn);
};