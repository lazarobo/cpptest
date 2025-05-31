#include <iostream>

template <class T>
class Par {
private:

    T primeiroValor; //atributos
    T segundoValor;

public:

    //construtor parametrizado
    Par(T primeiroValor, T segundoValor) {
        this->primeiroValor = primeiroValor;
        this->segundoValor = segundoValor;
    }

    //sobrecarga da saida dos par de valores (V1, V2)
    void saida() const {
        std::cout << "[" << primeiroValor << ", " << segundoValor << "]";
    }


    //comparacao para definir sinal.
    char compararCom(Par& outroPar) {
        if (primeiroValor < outroPar.primeiroValor) return '<';
        if (primeiroValor > outroPar.primeiroValor) return '>';
        if (segundoValor < outroPar.segundoValor) return '<';
        if (segundoValor > outroPar.segundoValor) return '>';
        return '=';
    }

    void mostrarComparacao(Par& outroPar) {
        this->saida();
        std::cout << " " << compararCom(outroPar) << " ";
        outroPar.saida();
        std::cout << std::endl;
    }
};