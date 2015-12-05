#include "gestormatricula.h"

GestorMatricula::GestorMatricula()
{
    
}
/*
 * Passar um ponteiro ou referência
 * a diferença é quando chama. Agora podemos
 * receber um aluno e usar o.
 * Aqui só chama objetos const do aluno
 * se precisar mexer no objeto devemos retirar o const
 * A primeira opção é passar por referência constante
*/
bool GestorMatricula::matriculaAluno(const Aluno &aluno)
{
 return true;   
}



