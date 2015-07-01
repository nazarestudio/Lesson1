#include <iostream>

using namespace std;
int main(int argc, char* argv[])

{
	cout << "Output 5-digit number line by line\nInput 5-digit number: ";
	int number;
	cin >> number;

	cout << "First number: " << number / 10000 << endl;
	cout << "Second numser: " << (number % 10000 - number %1000) /1000 << endl;
	cout << "Third number: " << (number % 1000 - number %100) /100 << endl;
	cout << "Fourth number: " << (number % 100 - number %10) /10 << endl;
	cout << "Fifth number: " << number %10 << endl;
	
	//task 1_2 Из пяти отдельных чисел собрать одно 5-ти значное
	 cout << endl;
	 cout << "task1_2, formed 5 digit number from 5 another numbers. " << endl;
	 cout << "Enter numbers:" << endl;
	 int a, b, c, d, e;
	 cout << "- 1st numer:";
	 cin >> a;
	 cout << "- 2nd numer:";
	 cin >> b;
	 cout << "- 3d numer:";
	 cin >> c;
	 cout << "- 4th numer:";
	 cin >> d;
	 cout << "- 5th numer:";
	 cin >> e;
	 cout << "5 digit number:" << a << b << c << d << e << endl;
	 system ("pause");
	 return 0;
     
 }


 