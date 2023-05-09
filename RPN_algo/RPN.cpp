//
// Created by vince on 4/5/2023.
//

#include "RPN.h"
std::stack<int> RPN::stack;

int RPN::calculate(const std::string &expression)
{
    for(char c : expression)
    {
        if(std::isdigit(c))
            stack.push(c - '0');
        else
        {
            int num2 = stack.top();
            stack.pop();

            int num1 = stack.top();
            stack.pop();

            switch(c)
            {
                case '*':
                    stack.push(num1 * num2);
                    break;
                case '+':
                    stack.push(num1 + num2);
                    break;
                case '-':
                    stack.push(num1 - num2);
                    break;
                case '/':
                    stack.push(num1 / num2);
                    break;
            }
        }
    }
    return stack.top();
}

