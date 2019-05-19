#include <cstdlib>
#include <string>
#include <iostream>
#include <list>

#include "Funcionario.h"
#include "Veterinario.h"
#include "Tratador.h"

int main(int argc, char const *argv[]){

    std::list<Funcionario*> funcionarios;
    funcionarios = Funcionario::all();

    Veterinario *func1 = new Veterinario(); 
    Veterinario *func2 = new Veterinario(); 
    Tratador *func3 = new Tratador(); 
    Tratador *func4 = new Tratador(); 

    funcionarios.push_back(func1);
    funcionarios.push_back(func2);
    funcionarios.push_back(func3);
    funcionarios.push_back(func4);

    for(std::list<Funcionario*>::iterator it=funcionarios.begin(); it != funcionarios.end(); ++it){
        (*it)->details();
        (*it)->save();
    }


    return 0;
}
