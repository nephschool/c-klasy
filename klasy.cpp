#include <iostream>
using namespace std;
class Osoba {
private:
    //prywatne zmienne, które przechowuj¹ imiê i wiek
    string imie;
    int wiek
public:
    //konstruktor z domyslnymi wartosciami, zanim zostana ustawione
    Osoba() {
        imie = "nie podane"; 
        wiek = 0; 
    }
    //getter do pobierania imienia
    string getImie() const {
        return imie; // zwraca imie osoby
    }
    //setter do ustawiania imienia
    void setImie(const string noweImie) {
        imie = noweImie; //ustawia nowe imie
    }
    //getter do pobierania wieku
    int getWiek() const {
        return wiek; //zwraca wiek osoby
    }
    //setter do ustawiania nowego wieku
    void setWiek(int nowyWiek) {
        if (nowyWiek >= 0) { //sprawdza czy wiek jest wiekszy od 0 lub rowna sie zeru
            wiek = nowyWiek; //ustawia nowy wiek
        }
    }
    //wyswietlanie danych (metoda)
    void wyswietlDane() const {
        cout << "imie: "<< imie << ",wiek: "<< wiek <<" lat "<< endl;//poprostu wyswietla wiek, imie
    }
    //sprawdzanie czy osoba jest pelnoletnia
    void sprawdzPelnoletnosc() const {
        if (wiek >= 18) {
            cout << imie << " jest pelnoletni/a " << endl; //jezeli osoba ma tyle samo lub wiecej niz 18 lat, zwraca ze osoba jest pelnoletnia
        }
        else {
            cout << imie << " nie jest pelnoletni/a " << endl;  //jezeli osoba ma mniej niz 18 lat, zwraca ze osoba jest pelnoletnia
        }
    }
    //metoda czas do pelnoletnosci oblicza ile lat zostalo osobie do pelnoletnosci
    void czasDoPelnoletnosci() const {
        if (wiek < 18) {
            int lataDoPelnoletnosci = 18 - wiek; //oblicza lata
            cout << imie << " ma jeszcze " << lataDoPelnoletnosci << " lat/a do pelnoletnosci" << endl; // mowi ile lat zostalo
        }
        else {
            cout << imie << " jest juz pelnoletni/a" << endl; //podaje tekst ze osoba jest pelnoletnia jezeli ma juz 18 lat
        }
    }
};
int main() {
    // tworzymy obiekt
    Osoba osoba;
    osoba.setImie("natalia"); // ustawiamy imie tej osoby na natalia
    osoba.setWiek(16); // ustawiamy wiek na 16
    // wyœwietlamy dane osoby, przywolujemy juz wczesniej zrobione funkcje
    osoba.wyswietlDane(); // pokazuje dane
    osoba.sprawdzPelnoletnosc(); //sprawdza czy jest pelnoletni
    osoba.czasDoPelnoletnosci(); // mowi ile lat pozosta³o do pe³noletnoœci
    return 0;
}
