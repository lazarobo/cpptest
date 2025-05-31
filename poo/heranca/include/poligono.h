#include <iostream>

class Poligono
{
protected:

    double _largura;
    double _altura;

public:

    Poligono(double a, double b);
    virtual double area() = 0;
    void printArea() { std::cout << area() << std::endl; }

};

class Retangulo : public Poligono {
    public:
        Retangulo(double a, double b);
       double area() override { return _largura * _altura; }
    };

    class Triangulo : public Poligono {
    public:
        Triangulo(double a, double b);
       double area() override { return (_largura * _altura)/2; }
    };

