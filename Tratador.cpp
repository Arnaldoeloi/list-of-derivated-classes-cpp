#include<iostream>
#include<fstream>
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


bool Tratador::save(){
    std::ofstream file;
    std::cout<<Tratador::pathToFile;
    file.open(Tratador::pathToFile, std::ios::app); //app significa Append, ou seja, escrita no fim do arquivo

    if(file.is_open()){
        std::cout<<"Saving..."<<std::endl;
        file<<m_id<<';'<<"Tratador"<<';'<<m_nome<<';'<<m_cpf<<';'<<m_idade<<';'<<m_tipo_sanguineo<<';'<<m_fator_rh<<';'<<m_especialidade<<';'<<';'<<m_nivel_de_seguranca<<std::endl;
    }else{
        std::cerr<<"Couldn't open the file!"<<std::endl;
    }

    file.close();
    return true;
}