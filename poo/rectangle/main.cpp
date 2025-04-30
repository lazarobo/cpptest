#include <iostream>
#include "rectangle.h"
#include "circle.h"

int main() {
    Retangulo r(10, 5);
    std::cout << "Largura = " << r.getLargura() << std::endl;
    std::cout << "Altura = " << r.getAltura() << std::endl;

    Retangulo q;
    std::cout << "Largura = " << q.getLargura() << std::endl;
    std::cout << "Altura = " << q.getAltura() << std::endl;

    Circle bolota(10);
    std::cout << "Raio = " << bolota.getRaio() << std::endl;
    std::cout << "area = " << bolota.areaCircle() << std::endl;

    Circle bolinha;
    bolinha.setRaio(20);
    std::cout << "Raio = " << bolinha.getRaio() << std::endl;
    std::cout << "Area = " << bolinha.areaCircle() << std::endl;

    return 0;
}