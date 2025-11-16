#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

/*

	c++ aynı isimde farklı parametrelere sahip fonksiyonları tanımlamamıza izin vermektedir.
*/
int  topla(int a, int b )
{
	return a + b;
}
float  topla(float a, float b)
{
	return a + b;
}
int main()
{
	/*
		derleyici kullanılan parametre sayısı ve türlerine bakarak çağrıyı yapabilmektedir.
	
	*/
	cout << "topla(int,int)" << topla(5, 6);
	

	cout << "topla(float,float)" << topla(5.2f, 6.3f);

}