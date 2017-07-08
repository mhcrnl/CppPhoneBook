#ifndef CONTACT_H_INCLUDED
#define CONTACT_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Contact{
    string p_nume, p_prenume, p_email, p_telefon;
public:
    Contact(string nume, string prenume, string email, string telefon);

};


#endif // CONTACT_H_INCLUDED
