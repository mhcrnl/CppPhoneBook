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
/**
    Constructorul de copiere
*/
Contact::Contact(const Contact& alt){
    p_nume = alt.p_nume;
    p_prenume = alt.p_prenume;
    p_email = alt.p_email;
    p_telefon = alt.p_telefon;
}

const string& Contact::getNume() const {
    return p_nume;
}

bool Contact::setNume(const string& nume){
    if(nume == " "){
        return false;
    }
    char c = nume[0];
    if(!((c>='a' && c<='z') || (c>='A' && c<='Z'))){
        return false;
    }
    p_nume = nume;
    return true;
}

const string& Contact::getPrenume() const {
    return p_prenume;
}

bool Contact::setPrenume(const string& prenume){
    if(prenume == " "){
        return false;
    }
    char c = prenume[0];
    if(!((c>='a' && c<='z') || (c>='A' && c<='Z'))){
        return false;
    }
    p_prenume = prenume;
    return true;
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

bool Contact::setTelefon(const string& telefon){
    if(telefon == " "){
        return false;
    }
    int n = telefon.length();
    char c;
    bool found = false;
    for(int i =0; i<n && found == false; i++){
        c = telefon.at(i);
        if(((c>='a' && c<='z')||(c>='A' && c<='Z'))){
            found = true;
        }
    }
    if(found){ return false; }
    p_telefon = telefon;
    return true;
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

