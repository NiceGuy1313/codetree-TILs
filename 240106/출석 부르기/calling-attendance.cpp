#include <iostream>
using namespace std;

int main() {

	int a;
	scanf("%d", &a);

	if (a >= 4) {
		cout << "Vacancy" << endl;
	}
	else if (a >= 3) {
		cout << "Paul" << endl;
	}
	else if (a >= 2) {
		cout << "Tom" << endl;
	}
	else {
		cout << "John" << endl;
	}

	return 0;

}