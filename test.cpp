#include "test.hpp"

etudent::etudent(){}

etudent::etudent(int _id, std::string _name, std::string _prenom): name(_name) , prenom(_prenom)
{
    this->id =_id;
}


void etudent::print()
{
    std::cout << "id is :" << name << "\nname is :" << name << "\nprenom is :" << prenom << std::endl;
}
etudent::~etudent() {}



//---------------------------------------------------------------------------------------------------------//



tabetudent::tabetudent(int _size)
{
    this->size = _size;
    this->courant_size = 0;
    this->Tab = new etudent[_size];
}
void tabetudent::Add(etudent a)
{
    if(courant_size < size)
        Tab[courant_size++] = a;
    else
        throw "chahlaoui";
}

void tabetudent::printTaille()
 {
    std::cout << "Taille courante : " << courant_size << std::endl;
}

tabetudent::~tabetudent()
{
}



//---------------------------------------------------------------------------------------------------------//

expt::expt(std::string str)
{

}

std::string expt::getMsg()
{
    return (msg);
}