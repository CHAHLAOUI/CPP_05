// #ifndef H_HPP 
// #define H_HPP 

#include <iostream>






int main()
{
    int hour;
    try
    {
        std::cout << "Hello Chahlaoui" << std::endl;
        std::cin >>  hour;
        if (hour < 0)
            throw "error";
        std::cout << "time is : " << hour << ": 00" << std::endl;
    }
    catch(...)
    {
        std::cout << "on : erroe" << std::endl;
    }
    std::cout << "hahahahahahahahahahahahahahah" << std::endl;
}




















// class etudent
// {
//     private:
//         int id;
//         std::string name;
//         std::string prenom;
//     public:
//         etudent();
//         etudent(int _id, std::string _name, std::string _prenom);
//         void print();
//         ~etudent();

// };





// class tabetudent
// {
// private:
//     etudent *Tab;
//     int     size;
//     int     courant_size;
// public:
//     tabetudent(int _size);

//     void Add(etudent a) ;
//     void printTaille();
//     ~tabetudent();
// };



// class expt
// {
//     private:
//         std::string msg;
//     public:
//         expt(std::string);
//         std::string getMsg();
// }




// #endif