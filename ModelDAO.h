/* 
Class: ModelDAO
Author: Arnaldo Barbosa    
*/
#ifndef _MODELDAO_H_
#define _MODELDAO_H_

#include<string>
#include<list>


class ModelDAO{


    protected:
        std::string pathToFile;
    public:

        /*
        *   Create
        */
        bool save();

        /*
        *   Read
        */
        static ModelDAO* find(int id);
        static std::list<ModelDAO*> where(std::string expression); 
        static std::list<ModelDAO*> all(); 

        /*
        *   Update
        */
        bool update(std::string expression);

        /*
        *   Delete
        */
       static bool removeWhere(std::string expression);
       bool remove();
};

#endif