/*#include<iostream>
#include<iomanip>
using namespace std;
int max1(int x, int y) {
    return (x > y) ? x : y;
}
int max2(int x, int y, int& Larger) {
    return	Larger = (x > y) ? x : y;
}
int max3(int x, int y, int* Larger) {
    return	*Larger = (x > y) ? x : y;
}
int main() {
    int Larger = 10;
    int x = 2, y = 3;
    max3(x, y, &Larger);
    cout << x << setw(5) << y << setw(5) << Larger << endl;
    return 0;
}




EXAMPLE 1.2

#include<iostream>
#include<iomanip>
using namespace std;
class Complex {
    float re, im;
public:
    Complex(float r) {
        re = r;
        im = 0.0;
    }
    Complex(float r, float i) {
        re = r;
        im = i;
    }
    ~Complex() {};
    float Real() {
        return re;
    }
    float Imag() {
        return im;
    }
    double Magnitude() {
        return sqrt(re * re + Imag() * Imag());
    }
    Complex operator +(Complex b) {
        return Complex(re + b.re, im + b.im);
    }
    Complex operator =(Complex b) {
        return Complex(re = b.re, im = b.im);
    }
};
int main() {
    Complex a(1.0, 1.0);
    Complex* b = new Complex(5.0);
    Complex c(0, 0);
    cout << "a real= " << a.Real() << " a imaginary= " << a.Imag() << endl;
    cout << "b real= " << b->Real() << " b imaginary= " << b->Imag() << endl;
    c = a + (*b);
    cout << "c real= " << c.Real() << " c imaginary= " << c.Imag() << endl;
    delete b;
    return 0;
}*/

EX 1.1

/*#include<iostream>
#include<iomanip>
using namespace std;
class Complex {
    float re, im;
public:
    Complex(float r) {
        re = r;
        im = 0.0;
    }
    Complex(float r, float i) {
        re = r;
        im = i;
    }
    ~Complex() {
    };
    float Real() {
        return re;
    }
    float Imag() {
        return im;
    }
    double Magnitude() {
        return sqrt(re * re + Imag() * Imag());
    }
    Complex operator +(Complex b) {
        return Complex(re + b.re, im + b.im);
    }
    Complex operator =(Complex b) {
        return Complex(re = b.re, im = b.im);
    }
    Complex Multiply(Complex d) {
        Complex temp(0, 0);
        temp.re = (re * d.re) - (im * d.im);
        temp.im = (re * d.im) + (d.re * im);
        return temp;
    }
    void display() {
        cout << " Product is : " << temp(0, 0) << endl;
    }

};
int main() {
    Complex c1(2, 3), c2(2, 4), temp(0, 0);
    temp = c1.Multiply(c2);
    c1.display();
    return 0;
}

EXAMPLE 1.3

#include<iostream>
#include<iomanip>
using namespace std;
template <class T>
T GetMax(T a, T b) {
    T result;
    result = (a > b) ? a : b;
    return (result);
}
int main() {
    int i = 5, j = 6, k;
    long l = 10, m = 5, n;
    k = GetMax<int>(i, j);
    n = GetMax<long>(l, m);
    cout << k << endl;
    cout << n << endl;
    return 0;
}


EXAMPLE 1.4
#include<iostream>
#include<iomanip>
using namespace std;
template <class t>
class myPair {
    t a, b;
public:
    myPair(t first, t second) {
        a = first;
        b = second;
    }
    t getMax();
    t getMin();
};
template<class t>
t myPair<t>::getMax() {
    t retval;
    retval = a > b ? a : b;
    return retval;
}
int main() {
    myPair <int> myobject(100, 75);
    cout << myobject.getMax();
    cout << endl;
    return 0;
}
EX 1.2
#include<iostream>
#include<iomanip>
using namespace std;
template <class t>
class myPair {
    t a, b;
public:
    myPair(t first, t second) {
        a = first;
        b = second;
    }
    t getMax();
    t getMin();
};
template<class t>
t myPair<t>::getMax() {
    t retval;
    retval = a > b ? a : b;
    return retval;
}
template<class t>
t myPair<t>::getMin() {
    t retval;
    retval = a < b ? a : b;
    return retval;
}

int main() {
    myPair <int> myobject(100, 75);
    cout << myobject.getMax();
    cout << endl;
    cout << myobject.getMin();
    return 0;
}


/*#include<iostream>
#include<iomanip>
using namespace std;
template <class t, int n>
class mySequence {
    t memBlock[n];
public:
    void setMember(int x, t value);
    t getMember(int x);
    t getMax();
    t getMin();
};
template <class t, int n>
void mySequence<t, n>::setMember(int x, t value) {
    memBlock[x] = value;
}
template <class t, int n>
t mySequence<t, n>::getMember(int x) {
    return memBlock[x] ;
}
template <class t, int n>
t mySequence<t, n>::getMax() {
    t max= memBlock[0];
    for (int i = 1; i < n; i++) {
        if (max < memBlock[i]) {
            max = memBlock[i];
        }
    }
    return max;
}
template <class t, int n>
t mySequence<t, n>::getMin() {
    t min = memBlock[0];
    for (int i = 1; i < n; i++) {
        if (min > memBlock[i]) {
            min = memBlock[i];
        }
    }
    return min;
}
int main() {
    mySequence <int, 500> myints;
    mySequence <double, 5> myfloats;
    myints.setMember(0, 100);
    myints.setMember(1, 300);
    myints.setMember(2, 400);
    myints.setMember(3, 600);
    myints.setMember(4, 200);
    cout << myints.getMax() << endl;


    return 0;
}*/
