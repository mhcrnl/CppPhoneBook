#ifndef AGENDA_H_INCLUDED
#define AGENDA_H_INCLUDED

#include <string>
#include <list>
#include "contact.h"

using namespace std;

class Agenda{
    int nr;
    list<Contact> listaContacte;
public:
    Agenda();

    bool addContact(string, string, string, string);
    bool addContact(Contact&);

    list<Contact> searchByNume(string);
    list<Contact> searchByTelefon(string);

    void afiseazaLista();
};

#endif // AGENDA_H_INCLUDED
