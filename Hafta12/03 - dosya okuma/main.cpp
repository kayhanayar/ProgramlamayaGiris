#include <fstream>
#include<iostream>
using namespace std;
int main()
{
	/*
		ios::ate  modu ile dosya içerisinde hareket etme şansınız var
		fakat bu mod dosyanın için boşaltarak açmaktadır.
		belki sadece vs içerisinde yapıyordu.r

	*/

	fstream dosya("deneme.txt", ios::ate|ios::out);

	if (dosya.is_open() == false)
	{
		cout << "Dosya acilamadi" << endl;
	}
	dosya << "basa ekledik:";

	dosya.close();
}