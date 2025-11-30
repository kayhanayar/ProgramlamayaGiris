#include <iostream>
#include<string>
#include<iomanip>
#include "Dikdortgen.hpp"
using namespace std;

int main()
{

	
	
	Dikdortgen d1;
	cout<<d1.alanHesapla()<<endl;


	Dikdortgen d2(30,40);
	cout<<d2.alanHesapla()<<endl;
}