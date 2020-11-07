
#include <iostream>
#include "stackObj.h"
#include <string>
using namespace std;
int main()
{
	int result = 0;
	string input;
	int numItems = 0;
	doubleNode* location = new doubleNode;
	double takeOut = 0;
	cout << "Enter a postFix expression or stop to exit. " << endl;
	cout << "Afer typing in =, add a space and then press enter: ";
	getline(cin, input, ' ');
	stackObj stack;
	while (input != "stop") {
		if (input == "+" && numItems >= 2) {
			stack.add();
			numItems--;//two were in there, pop two out, push one in = net -1
		}
		else if(input == "-" && numItems >=2) {
			stack.minus();
			numItems--;
		}
		else if (input == "*" && numItems >= 2) {
			stack.mult();
			numItems--;
		}
		else if (input == "/" && numItems >= 2) {
			stack.div();
			numItems--;
		}
		else if (input == "=") {
			cout << stack.getTop() << endl;
			cout << "Enter a postFix expression or stop to exit. " << endl;
			cout << "Afer typing in =, add a space and then press enter: ";
		}
		else {
			takeOut = double(stoi(input)); //changes string input to int, casted to double
			stack.Push(takeOut);
			numItems++;
		}
		getline(cin, input, ' ');//acquire next number 
	}
	cout << "you have exited the calculator" << endl;
			
}
