//
// Created by vince on 4/5/2023.
//

#ifndef RPN_ALGO_SHUNTINGYARD_H
#define RPN_ALGO_SHUNTINGYARD_H
#include <iostream>
#include <stack>
#include <queue>
class ShuntingYard
{
private:
    static const int size = 8;
    static std::stack<char> stack;
    static std::queue<char> queue;
    static int precedence[size];
public:
    static std::string ShuntingYardAlgo(const std::string &expression);
    static void checkTopStack(char &op);
    static void lastValue(char &value);
    static void print();
    static std::string covert();
};


#endif //RPN_ALGO_SHUNTINGYARD_H
