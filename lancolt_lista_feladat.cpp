
#include <iostream>
#include <string>
using namespace std;

struct ListaElem {
    int szam;
    string szoveg;
    ListaElem* kov;
};

int main() {
    int n;
    cin >> n;

    ListaElem* fej = nullptr;
    ListaElem* utolso = nullptr;

    // Lista feltöltése
    for (int i = 0; i < n; ++i) {
        int szam;
        string szoveg;
        cin >> szam >> szoveg;

        ListaElem* uj = new ListaElem;
        uj->szam = szam;
        uj->szoveg = szoveg;
        uj->kov = nullptr;

        if (fej == nullptr) {
            fej = uj;
            utolso = uj;
        } else {
            utolso->kov = uj;
            utolso = uj;
        }
    }

    // Legnagyobb szám keresése
    int maxSzam = fej->szam;
    string maxSzoveg = fej->szoveg;

    ListaElem* akt = fej->kov;
    while (akt != nullptr) {
        if (akt->szam > maxSzam) {
            maxSzam = akt->szam;
            maxSzoveg = akt->szoveg;
        }
        akt = akt->kov;
    }

    cout << maxSzoveg << endl;

    // Lista felszabadítása
    while (fej != nullptr) {
        ListaElem* kov = fej->kov;
        delete fej;
        fej = kov;
    }

    return 0;
}
