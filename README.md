# CppPhoneBook
Este un proiect de realizare a unei agende telefonice in C++ cu clase si fisiere distincte. Este realizat cu Code::Blocks si scris pe un sistem Fedora 24 verificat pe Windows 10 cu cygwin.

![alt text](img/i01.png)

contact.h / contact.cpp - reprezinta contactele
``` Cpp
#ifndef CONTACT_H_INCLUDED
#define CONTACT_H_INCLUDED

#include <iostream>
#include <string>

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
        Get/set methods
    */
    const string& getNume() const;
    void setNume(const string& nume);

    const string& getPrenume() const;
    void setPrenume(const string& prenume);

    const string& getEmail() const;
    void setEmail(const string& email);

    const string& getTelefon() const;
    void setTelefon(const string& telefon);

    string getNumeIntreg();
};


#endif // CONTACT_H_INCLUDED
```

main.cpp - este relizata rularea programului.

## Instalare 
```
https://github.com/mhcrnl/CppPhoneBook
cd CppPhoneBook
make
./PhoneBook
```
