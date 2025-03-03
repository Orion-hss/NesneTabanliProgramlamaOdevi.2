#include <iostream>
using namespace std;

/*
ÖRNEK EKRAN ÇIKTISI!!

Adım 1: 10 → 15 (5 artırıldı)
Adım 2: 15 → 30 (2 ile çarpıldı)
Adım 3: 30 → 27 (3 azaltıldı)
Adım 4: 27 → 7 (10'a bölümünden kalan)
Adım 5: 7 değeri, 3'ten büyük VE 7'den küçük VEYA 0'a eşit mi? Sonuç: 0 (Yanlış)
*/

int main() {
    int sayi;

    // Kullanıcıdan sayı al

    cout << "Baslangıc degerini giriniz: ";
    cin >> sayi;

    // İşlemleri sırayla yap ve ekrana yazdır

    sayi += 5;
    cout << "Adim 1: " << sayi << " (5 artirildi)" << endl;

    sayi *= 2;
    cout << "Adim 2: " << sayi << " (2 ile carpildi)" << endl;

    sayi -= 3;
    cout << "Adim 3: " << sayi << " (3 azaltildi)" << endl;

    sayi %= 10;
    cout << "Adim 4: " << sayi << " (10'a bolumunden kalan)" << endl;

    // Koşulu kontrol et

    cout << "Adim 5: Sonuc: " << ((sayi > 3 && sayi < 7) || sayi == 0) << endl;

    return 0;
}