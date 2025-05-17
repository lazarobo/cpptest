#include "../include/aluno.h"
#include "../include/turma.h"
#include <iostream>

int main() {

    Aluno a;
    a.setNome("Lazaro");
    a.setMatricula("11111");
    a.setAge(21);
    a.setCurso("BTI");

    Aluno b;
    b.setNome("Denise");
    b.setMatricula("22222");
    b.setAge(15);
    b.setCurso("BTI");

    Aluno c;
    c.setNome("Carlos");
    c.setMatricula("33333");
    c.setAge(203);
    c.setCurso("BTI");

    Aluno l;
    l.setNome("Isaac");
    l.setMatricula("55555");
    l.setAge(223);
    l.setCurso("BTI");

    Aluno d;
    d.setNome("Alana");
    d.setMatricula("44444");
    d.setAge(4);
    d.setCurso("BTI");

    a.printAlunoInfo();
    b.printAlunoInfo();
    c.printAlunoInfo();
    d.printAlunoInfo();

    Turma lp1;
    lp1.setNome("Linguagem de Programação I");
    lp1.setCodigo("IMD0030");

    lp1.addAluno(a);
    lp1.addAluno(b);
    lp1.addAluno(c);
    lp1.addAluno(d);
    lp1.addAluno(l);

    lp1.printTurmaInfo();

    lp1.removeAluno("22222");

    return 0;
}