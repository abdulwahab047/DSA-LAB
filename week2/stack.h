#pragma once
#include<iostream>
using namespace std;

template<class Itemtype>
class Stack {
 public:
	Stack();
	Stack(int max);
	~Stack();
	int IsEmpty() const;
	int IsFull() const;
	void Push(Itemtype newitem);
	void Pop(Itemtype& item);
 private:
	int top;
	int maxStack;
	Itemtype* items;
};
