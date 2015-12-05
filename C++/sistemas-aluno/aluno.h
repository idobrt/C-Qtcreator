#ifndef ALUNO_H
#define ALUNO_H
/*
 * Dentro de um header só precisamos fazer um include 
 * se utilizamos um tipo como um objeto. Então podemos 
 * fazer um foward declaration utilizado para referência. Ganhamos em tempo de compilação
 * Aqui não precisamos de tudo de Professor então 
 * trocamos o #include "professor.h" por class Professor.
*/
class Professor;
#include<Qstring>

class Aluno
{
public:
    Aluno(QString name = "",Professor *orientador = 0);//construtor com valor default
    /*
     * Quando um dos elemento tem valor default todos os outros devem ter
     * valor default
    */
    Aluno(const Aluno &aluno);//copy constructor a passagem é por referência
    void setOrientador(Professor *orientador);
    const Aluno & operator=(const Aluno &aluno);
    friend class Professor;

private:
/*
 * Agregação- Um aluno agrega um professor
*/
    QString m_name;
    Professor *m_orientador;
};
/*
 * O método abaixo está com a sintaxe errada
 * Sandro estava mostrando a sintaxe do operator igual
*/

ostream &operator<<(ostram &os,const Aluno &aluno){
    os<<""<<aluno.m_name<<"";
    return os;
}

#endif // ALUNO_H
