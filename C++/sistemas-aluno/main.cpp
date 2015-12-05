#include <iostream>
#include "aluno.h"
#include "professor.h"
#include "gestormatricula.h"

using namespace std;

int main(int arcgc, char *argv[])
{
   Professor p1("Sandro");
   Aluno a1("Icaro",&p1);
   Aluno a2("Enoque",&p1);
   count <<"Antes";
   a2 = a1;
   /*roda o operator igual da classe aluno. Os objetos já foram criados
   se for tipo primitivo tudo bem se for ponteiro temos um problema
   pois podemos apagar e o ponteiro apontar para uma área de memória sem nada
  */
   count<<"Depois";
   GestorMatricula gestor;
   gestor.matriculaAluno(a1);
}

