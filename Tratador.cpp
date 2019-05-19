#include<iostream>
#include "Tratador.h"
#include "Funcionario.h"

Tratador::Tratador(){
    m_id = 1;
    m_nome = "Luis Roberto";
    m_cpf = "116.002.814-19";
    m_idade     = 21;
    m_tipo_sanguineo = 'A';
    m_fator_rh = '-';
    m_especialidade = "Animais peçonhentos";
    m_nivel_de_seguranca = 5;

    this->addToList();
}

void Tratador::details(){
    std::cout<<"Isso é um Tratador"<<std::endl;
    std::cout<<"-----===-------------===-------";
    std::cout<<"Seus dados sao: "<<std::endl;
    std::cout<<"Id: "<<m_id<<std::endl;
    std::cout<<"Nome: "<<m_nome<<std::endl;
    std::cout<<"CPF: "<<m_cpf<<std::endl;
    std::cout<<"Idade: "<<m_idade<<std::endl;
    std::cout<<"Tipo sanguineo: "<<m_tipo_sanguineo<<std::endl;
    std::cout<<"Fator RH: "<<m_fator_rh<<std::endl;
    std::cout<<"Especialidade: "<<m_especialidade<<std::endl;
    std::cout<<"Nivel de seguranca: "<<m_nivel_de_seguranca<<std::endl<<std::endl;
}