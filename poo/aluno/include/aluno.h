#ifndef ALUNO_h
#define ALUNO_h

#include <string>
#include <iostream>

class Aluno {

    private:
        std::string _matricula;
        std::string _nome;
        std::string _curso;
        int _age;

    public:

        //Aluno(std::string newMatricula, std::string newNome, std::string newCurso, int newAge);

        void setNome(std::string newNome);
        std::string getNome();

        void setMatricula(std::string newMatricula);
        std::string getMatricula();

        void setCurso(std::string newCurso);
        std::string getCurso();

        void setAge(int newAge);
        int getAge();



        void printAlunoInfo();

};

#endif