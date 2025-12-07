#include <fstream>
#include<iostream>
using namespace std;
int main()
{
	/*
		ios::app  modu ile açılan dosya bulunamazsa yeni bir dosya oluşturulur.
		dosya yazma modu ile açılacaktır. okuma yapılamaz.

		eğer dosya varsa dosya yazma konumu en sona getirilir.
	*/

	fstream dosya("deneme.txt",ios::app);

	if (dosya.is_open() == false)
	{
		cout << "Dosya acilamadi" << endl;
	}
	dosya<<"merhaba";
	dosya<<1235;

	dosya.close();
}