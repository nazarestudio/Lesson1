#include <iostream>

using namespace std;
int main(int argc, char* argv[])

{
	cout << "Output 5-digit number line by line\nInput 5-digit number: ";
	int number;
	cin >> number;

	cout << "First number: " << number / 10000 << endl;
	cout << "Second numser:" << (number % 10000 - number %1000) /1000 << endl;
	cout << "Third number: " << (number % 1000 - number %100) /100 << endl;
	cout << "Fourth number: " << (number % 100 - number %10) /10 << endl;
	cout << "Fifth number: " << number %10 << endl;
	system("pause");
	return 0;
}
