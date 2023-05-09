//
// Created by vince on 4/5/2023.
//

#ifndef RPN_ALGO_RPN_H
#define RPN_ALGO_RPN_H
#include <iostream>
#include <stack>
class RPN
{
private:
    static std::stack<int> stack;
public:
    static int calculate(const std::string &expression);
    static void operations(const char &o);
};


#endif //RPN_ALGO_RPN_H
