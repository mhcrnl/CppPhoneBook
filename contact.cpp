/**
	@Author:	Mihai Cornel	Romania			mhcrnl@gmail.com
	@System:	Ubuntu 16.04	Code::Blocks 13.12	gcc 5.4.0
                Fedora 24	    Code::Blocks 16.01	gcc 5.3.1
	@Copyright:	2017
	@file:
*/
#include "contact.h"

Contact::Contact(string nume, string prenume, string email, string telefon){
    p_nume = nume;
    p_prenume = prenume;
    p_email = email;
    p_telefon = telefon;
}
