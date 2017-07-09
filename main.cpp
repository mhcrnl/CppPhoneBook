#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "contact.h"
#include "agenda.h"

using namespace std;

Agenda *agen;

void readFromFile( string fname){
    int n=0;
    string nume, prenume, telefon, email, nstr;
    ifstream fin(fname.c_str());
    getline(fin, nstr);
    n = atoi(nstr.c_str());
    for(int i =0; i<n; i++){
        getline(fin, nume);
        getline(fin, prenume);
        getline(fin, email);
        getline(fin, telefon);

        agen->addContact(nume, prenume, email, telefon);
    }
    fin.close();
}

int main()
{
    cout << "Hello world!" << endl;

    agen = new Agenda();
    readFromFile("blog.txt");
    list<Contact> search;
    search = agen->searchByNume("Jo");
    cout<<"Cautare dupa numele 'Jo'"<<endl;
    list<Contact>::iterator it;
    for(it= search.begin(); it!=search.end(); it++){
        cout<<((Contact)(*it)).getNume()<<"--"<<((Contact)(*it)).getTelefon()<<endl;
    }
    cout << endl;

    search = agen->searchByTelefon("23");
    cout<<"Cautare dupa numarul detelefon '23'"<<endl;
    for(it= search.begin(); it!=search.end(); it++){
        cout<<((Contact)(*it)).getNume()<<"--"<<((Contact)(*it)).getTelefon()<<endl;
    }
    cout << endl;

    cout<<"Afisearea tuturor contactelor din agenda: "<<endl<<endl;
    agen->afiseazaLista();

 /**
    Contact con("Mihai", "Cornel", "mihaihcrnl@gmail.com", "00222707960");

    cout << con.getNumeIntreg()<<endl;

    cout << con.getNume()<< endl;
    con.setNume("Vasile");
    cout << con.getNume()<< endl;

    cout << con.getPrenume()<< endl;
    con.setPrenume("Andrei");
    cout << con.getPrenume()<< endl;

    cout << con.getEmail()<< endl;
    con.setEmail("Andrei@gmail.com");
    cout << con.getEmail()<< endl;

    cout << con.getTelefon()<< endl;
    con.setTelefon("07222707960");
    cout << con.getTelefon()<< endl;

    cout << con.getNumeIntreg()<<endl;

    cout<< con.setNume("Aster")<<endl;
    cout<< con.setTelefon("12345455")<<endl;

    con.afisare();
*/
    return 0;
}
