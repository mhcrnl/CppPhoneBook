#ifndef CONTACT_H_INCLUDED
#define CONTACT_H_INCLUDED

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Contact{
    string p_nume, p_prenume, p_email, p_telefon;
public:
/**
    Constructorii clasei
*/
    Contact();
    Contact(string nume);
    Contact(string nume, string prenume);
    Contact(string nume, string prenume, string email);
    Contact(string nume, string prenume, string email, string telefon);
    /**
        Constructorul de copiere
    */
    Contact(const Contact&);
    /**
        Get/set methods
    */
    const string& getNume() const;
    bool setNume(const string& nume);

    const string& getPrenume() const;
    bool setPrenume(const string& prenume);

    const string& getEmail() const;
    void setEmail(const string& email);

    const string& getTelefon() const;
    bool setTelefon(const string& telefon);

    const string getNumeIntreg();

    void afisare();
};


#endif // CONTACT_H_INCLUDED
