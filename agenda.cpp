/**
	@Author:	Mihai Cornel	Romania			mhcrnl@gmail.com
	@System:	Ubuntu 16.04	Code::Blocks 13.12	gcc 5.4.0
                Fedora 24	    Code::Blocks 16.01	gcc 5.3.1
                Windows Vista 	Code::Blocks 16.01
	@Copyright:	2017
	@file:
*/
#include <iostream>
#include "contact.h"
#include "agenda.h"

Agenda::Agenda(){
    nr = 0;
}

bool Agenda::addContact(string nume, string prenume, string email, string telefon){
    if(nr == 0){
        listaContacte.push_back(Contact(nume, prenume, email,telefon));
        nr++;
        return true;
    }
    bool found = false;
    list<Contact>::iterator it, itLast;
    for(it = listaContacte.begin(); it!= listaContacte.end() && found==false; it++){
        if(((Contact)(*it)).getNume().compare(nume)>0){
            itLast = it;
            found = true;
        } else if(((Contact)(*it)).getNume().compare(nume)==0){
            return false;
        }
    }
    if(found == false){
        listaContacte.push_back(Contact(nume, prenume, email, telefon));
        nr++;
        return true;
    }
    listaContacte.insert(itLast, Contact(nume, prenume, telefon));
    nr++;
    return true;
}

bool Agenda::addContact(Contact& con){
    return addContact(con.getNume(), con.getPrenume(),con.getEmail(),con.getTelefon());
}

list<Contact> Agenda::searchByNume(string nume){
    list<Contact> l;
    if(nr==0){ return l;}
    list<Contact>::iterator it;
    for(it=listaContacte.begin(); it!=listaContacte.end(); it++){
        if(((Contact)(*it)).getNume().find(nume)!= string::npos){
            l.push_back((Contact)(*it));
        }
    }
    return l;
}

list<Contact> Agenda::searchByTelefon(string telefon){
    list<Contact> l;
    if(nr==0){ return l;}
    list<Contact>::iterator it;
    for(it=listaContacte.begin(); it!=listaContacte.end(); it++){
        if(((Contact)(*it)).getTelefon().find(telefon)!= string::npos){
            l.push_back((Contact)(*it));
        }
    }
    return l;
}

void Agenda::afiseazaLista(){
    list<Contact>::iterator it;
    for(it =listaContacte.begin(); it!=listaContacte.end(); it++){
        cout<<((Contact) (*it)).getNume()<<" "<<((Contact) (*it)).getPrenume()<<
            " - "<<((Contact) (*it)).getEmail()<<"  "<<((Contact) (*it)).getTelefon()<<
            endl;
    }
    cout << endl;
}
