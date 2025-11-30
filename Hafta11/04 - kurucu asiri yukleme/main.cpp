#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

/*

	kurucu fonksiyonlar aşırı yüklenebilmektedir.
	bu sayede bvirden fazla kurucu tanımlanabilir.

*/

class Dikdortgen
{

public: 



	Dikdortgen()
	{


		m_karakter='*';

		m_genislik=10+rand()%90;
		m_yukseklik=10+rand()%90;
		cout<<"Dikdortgen() cagrildi............"<<endl;
	}
	Dikdortgen(int genislik,int yukseklik)
	{
		//üyeler önündeki m_ sayesinde yerel değişken ile karışma olmamıştır.

		m_genislik=genislik;
		m_yukseklik=yukseklik;
		m_karakter='*';
		cout<<"Dikdortgen(int genislik,int yukseklik) cagrildi............"<<endl;
	}


	int alanHesapla()
	{
		return m_genislik*m_yukseklik;
	}
private:
	/*
		üye isimleri önüne m (member) karakter bırakılabilri.
		böylece degisken isimlerimizi yerel değişkenlerden ayırt edebiliriz.

	*/
	int m_genislik;
	int m_yukseklik;
	int m_karakter;
};
int main()
{

	
	
	Dikdortgen d1;
	cout<<d1.alanHesapla()<<endl;


	Dikdortgen d2(30,40);
	cout<<d2.alanHesapla()<<endl;
}