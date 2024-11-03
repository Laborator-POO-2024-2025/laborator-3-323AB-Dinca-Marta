#include "Mesaj.h"
#include "Biscuiti.h"
#include <iostream>
using namespace std;

Mesaj createMesaj(Mesaj mesaj) {
    return mesaj; // Apelează constructorul de copiere
}

int main() {
   /* Mesaj m1;                // Constructor implicit
    Mesaj m2("Salut!");       // Constructor cu parametru
    Mesaj m3 = m2;            // Constructor de copiere

    m3 = createMesaj(m2);     // Apelează constructorul de copiere în funcție

    m1 = m2;                  // Operatorul de atribuire
    m1.afiseaza();            // Afișează mesajul curent din m1
    m1.modifica("Salut nou!"); // Modifică mesajul din m1
    m1.afiseaza();            // Afișează mesajul modificat din m1*/
    /*Mesaj mesaj1("Salut!");
    Mesaj mesaj2;
    mesaj2 = mesaj1; // Apelează operatorul de atribuire
    mesaj1.afiseaza(); // Afișează mesaj1
    mesaj2.afiseaza(); // Afișează mesaj2
    mesaj2.modifica("Buna ziua!"); // Modifică mesaj2
    mesaj1.afiseaza(); // Afișează mesaj1
    mesaj2.afiseaza(); // Afișează mesaj2*/
    Biscuiti bis1;
    int pach[] = {3, 2, 19, 27};
    Biscuiti bis2("oreo", "vanilla", pach, 4);
    Biscuiti bis3;
    bis3= bis2;
    cout<<"firma: "<<bis2.getFirma()<<endl;
    cout<<"umplutura: "<<bis2.getUmplutura()<<endl;
    cout<<"nr pachete: "<<bis2.getNrPachete()<<endl;
    cout<<"pachet: ";
    for(int i = 0; i < bis2.getNrPachete(); i ++) {
        cout<<bis2.getPachet()[i] << " ";
    }
    cout << endl;
    bis3.setFirma("milka");
    bis3.setUmplutura("cioco");
    bis3.setPachete(pach, 4);
    bis3.afisare();
    cout<<"val medie "<<bis3.calcMedie()<<endl;
    cout<<"min "<<bis3.pachetMin()<< " si max "<<bis3.pachetMax()<<endl;


    return 0;
}

