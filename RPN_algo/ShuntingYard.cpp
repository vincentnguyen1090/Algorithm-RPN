//
// Created by vince on 4/5/2023.
//

#include "ShuntingYard.h"

std::stack<char> ShuntingYard::stack;
std::queue<char> ShuntingYard::queue;
//ascii table
// ( ) * / + -
int ShuntingYard::precedence[size] = {3, 3, 2, 1, 0, 1, 0, 2};

std::string ShuntingYard::ShuntingYardAlgo(const std::string &expression)
{
    for (char c: expression)
    {
        if (std::isdigit(c))
        {
            queue.push(c);
        }
        else
            checkTopStack(c);
    }
    while(!stack.empty())
    {
        queue.push(stack.top());
        stack.pop();
    }
    return ShuntingYard::covert();
}

void ShuntingYard::checkTopStack(char &op)
{
    if(stack.empty() || stack.top() == '(')
        stack.push(op);
    else if(op == ')')
    {
        while(stack.top() != '(')
        {
            queue.push(stack.top());
            stack.pop();
        }
        //poping the '('
        stack.pop();
    }
    else if(precedence[op - '('] >= precedence[stack.top() - '('])
    {
        stack.push(op);
    }
    else
    {
        do
        {
            queue.push(stack.top());
            stack.pop();
        } while(!stack.empty() && precedence[op - '('] >= precedence[stack.top() - '(']);
        stack.push(op);
    }
}

void ShuntingYard::print()
{
    while(!queue.empty())
    {
        std::cout << queue.front();
        queue.pop();
    }
}

std::string ShuntingYard::covert()
{
    std::string s;
    while(!queue.empty())
    {
        s += queue.front();
        queue.pop();
    }
    return s;
}
