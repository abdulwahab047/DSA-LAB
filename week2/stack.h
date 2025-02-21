#pragma once
#define MAX_ITEMS 100
#include <iostream>
using namespace std;

typedef int ItemType;
class Stack {
private:
    int top;
    char items[MAX_ITEMS];

public:
    Stack();
    ~Stack();
    bool isEmpty() const;
    bool isFull() const;
    void push(char newitem);
    void pop(char& item);
    int  peek() const;
    void reverse(string input);
};