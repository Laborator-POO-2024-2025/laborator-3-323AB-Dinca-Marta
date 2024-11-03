#include "Mesaj.h"
#include <iostream>
#include <cstring>

using namespace std;

Mesaj::Mesaj() {
    text = nullptr;
    cout << "Constructor implicit\n";
}

Mesaj::Mesaj(const char* txt) {
    text = new char[strlen(txt) + 1];
    strcpy(text, txt);
    cout << "Constructor cu parametru\n";
}

Mesaj::Mesaj(const Mesaj& other) {
    if (other.text) {
        text = new char[strlen(other.text) + 1];
        strcpy(text, other.text);
    } else {
        text = nullptr;
    }
    cout << "Constructor de copiere\n";
}

Mesaj::~Mesaj() {
    delete[] text;
    cout << "Destructor\n";
}
Mesaj& Mesaj::operator=(const Mesaj& other) {
    if (this != &other) {
        delete[] text;  // Eliberăm memoria veche
        if (other.text) {
            text = new char[strlen(other.text) + 1];
            strcpy(text, other.text);
        } else {
            text = nullptr;
        }
    }
    cout << "Operatorul de atribuire\n";
    return *this;
}

void Mesaj::afiseaza() const {
    if (text) {
        cout << "Mesaj: " << text << "\n";
    } else {
        cout << "Mesaj gol\n";
    }
}

void Mesaj::modifica(const char* nouText) {
    delete[] text;  // Eliberăm memoria veche
    if (nouText) {
        text = new char[strlen(nouText) + 1];
        strcpy(text, nouText);
    } else {
        text = nullptr;
    }
    cout << "Mesaj modificat\n";
}
