#include <iostream>

/*

	Dizi Giriş

*/
using namespace std;

int main()
{
	/*
		birden fazla aynı türden verilerin tutulması için dizi kullanılır.
	
		Örneğin 100 öğreninin notlarının dışarıdan alınması gereksin.
	
		Her bir öğrenci için bir tam sayı değişken tanımlamak pek pratik olmayacaktır.

		Sadece kullanıcı girişleri için 100 adet değişken tanımlanması gerekir. Bu da 100 satır kod demektir.

		Ayrıca değişkenlerin dışarıdan alıması içinde 100 satır kod gerekecektir.
	*/

	
	int notlar[5]; //5 tane tam sayı değişkeni barındıran dizi tanımlandı.

	/*
		dizilerin temsil ettikleri değişkenlere ulaşmak için indeks kullanılır.
		
		dizi [ degiskenSirasi]

		degisken sırasına indeks adı da verilmektedir.
	*/

	notlar[0] = 0;	//0. değişkene 5 değeri atanıyor
	notlar[1] = 1;
	notlar[2] = 2;
	notlar[3] = 3;
	notlar[4] = 4;	//4. değişkene 5 değeri atanıyor

	/*
	
		!!! dizi indeksleri 0 dan başlamaktadır. !!!
		
		dizinin son elemanının indeksi  diziBoyut-1 olacaktır. 

		Örneğin dizi boyut 5 ise son indeks 4 olacaktır.
	*/

	cout << "notlar[0]=" << notlar[0] << endl;
	cout << "notlar[1]=" << notlar[1] << endl;
	cout << "notlar[2]=" << notlar[2] << endl;
	cout << "notlar[3]=" << notlar[3] << endl;
	cout << "notlar[4]=" << notlar[4] << endl;
}