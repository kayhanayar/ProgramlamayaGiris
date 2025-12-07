#include <fstream>
#include<iostream>
using namespace std;
int main()
{
	/*
		Eğer kurucu ile dosya açılmaz ise 
		fstream sınıfnın open fonksiyonu ile de dosya açılabilmektedir.
	*/

	fstream dosya;

	dosya.open("deneme.txt", ios::app);

	if (dosya.is_open() == false)
	{
		cout << "Dosya acilamadi" << endl;
	}
	dosya << "merhaba";
	dosya << 1235;

	dosya.close();
}