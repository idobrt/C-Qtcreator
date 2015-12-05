#include "aluno.h"
#include <iostream.h>
/*
 * Todos elementos estão sendo inicializados
 * justamente pq atribuição é mais lenta que
 * inicialização
 */
Aluno::Aluno(QString name,Professor *orientador):
    m_aluno(name),
    m_orientador(orientador)
{
    
}

Aluno::Aluno(const Aluno &aluno):
    m_name(aluno.m_name),
    m_orientador(aluno.m_orientador)
{
  cout <<"Rodei o copy constructor"<<endl;
}


void Aluno::setOrientador(Professor *orientador)
{
    m_orientador = orientador;
}
/*
 * Correta implementação de operator igual
*/
const Aluno &Aluno::operator=(const Aluno &aluno)
{
    m_name(aluno.m_name);
    m_orientador(aluno.m_orientador);
    count<<"Rodei o operator =";
    return *this;
}
