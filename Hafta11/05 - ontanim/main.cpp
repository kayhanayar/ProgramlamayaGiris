#include <iostream>
#include<string>
#include<iomanip>
using namespace std;


class Dikdortgen
{

public: 

	/*
		üye fonksiyonların ön tanımları sınıf içerisinde yapılmıştır
		fonksiyon gövdeleri ise sınıf tanımı dışında yapımıştır.

	*/


	Dikdortgen();

	Dikdortgen(int genislik,int yukseklik);

	int alanHesapla();
private:

	int m_genislik;
	int m_yukseklik;
	int m_karakter;
};

/*

	Üye fonksiyon tanımı sınıf dışında yapılırken fonksiyonun hangi sınıfa ait olduğu
	aşağıda olduğu gibi belirtilmelidir. üye fonksiyon Dikdortgen sınıfına ait olduğu için

	Dikdortgen::     ifadesi fonksiyon isminden hemen önce kullanılmıştır.


*/
Dikdortgen::Dikdortgen()
{
	m_karakter='*';
	m_genislik=10+rand()%90;
	m_yukseklik=10+rand()%90;
	cout<<"Dikdortgen() cagrildi............"<<endl;
}

Dikdortgen::Dikdortgen(int genislik,int yukseklik)
{
	
	m_genislik=genislik;
	m_yukseklik=yukseklik;
	m_karakter='*';
	cout<<"Dikdortgen(int genislik,int yukseklik) cagrildi............"<<endl;
}
int Dikdortgen::alanHesapla()
{
	return m_genislik*m_yukseklik;
}
int main()
{

	
	
	Dikdortgen d1;
	cout<<d1.alanHesapla()<<endl;


	Dikdortgen d2(30,40);
	cout<<d2.alanHesapla()<<endl;
}