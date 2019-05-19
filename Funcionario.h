/* 
Class: Funcionario
Author: Arnaldo Barbosa    
*/
#ifndef _FUNCIONARIO_H_
#define _FUNCIONARIO_H_

#include "ModelDAO.h"

#include<iostream>
#include<string>
#include<list>

class Funcionario : public ModelDAO{

    private:
    protected:
        int m_id;
        std::string m_nome;
        std::string m_cpf;
        short m_idade;
        short m_tipo_sanguineo;
        char m_fator_rh;
        std::string m_especialidade;

        void addToList();
    
    public:
        static std::list<Funcionario*> funcionarios;
        Funcionario(){};
        Funcionario(int id, std::string nome, std::string cpf, short idade, short tipo_sanguineo, char fator_rh, std::string especialidade){};
        ~Funcionario(){};

        static Funcionario* find(int id);
        static std::list<Funcionario*> where(std::string expression); 
        static std::list<Funcionario*> all();

        virtual void details() = 0; 
};
    
#endif