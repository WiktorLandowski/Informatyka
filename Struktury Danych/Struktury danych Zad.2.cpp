#include <iostream>
#include <string>
 
struct Ksiazka {
    std::string tytul;
    std::string autor;
    int rokWydania;
    std::string wydawnictwo;
    double cena;
};
 
void wyszukajKsiazki(const Ksiazka ksiazki[], int rozmiar, int opcja, const void* kryterium);
 
int main() {
    Ksiazka ksiazki[7] = {
        {"Tytul1", "autor1", 1925, "Helion1", 23.54},
        {"Tytul2", "autor2", 1926, "Helion2", 24.54},
        {"Tytul3", "autor1", 1927, "Helion3", 25.54},
        {"Tytul4", "autor2", 1928, "Helion1", 26.54},
        {"Tytul5", "autor1", 1921, "Helion2", 27.54},
        {"Tytul6", "autor2", 1930, "Helion3", 28.54},
        {"Tytul7", "autor1", 1931, "Helion1", 29.54}
    };
 
    while (true) {
        std::cout << "Witaj w ksiegarnii\nPo jakiej kategorii chcial bys wyszukac ksiazke:\n1. Rok wydania\n2. Cena\n3. Wydawnictwo\n0. Wyjscie\n";
        int opcja;
        std::cin >> opcja;
        if (opcja == 0) break;
 
        switch (opcja) {
            case 1: {
                int rok;
                std::cout << "Podaj od jakiego roku chcesz zobaczyc ksiazki: ";
                std::cin >> rok;
                wyszukajKsiazki(ksiazki, 7, opcja, &rok);
                break;
            }
            case 2: {
                double cena;
                std::cout << "Podaj minimalna cene ksiazki: ";
                std::cin >> cena;
                wyszukajKsiazki(ksiazki, 7, opcja, &cena);
                break;
            }
            case 3: {
                std::string wydawnictwo;
                std::cout << "Podaj nazwe wydawnictwa: ";
                std::cin >> wydawnictwo;
                wyszukajKsiazki(ksiazki, 7, opcja, &wydawnictwo);
                break;
            }
            default:
                std::cout << "Nieznana opcja\n";
                break;
        }
    }
 
    return 0;
}
 
void wyszukajKsiazki(const Ksiazka ksiazki[], int rozmiar, int opcja, const void* kryterium) {
    bool znaleziono = false;

    for (int i = 0; i < rozmiar; ++i) {
        bool pasuje = false;
        switch (opcja) {
            case 1: {
                int rok = *(int*)kryterium;
                if (ksiazki[i].rokWydania >= rok) pasuje = true;
                break;
            }
            case 2: {
                double cena = *(double*)kryterium;
                if (ksiazki[i].cena >= cena) pasuje = true;
                break;
            }
            case 3: {
                std::string wydawnictwo = *(std::string*)kryterium;
                if (ksiazki[i].wydawnictwo == wydawnictwo) pasuje = true;
                break;
            }
}
        if (pasuje) {
            znaleziono = true;
            std::cout << "Tytul:" << ksiazki[i].tytul << "Autor:" << ksiazki[i].autor << "Rok:" << ksiazki;
        }
    }
}