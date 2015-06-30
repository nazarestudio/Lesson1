#include <iostream>

using namespace std;

void task_example()
{
	cout << "Output 2-digit number line by line\nInput 2-digit number: ";
	int number;
	cin >> number;

	cout << "First number: " << number / 10 << endl;
	cout << "Second number: " << number % 10 << endl;
}

void task1()
{
	cout << "Write solution for given task here" << endl;
}

int main(int argc, char *argv[])
{
	cout << "Write code, bleat'!!!!" << endl;
	
	task_example();

	system("pause");
	return 0;
}