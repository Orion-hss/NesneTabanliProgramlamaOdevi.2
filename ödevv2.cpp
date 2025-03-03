#include <iostream>
#include <string>
using namespace std;

int main() {
    string ad;
    string soyAd;
    string meslek;

    // Kullanıcı bilgileri
    cout << "Adinizi giriniz: ";
    getline(cin, ad);

    cout << "Soyadinizi giriniz: ";
    getline(cin, soyAd);

    cout << "Mesleginizi giriniz: ";
    getline(cin, meslek);

    cout << "....................." << endl;
    cout << "Kisi Bilgileri" << endl;
    cout << "....................." << endl;

    cout << ".. Ad: "     << ad     << "  .." << endl;
    cout << ".. Soyad: "  << soyAd  << "  .." << endl;
    cout << ".. Meslek: " << meslek << "  .." << endl << endl;

    string tamAd = ad + soyAd;

    cout << "..Uzunluk: " << tamAd.size() << "  .." << endl << endl;

    // tanıtım metni oluşturdum
    string tanitim = "Merhaba, ben " + ad + soyAd + meslek + " olarak çalışıyorum.";

    // Tanıtım metni ekrana yazdırdım
    cout << "Tanitim: " << tanitim << endl;

    return 0;
}