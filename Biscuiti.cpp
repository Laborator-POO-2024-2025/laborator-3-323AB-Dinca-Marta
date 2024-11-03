#include "Biscuiti.h"
#include <iostream>
#include <cstring>

using namespace std;
Biscuiti::Biscuiti(){
    firma= nullptr;
    umplutura= nullptr;
    nrPachete=0;
    pachet= nullptr;
}
Biscuiti::Biscuiti(const char* txt1, const char*txt2, int*b1, int b2){
    firma= new char[strlen(txt1)+1];
    strcpy(firma,txt1);
    umplutura=new char[strlen(txt2)+1];
    strcpy(umplutura,txt2);
    nrPachete=b2;
    pachet = new int[b2];
    for (int i = 0; i < b2; i++) {
        pachet[i] = b1[i];
    }}
Biscuiti::Biscuiti(const Biscuiti& other){
    if (other.firma) {
        firma = new char[strlen(other.firma) + 1];
        strcpy(firma, other.firma);
    } else {
        firma = nullptr;
    }
    if(other.umplutura) {
        umplutura= new char[strlen(other.umplutura)+1];
        strcpy(umplutura, other.umplutura);

    }else{
        umplutura= nullptr;
    }
        nrPachete=other.nrPachete;
    if(other.pachet){
        for (int i = 0; i < other.nrPachete; i++) {
        pachet[i] = other.pachet[i];
    }
    }
    else{
        pachet= nullptr;
    }

}
Biscuiti & Biscuiti::operator=(const Biscuiti &other){

    delete[] firma;
    delete[] umplutura;
    delete[]pachet;  // Eliberăm memoria veche
    if (other.firma) {
        firma = new char[strlen(other.firma) + 1];
        strcpy(firma, other.firma);
    } else {
        firma = nullptr;
    }
    if (other.umplutura) {
        umplutura = new char[strlen(other.umplutura) + 1];
        strcpy(umplutura, other.umplutura);
    } else {
        umplutura = nullptr;
    }
    nrPachete=other.nrPachete;
    pachet = new int[other.nrPachete];
    if(other.pachet){
        for (int i = 0; i < other.nrPachete; i++) {
            pachet[i] = other.pachet[i];
        }
    }
    else{
    pachet= nullptr;
    }

    return *this;


}
Biscuiti::~Biscuiti(){
    delete[] umplutura;
    delete[] firma;
    delete[] pachet;

}

const char* Biscuiti::getFirma() const {
    return firma;
}

const char* Biscuiti::getUmplutura() const {
    return umplutura;
}

int Biscuiti::getNrPachete() const {
    return nrPachete;
}

int* Biscuiti::getPachet() const {
    return pachet;
}

void Biscuiti::setFirma(const char* firmaNoua) {
    delete[] firma;
    firma = new char[strlen(firmaNoua) + 1];
    strcpy(firma, firmaNoua);
}

void Biscuiti::setUmplutura(const char* umpluturaNoua) {
    delete[] umplutura;
    umplutura = new char[strlen(umpluturaNoua) + 1];
    strcpy(umplutura, umpluturaNoua);
}

void Biscuiti::setPachete(int* pachetNou, int nr) {
    delete[] pachet;
    nrPachete = nr;
    pachet = new int[nrPachete];
    for (int i = 0; i < nrPachete; i++) {
        pachet[i] = pachetNou[i];
    }
}
void Biscuiti::afisare() const{
    if (firma) {
        cout << "firma: " << firma << "\n";
    } else {
        cout << "fara firma\n";
    }
    if (umplutura) {
        cout << "umplutura: " << umplutura << "\n";
    } else {
        cout << "fara umplutura\n";
    }
    cout<<nrPachete;
    for(int i=0;i<nrPachete;i++)
        cout<<"pachetul "<<i+1<<" :"<<pachet[i];

}
double Biscuiti::calcMedie() const{
    double m=0;
    for(int i=0;i<nrPachete;i++)
        m+=(double)pachet[i];
    m=m/nrPachete;
    return m;
}
int Biscuiti::pachetMin() const{
    int min=pachet[0];
    for (int i=1;i<nrPachete;i++)
        if(min<pachet[i])
            min=pachet[i];
    return min;

}
int Biscuiti::pachetMax() const{
    int max=pachet[0];
    for (int i=1;i<nrPachete;i++)
        if(max<pachet[i])
            max=pachet[i];
    return max;

}

