#include<iostream>
#include<fstream>
#include "Veterinario.h"

Veterinario::Veterinario(){
    m_id = 1;
    m_nome = "Luis Roberto";
    m_cpf = "116.002.814-19";
    m_idade     = 21;
    m_tipo_sanguineo = 'A';
    m_fator_rh = '-';
    m_especialidade = "Animais peçonhentos";
    m_crmv = "1451-45851-12";
}

void Veterinario::details(){
    std::cout<<"Isso é um Veterinario"<<std::endl;
    std::cout<<"-----===-------------===-------";
    std::cout<<"Seus dados sao: "<<std::endl;
    std::cout<<"Id: "<<m_id<<std::endl;
    std::cout<<"Nome: "<<m_nome<<std::endl;
    std::cout<<"CPF: "<<m_cpf<<std::endl;
    std::cout<<"Idade: "<<m_idade<<std::endl;
    std::cout<<"Tipo sanguineo: "<<m_tipo_sanguineo<<std::endl;
    std::cout<<"Fator RH: "<<m_fator_rh<<std::endl;
    std::cout<<"Especialidade: "<<m_especialidade<<std::endl;
    std::cout<<"Nivel de seguranca: "<<m_crmv<<std::endl<<std::endl;
}

bool Veterinario::save(){
    std::ofstream file;
    file.open(Veterinario::pathToFile);

    file<<m_id<<"Tratador"<<';'<<m_nome<<';'<<m_cpf<<';'<<m_idade<<';'<<m_tipo_sanguineo<<';'<<m_fator_rh<<';'<<m_especialidade<<';'<<m_crmv<<';'<<';'<<std::endl;

    file.close();
    return true;
}