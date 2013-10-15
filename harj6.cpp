/*
Teht„v„: Harjoitus 6
Tekij„: Hanna Lukkarinen, IIO13S1
Pvm: 15.10.2013

Kuvaus: Tee ohjelma, joka kysyy k„ytt„j„lt„ lompakossa olevan raham„„r„n
ja lihapiirakan hinnan. Ohjelma tutkii, onko k„ytt„j„ll„ varaa ostaa lihapiirakka.
Jos on, ohjelma ilmoittaa, kuinka paljon lompakkoon j„„ viel„ rahaa.
Muuten ohjelma kehottaa k„ytt„j„„ paastoamaan.

K„yt„ vain kahta muuttujaa. „l„ v„henn„ lompakon sis„lt„„, ellet voi
ostaa lihapiirakkaa.



#include <iostream>
using namespace std;

int main()
{

	int lompakko, piirakka;

	cout<<"Paljonko sinulla on rahaa?";
	cin>>lompakko;
	cout<<"Paljonko lihapiirakka maksaa?";
	cin>>piirakka;
	if (lompakko >= piirakka)
	{
		lompakko = lompakko - piirakka;
		cout<<"Rahasi riitt„v„t piirakkaan. Ostoksen j„lkeen lompakkoon j„„ "<<lompakko<<" euroa."<<endl;
	}
	else
		cout<<"Lompakossasi ei ole tarpeeksi rahaa lihapiirakkaan! Paastoa!"<<endl;

	return 0;
} */