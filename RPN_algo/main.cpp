#include <iostream>
#include "RPN.h"
#include "ShuntingYard.h"
int main()
{
    //54*3+1-
    //std::cout << RPN::calculate("72+83-5*");
    //ShuntingYard::ShuntingYardAlgo("(5*4+3)-1");
    //ShuntingYard::ShuntingYardAlgo("(5*4+3)-1");
    //ShuntingYard::print();
    //std::cout << ShuntingYard::ShuntingYardAlgo("((3+4)*2)/7");
    std::cout << RPN::calculate(ShuntingYard::ShuntingYardAlgo("(4+2)+(3*(5-1))")); // 18
}
