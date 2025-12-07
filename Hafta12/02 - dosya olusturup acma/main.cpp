#include <fstream>
#include<iostream>
using namespace std;
int main()
{
	/*
		ios::app  modu ile açılan dosya bulunamazsa yeni bir dosya oluşturulur.
		dosya yazma modu ile açılacaktır. okuma yapılamaz.

		işareetçi dosyanın sonunda olacaktır.
		dolayısıyla yaz sona eklenecektir.
		dosyanın yazım konumu daima sonu olacaktır.

	*/

	ofstream dosya("deneme.txt", ios::app);

	if (dosya.is_open() == false)
	{
		cout << "Dosya acilamadi" << endl;
	}

	dosya << "MErhaba";

	dosya.close();
}