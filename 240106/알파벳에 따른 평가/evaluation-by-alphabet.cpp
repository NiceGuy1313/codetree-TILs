#include <iostream>
#include <string>
using namespace std;

int main() {

	string a;
	cin >> a;

	if (a == "S") {
		cout << "Superior" << endl;
	}
	else if (a == "A") {
		cout << "Excellent" << endl;
	}
	else if (a == "B") {
		cout << "Good" << endl;
	}
	else if (a == "C") {
		cout << "Usually" << endl;
	}
	else if (a == "D") {
		cout << "Effort" << endl;
	}
	else
		cout << "Failure";



	return 0;

}