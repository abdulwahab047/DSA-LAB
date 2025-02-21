#include"stack.h"
#include<stdlib.h>
template <class ItemType>
Stack<ItemType>::Stack() {
	maxStack = 500;
	top = -1;
	items = new ItemType[500];
}
template<class Itemtype>
Stack<Itemtype>::Stack(int max)
{
	maxStack = max;
	top = -1;
	items = new Itemtype[max];
}

template<class Itemtype>
Stack<Itemtype>::~Stack()
{
	delete[] items;
}

template<class Itemtype>
int Stack<Itemtype>::IsEmpty() const
{
	return (top == -1);
}

template<class Itemtype>
int Stack<Itemtype>::IsFull() const
{
	return (top == maxStack - 1);
}

template<class Itemtype>
void Stack<Itemtype>::Push(Itemtype newitem)
{
	if (IsFull())
	{
		cout << "Stack Overflow." << endl;
		exit(1);
	}
	top++;
	items[top] = newitem;
}
template<class Itemtype>
void Stack<Itemtype>::Pop(Itemtype& item)
{
	if (IsEmpty())
	{
		cout << "Stack Underflow." << endl;
		exit(1);
	}

	item = items[top];
	top--;
}
