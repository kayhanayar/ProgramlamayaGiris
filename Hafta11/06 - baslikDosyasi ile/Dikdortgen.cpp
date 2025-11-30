

/*

    Ön tanımlarla gövde tanımlarının birleştirilebilmesi için
    başlık dosyası .cpp içerisine eklenmektedir.
    derleyici iki dosyayı birleştirerek derleme yapmaktadır.

*/

#include "Dikdortgen.hpp"
#include<iostream>
using namespace std;
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