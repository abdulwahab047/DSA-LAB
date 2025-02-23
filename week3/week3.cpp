//#include<iostream>
//#include<conio.h>
//using namespace std;
//
//int fact(int n) {
//	if (n == 0) 
//	{
//
//		return 1;
//	}
//	else {
//		return n * fact(n - 1);
//	}
//}
//int main() {
//	cout << fact(5) << endl;
//
//	return 0;
//}


//#include<iostream>
//#include<conio.h>
//using namespace std;
//void rev() {
//	char ch;
//	cin.get(ch);
//	if (ch != '\n') {
//		rev();
//		cout.put(ch);
//	}
//}
//int main() {
//	rev();
//	
//	return 0;
//}


//#include<iostream>
//#include<conio.h>
//using namespace std;
//int power(int x, int n) {
//	if (n == 0) {
//		return 1;
//	}
//	else {
//		return power(x, n - 1) * x;
//	}
//}
//int main() {
//cout<<power(5,2);
//	return 0;
//}


//#include<iostream>
//#include<conio.h>
//using namespace std;
//int AckerMann(int m, int n) {
//	if (m == 0) {
//		return n + 1;
//	}
//	else if (m > 0 && n == 0) {
//		return AckerMann(m - 1, 1);
//	}
//	else if (m > 0 && n > 0) {
//		return AckerMann(m - 1, AckerMann(m, n - 1));
//	}
//}



//3.2
//#include<iostream>
//#include<conio.h>
//using namespace std;
//int AckerMann(int m, int n) {
//	if (m == 0) {
//		return n + 1;
//	}
//	else if (m > 0 && n == 0) {
//		return AckerMann(m - 1, 1);
//	}
//	else if (m > 0 && n > 0) {
//		return AckerMann(m - 1, AckerMann(m,n-1));
//	}
//}
//int main() 
//{
//	cout<<AckerMann(3,4);
//	return 0;
//}


//3.1
//#include<iostream>
//#include<conio.h>
//using namespace std;
//int power(int x, int n) {
//	if (n == 0) {
//		return 1;
//	}
//	else {
//		return power(x, n - 1) * x;
//	}
//}
//int main() {
//	int n = 20;
//	for (int n = 0; n <= 20; n++) {
//		cout << n<<'\t' << power(2, n) << endl;
//	}
//
//	return 0;
//}


//3.3 a
//#include<iostream>
//#include<conio.h>
//using namespace std;
int print(int n) {
	if (n == 0) {
		return  0;
	}
	else {
		cout << n << endl;
		print(n - 1);
	}
}
//int main() {
//	int n;
//	cout << "Enter a number:";
//	cin >> n;
//	cout << print(n);
//	return 0;
//}


//3.3 b
int cbc(int n, int k) {
	if (n == k)
		return 1;
	else if (k == 0)
		return 1;
	else if (n > 1 && k > 0)
		return cbc(n - 1, k - 1) + cbc(n - 1, k);
}

//3.3 c
#include<iostream>
using namespace std;
int cbc(int n, int k) {
	if (n == k)
		return 1;
	else if (k == 0)
		return 1;
	else if (n > 1 && k > 0)
		return cbc(n - 1, k - 1) + cbc(n - 1, k);
}
bool isPrime(int n, int i = 2)
{
	if (n <= 2)
		return (n == 2) ? true : false;
	if (n % i == 0)
		return false;
	if (i * i > n)
		return true;
	return isPrime(n, i + 1);
}
int main() {
	int num = 20;
	int nB = 4, kB = 5;
	cout << isPrime(kB) << endl;
	cout << "Binomial computation: " << cbc(nB, kB);
	print(num);
}
