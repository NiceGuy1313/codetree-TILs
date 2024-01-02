#include <iostream>
#include <string>
using namespace std;

int main() {

	string a, b, tmp;
    
	cin >> a >> b;

    tmp = a;
    a = b;
    b = tmp;

	cout << a << endl << b;

	return 0;

}