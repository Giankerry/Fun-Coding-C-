#include <iostream>
using namespace std;
int main () {
	
	char op;
	float num1, num2;
	
	cout << "Enter Operator Cutie: (+),(-),(*),(/):";
	cin >> op;
	
	cout << "Enter Two Operands Next<3:";
	cin >> num1 >> num2;
	
	switch(op) {
		
	case '+' :;
		cout << num1 << "+" << num2 << "=" << num1 + num2;
		break;
	
		case '-':;
		cout << num1 << "-" << num2 << "=" << num1 - num2;
		break;
	
		case '*':;
		cout << num1 << "*" << num2 << "=" << num1 * num2;
		break;
	
		case '/':;
		cout << num1 << "/" << num2 << "=" << num1 / num2;
		break;
		
		default:;
		// If the operator is other than +, -, * or /, error message
		cout << "Sorry wrong operators have been entered.Please try again...";
		break;
}
return 0;
}
