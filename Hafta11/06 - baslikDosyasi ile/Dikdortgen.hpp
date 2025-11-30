#ifndef Dikdortgen_hpp
#define Dikdortgen_hpp

class Dikdortgen
{
public: 
	Dikdortgen();

	Dikdortgen(int genislik,int yukseklik);

	int alanHesapla();
private:

	int m_genislik;
	int m_yukseklik;
	int m_karakter;
};


#endif