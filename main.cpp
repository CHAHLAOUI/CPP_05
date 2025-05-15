#include "test.hpp"
#include "test.cpp"



int main()
{
  
    etudent e1(1, "aaa" , "chaaaa");
    etudent e2(2, "bbb" , "chbbbb");
    etudent e3(3, "ccc" , "chcccc");
    tabetudent E(2);
    
    E.Add(e1);
    E.printTaille();
    E.Add(e2);
    E.printTaille();
    E.Add(e3);
    E.printTaille();
    
    return (0);
}