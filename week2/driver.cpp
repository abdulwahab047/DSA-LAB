#include <iostream>
#include "stack.cpp"  
using namespace std;

int main() 
{
	Stack<int> IntStack;
	Stack<float> FloatStack;
	int data;
	float val;

	IntStack.Push(35);
	FloatStack.Push(3.1415927);

	IntStack.Pop(data);
	cout << data << endl;

	FloatStack.Pop(val);
	cout << val << endl;

	return 0;
}