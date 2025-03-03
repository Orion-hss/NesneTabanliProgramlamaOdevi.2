

#include <iostream>
using namespace std;

/*
#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 7;
    double c = 3.5;

    cout << "a == b: " << (a = b) << endl;        (a == b) olması lazım
    cout << "a > c: " << a > c << endl;           a > c paranteze alınması lazım yani ; (a > b)
    cout << "b <= c: " << b <= c << endl;         aynı şekilde b <= c paranteze alınması gerek ; (b <= c)

    bool kosul1 = (a > b) && (b < c);
    bool kosul2 = (a == 7) || (c = 3.5);          (c == 3.5) olması lazım 

    cout << "Koşul 1: " << kosul1 << endl;
    cout << "Koşul 2: " << kosul2 << endl;

    if (kosul1 && kosul2)
        cout << "Her iki koşul da doğru!"         | cout satırının sonunda ";" eksik
    else if (kosul1 || kosul2)
        cout << "En az bir koşul doğru!"          | cout satırının sonunda ";" eksik
    else
        cout << "Hiçbir koşul doğru değil!"       | cout satırının sonunda ";" eksik

    return 0;
}

   KODUN HATALARINI DÜZELTİP ALTTAKİ GİBİ YAZDIM :)
*/

int main() {
    int a = 5, b = 7;
    double c = 3.5;

    cout << "a == b: " << (a == b) << endl;
    cout << "a > c: " << (a > c) << endl;
    cout << "b <= c: " << (b <= c) << endl;

    bool kosul1 = (a > b) && (b < c);
    bool kosul2 = (a == 7) || (c == 3.5);

    cout << "Kosul 1: " << kosul1 << endl;
    cout << "Kosul 2: " << kosul2 << endl;

    if (kosul1 && kosul2)
        cout << "Her iki kosul da dogru!" << endl;
    else if (kosul1 || kosul2)
        cout << "En az bir kosul dogru!" << endl;
    else
        cout << "Hicbir kosul dogru degil!" << endl;

    return 0;
}