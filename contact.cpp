/**
	@Author:	Mihai Cornel	Romania			mhcrnl@gmail.com
	@System:	Ubuntu 16.04	Code::Blocks 13.12	gcc 5.4.0
                Fedora 24	    Code::Blocks 16.01	gcc 5.3.1
	@Copyright:	2017
	@file:
*/
#include "contact.h"

Contact::Contact(){}

Contact::Contact(string nume){
    p_nume = nume;
}

Contact::Contact(string nume, string prenume){
    p_nume = nume;
    p_prenume = prenume;
}

Contact::Contact(string nume, string prenume, string email){
    p_nume = nume;
    p_prenume = prenume;
    p_email = email;
}

Contact::Contact(string nume, string prenume, string email, string telefon){
    p_nume = nume;
    p_prenume = prenume;
    p_email = email;
    p_telefon = telefon;
}

const string& Contact::getNume() const {
    return p_nume;
}

void Contact::setNume(const string& nume){
    p_nume = nume;
}

const string& Contact::getPrenume() const {
    return p_prenume;
}

void Contact::setPrenume(const string& prenume){
    p_prenume = prenume;
}

const string& Contact::getEmail() const {
    return p_email;
}

void Contact::setEmail(const string& email){
    p_email = email;
}

const string& Contact::getTelefon() const {
    return p_telefon;
}

void Contact::setTelefon(const string& telefon){
    p_telefon = telefon;
}

const string Contact::getNumeIntreg(){
    return getNume()+" "+getPrenume();
}

void Contact::afisare(){
	cout << setfill('-') << setw(35) << "-" << endl;
	cout << "Nume:    " << getNumeIntreg() << endl;
	cout << "Telefon: " << getTelefon() << endl;
	cout << "Email:   " << getEmail() << endl;
	cout << setfill('-') << setw(35) << "-" << endl;
}

