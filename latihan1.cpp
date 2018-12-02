#include <iostream>
using namespace std;

void tukar(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

int main()
{

    int a=5;
    int b=6;

    cout << endl;
    cout << "Nilai variable a adalah: " << a << endl;
    cout << "Nilai variable b adalah: " << b << endl;
    tukar(a, b);
    cout << "\nSetelah ditukar: tukar(a,b)\n";
    cout << "Nilai variable a adalah: " << a << endl;
    cout << "Nilai variable b adalah: " << b << endl;
    cout << endl;
}
