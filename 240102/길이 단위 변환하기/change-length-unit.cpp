#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    cout << fixed;

    double a,ft,b;
    int mi;

    a = 9.2;
    b = 1.3;
    ft = 30.48;
    mi = 160934;

    cout.precision(1);
    cout << a << "ft = " << a*ft << "cm";
    cout << endl;
    cout << b << "mi = " << b*mi << "cm";
    
    return 0;
}