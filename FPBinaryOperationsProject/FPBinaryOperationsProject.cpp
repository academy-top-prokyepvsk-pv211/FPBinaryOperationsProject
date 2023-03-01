#include <iostream>

using namespace std;

int main()
{
    int a = 0b10110101; // 181
    int b = 0b11010010; // 210

    /*cout << a + b << "\n";
    cout << a * b << "\n";

    cout << (a & b) << "\n";
    cout << (a | b) << "\n";
    cout << (a ^ b) << "\n";

    cout << (a << 2) << "\n";
    cout << (a >> 2) << "\n";*/

    int n = 100;

    //cout << (n << 1) << "\n"; // x2
    //cout << (n << 2) << "\n"; // x4
    //cout << (n << 3) << "\n"; // x8
    //cout << (n << 4) << "\n"; // x16

    //cout << (n >> 1) << "\n"; // /2
    //cout << (n >> 2) << "\n"; // /4
    //cout << (n >> 3) << "\n"; // /8
    //cout << (n >> 4) << "\n"; // /16
    
    int m = -345;
    cout << (~m + 1);
}
