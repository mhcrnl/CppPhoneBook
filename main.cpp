#include <iostream>
#include "contact.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
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

    con.afisare();

    return 0;
}
