#include<iostream>
using namespace std;


float ReactMult(char x, char y);

int main() {
	char input1, input2;
	char choice = 'a';
	while (choice != 'q') {
		cout << "Enter two paramters:" << endl;
		cin >> input1;
		cin >> input2;
		if (input1 == 'q' || input2 == 'q') {
			cout << "goodbye" << endl;
			return 0;
		}
		cout << "funtion return" << ReactMult(input1, input2) << endl << endl;
	}
}


float ReactMult(char x, char y) {
	if (x != 'm' && x != 'v') {
		cout << "Invalid" << endl;
		return -1;
	}

	else if (x == 'm' || x == 'v') {
		cout << "(p)yro,(h)ydro,(c)yro?" << endl;
	}

	if (y != 'p' && y != 'c' && y != 'h') {
		cout << "Invalid" << endl;
		return -1;
	}


	if (x == 'm' && y == 'p') {
		return 2.0;
	}
	if (x == 'm' && y == 'c') {
		return 1.5;
	}
	if (x == 'v' && y == 'h') {
		return 2.0;
	}
	if (x == 'v' && y == 'p') {
		return 1.5;
	}
}
