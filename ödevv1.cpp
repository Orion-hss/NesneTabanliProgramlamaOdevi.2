
#include <iostream>
using namespace std;

/*
a + b = toplama
a - b = cikarma
a * b = carpma
a / b = bolme
a % z = mod
*/
int main(){
    int a, z;
    float b;
    cout << "a sayisini girin";
    cin >> a;
    cout << "b sayisini girin";
    cin >> b;
    cout << "z sayisini girin";
    cin >> z;
    cout << "toplama:" << ( a + b) << "| sizeof(a + b)=" <<sizeof(a + b) << endl;
    cout << "cikarma:" << (a - b) << "| sizeof(a - b)=" << sizeof(a - b) << endl;
    cout << "carpma:" << (a * b) << "| sizeof(a * b)=" << sizeof(a * b) << endl;
    cout << "bolme:" << (a / b) << "| sizeof(a / b)=" << sizeof(a / b) << endl;
    cout << "mod:" << (a % z) << "| sizeof(a % z)=" << sizeof(a % z) << endl;



    return 0;
    
}

