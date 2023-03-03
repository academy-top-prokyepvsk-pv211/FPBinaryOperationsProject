#include <iostream>
#include <iomanip>

using namespace std;

void BitOperationsBase()
{
    //int a = 0b10110101; // 181
    //int b = 0b11010010; // 210

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

    int m = 345;
    cout << (~m + 1);
}

int main()
{
    //BitOperationsBase();

    /*bool weapon[8];
    weapon[1] = true;*/

    char weapon{};

    char mask = (1 << 2);
    weapon = weapon | mask;
    mask = (1 << 5);
    weapon = weapon | mask;
    mask = 1;
    weapon = weapon | mask;

    cout << (int)weapon << "\n";

    mask = ~(1 << 2);
    weapon = weapon & mask;

    cout << (int)weapon << "\n";
}
