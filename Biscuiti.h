#ifndef BISCUITI_H
#define BISCUITI_H
class Biscuiti {
    char* firma;
    char* umplutura;
    int nrPachete;
    int* pachet; //fiecare pachet contine un nr de biscuiti: 10,15,30 etc
public:
    Biscuiti();
    Biscuiti(const char*, const char*, int*, int);
    Biscuiti(const Biscuiti&);
    Biscuiti& operator=(const Biscuiti&);
    ~Biscuiti();
    const char* getFirma() const;
    const char* getUmplutura() const;
    int getNrPachete() const;
    int* getPachet() const;
    void setFirma(const char*);
    void setUmplutura(const char*);
    void setPachete(int*, int);
    void afisare() const; //afiseaza toate atributele clasei
    double calcMedie() const; //returneaza media vectorului pachet
    int pachetMin() const;
    int pachetMax() const;
};




#endif // BISCUITI
