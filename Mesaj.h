#ifndef MESAJ_H
#define MESAJ_H

class Mesaj {
    char* text;
public:
    Mesaj();
    Mesaj(const char*);
    Mesaj(const Mesaj&);
    ~Mesaj();

    Mesaj& operator=(const Mesaj&); // Operator de atribuire
    void afiseaza() const;          // Funcție de afișare
    void modifica(const char*);     // Funcție de modificare
};

#endif // MESAJ_H

