#include <iostream>
using namespace std;
int main() {
	char yn;
	do{
	int num1,num2,result;
	char op;
	cout << "Enter a number :" << "\n";
	cin >> num1;
	cout << "Enter the second number: "<< "\n";
	cin >> num2;
	cout << "Enter prefered operation: (+, -, *, /, %)" << "\n";
	cin >> op;
	switch (op){
	
	case ('+'):
	result=num1 + num2;
	cout << result <<endl;
	break;
	
	case ('-'):
	result=num1 - num2;
	cout << result <<endl;
	break;
	
	case ('*'):
	result=num1 * num2;
	cout << result <<endl;
	break;
	
	case ('/'):
	result=num1 / num2;
	cout << result <<endl;
	break;
	
	case ('%'):
	result=num1 % num2;
	cout << result <<endl;
	break;

	default:
		cout << "Invalid";
}
	cout << "Do you want to repeat the program? Y/N: " <<endl;
	cin >> yn;
	}while (yn && (yn == 'Y' || yn =='y'));

}

