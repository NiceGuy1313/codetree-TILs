#include <iostream>
using namespace std;

int main() {

	int h, w, result;
	cin >> h >> w;
    result = (w*10000)/(h*h);
    cout << result;
    if(result>25)
        cout << endl << "Obesity";
	return 0;

}