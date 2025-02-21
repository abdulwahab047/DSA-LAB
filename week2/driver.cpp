#include<iostream>
#include"stack.h"
using namespace std;

int main() {
    Stack stk;
    stk.push(98);
    stk.push(99);
    stk.push(100);


    cout << "Top element is: " << stk.peek() << endl;

    return 0;
}

//int main()
//{
//    Stack s1;
//    string input;
//    cout << "Enter a string: ";
//    cin >> input;
//    cout << "\nReserved string is: ";
//    s1.reverse(input);
//
//    return 0;
//}