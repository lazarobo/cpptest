#ifndef ALUNO_h
#define ALUNO_h

#include <string>
#include <iostream>

class Aluno {

    private:
        std::string _matricula;
        std::string _nome;
        int _age;

    public:
        void setNome(std::string newNome);
        std::string getNome();

        void setMatricula(std::string newMatricula);
        std::string getMatricula();

        void setAge(int newAge);
        int getAge();

        void printAlunoInfo();

};



#endif