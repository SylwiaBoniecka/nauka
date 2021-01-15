/* Napisz program symulujacy gre w statki. Wygeneruj tablice 10x10 i na poczatek wypełnij ja zerami.
Napisz funkcje, ktora wypelni tablice losowo umieszczonymi 10 jednomasztowcami wpisujac 
w pole tablicy wartosc 1 (dla uproszczenia załozmy, ze jednomasztowce moga rowniez byc umieszczone 
obok siebie). Tablica ta jest nieznana uzytkownikowi. Uzytkownik ma 10 strzałow, w ktorych 
podaje numer wiersza (od 1 do 10) oraz numer kolumny (od 1 do 10). Jesli trafi w pole 
z jednomasztowcem (jedynka) wypisz komunikat „Trafiony! Zatopiony!”. Jesli strzeli w pole, 
ktore juz wczesniej strzelal , wyswietl komunikat „Juz tu strzelales/strzelalas” 
(mozesz zmienic wartosc pola, w ktore trafil uzytkownik wczesniej na inna liczbe, np. 2). 
Jesli uzytkownik trafi w pole o wartosci 0 wypisz „Pudlo”. Na koniec wyswietl komunikat 
pokazujacy ile statkow udalo sie zatopic. */

#include <iostream>
#include <iomanip>

#define n 10

using namespace std;

void PokazPlansze (int [n][n]);

int main()
{
    int statkow = 10;     // zmienna opisujaca ilosc jednomasztowcow dla warunków zadania ich ilosc wynosi 10
    int strzalow = 10;    // zmienna opisujaca mozliwa ilosc strzalow w grze
    int statek = 1;       // "1" oznacza pole z jednomasztowcem
    int nieodkryte = 0;   // "0" oznacza puste pole bez statku
    int nietrafiony = 2;  // "2" oznacza, ze w to pole juz strzelano i bylo pudlo
    int zatopiony = 3;    // "3" oznacza, ze w to pole juz strzelano i zatopiono jednomasztowiec

    srand(time(0));     // inicjalizacja generatora pseudolosowego
    int poleGry[n][n] = {0};  // plansza gry zostanie wypeniona samymi zerami

    // rozstawienie na planszy gry jednomasztowcow
    // aby zobaczyc wspolrzedne jednomasztowcow oraz plansze gry po rozmieszczeniu jednomasztowcow usun komentarze w /* ... */

    /* cout << "Wspolrzedne jednomasztowcow " << endl; */
    for (int i=0; i<statkow; i++)
    {
        int w,k;    // w-wiersze,  k-kolumny
        do{
            w = rand() % n;     //wiersz i kolumna losowane sa z zakresu od 0 do 9 za pomoca modulo
            k = rand() % n;
        } while (poleGry[w][k] == statek);  // jesli we wskazanym miejscu planszy stoi statek losowanie odbywa sie ponownie
        /* cout << w << " " << k << endl;  //wyswietlenie polozenia jednomasztowca */
        poleGry[w][k] = statek;
    }
    /* cout << "Plansza gry" << endl;   //wyswietleniena ekranie planszy gry po rozmieszczeniu statkow
    PokazPlansze(poleGry); */
    
    cout << "Witaj w grze w statki!" << endl;

    int strzal = 0;
    int zatopionych = 0;
    
    while (strzal < strzalow)
    {
        int w, k, pole;
        cout << "Pozostalo strzalow: " << strzalow - strzal << endl;
        cout << "Podaj wiersz: ";
        cin >> w;
        w = w - 1;
        cout << "Podaj kolumne: ";
        cin >> k;
        k = k - 1;
        getchar();

        if ( ( (w < 0) || (w > n-1) ) || ( (k < 0) || (k > n-1) ) )
        {
            cout << "Podano bledne wspolrzedne." << endl;
            continue;       // wracamy do petli while powyzej
        }


        pole = poleGry[w][k];   //pole - miejsce wybrane na planszy przez uzytkownika

        if (pole == nieodkryte)
        {
            cout << "PUDLO" << endl;   //jesli na wybranym miejscu stoi "0" to pudlo i w miejsce to pojawia się cyfra "2", ktora oznaczac bedzie iz w to pole juz strzelalismy"
            poleGry[w][k] = nietrafiony;
            strzal = strzal + 1;
        }
        else if (pole == statek)
        {
            cout << "Trafiony! Zatopiony!" << endl;     //jesli w wybranym miejscu stoi "1" to trafilismy, w miejscu tym zapisujemy cyfre "3", ktora bedzie oznaczac, ze tu byl statek ale juz jest zatopiony
            poleGry[w][k] = zatopiony;
            strzal =strzal + 1;
            zatopionych = zatopionych + 1;
        }
        else if (pole == nietrafiony)
        {
            cout << "W to mijesce juz strzelales!" << endl;     //jesli trafimy w miejsce z "2",
        }
        else if (pole == zatopiony)
        {
            cout << "Ten statek zostal juz zatopiony!" << endl;     //jesli trafimy w miejsce z "3"
        }

    }

    if ( (zatopionych > 0) && (zatopionych < n+1) )
    {
        cout << "BRAWO! Ilosc statkow, ktore udalo Ci sie zatopic wynosi: " << zatopionych << endl;
    }
    else
    {
        cout << "Niestety nie udalo Ci sie zatopic ani jednego statku." << endl;
    }

    /* cout << "Plansza gry po rozgrywce" << endl;
    PokazPlansze(poleGry); */
    
    return 0;
}

void PokazPlansze (int poleGry[n][n])  // Plansza gry wymiar: n x n
{
    for (int w=0; w<n; w++)             // w-wiersze,  k-kolumny
    {
        for (int k=0; k<n; k++)
        {
            cout << poleGry[w][k] << " ";
        }
        cout << endl;
    }
}

/* Bardzo dobrze wykonane zadanie :) Plusy za zastosowanie funkcji, komenatrzy opisujących i spełnienie wszystkich wymagań zadania.

Co można by ulepszyć?
Można zastanowić się nad redukcją ilości zmiennych w programie, aby nie zuużywać niepotrzebnie pamięci i zwiększyć trochę czytelność kodu.
Na przykład zmienna statkow = 10, mogłaby po prostu być zastąpiona przez n.
Albo inny przykład: wybrać jedną zmienną strzal albo strzalow i po prostu wykorzystywać jedną z nich. Dla przykładu zmiast strzalow - strzal 
zrobić strzalow--;

Podusmowując zadanie uznaję za jak najbardziej zaliczone :) */


