#include "Funcionario.h"

std::list<Funcionario*> Funcionario::funcionarios;
/*
Funcionario::Funcionario(){
    m_id = 1;
    m_nome = "John Doe";
    m_cpf = "119.143.762-31";
    m_idade     = 21;
    m_tipo_sanguineo = 'A';
    m_fator_rh = '-';
    m_especialidade = "Animais peçonhentos";
};
*/

//Funcionario::~Funcionario(){};

std::list<Funcionario*> Funcionario::all(){
    return Funcionario::funcionarios;
}

void Funcionario::addToList(){
    Funcionario::funcionarios.push_back(this);
}
