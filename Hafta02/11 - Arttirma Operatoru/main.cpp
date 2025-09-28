#include<iostream>

/*
    ++ operatörü aracılığıyla değişeknlerin değeri 1 arttırılabilmektedir.
    -- operatörü aracılığıyla değişeknlerin değeri 1 azaltılabilmektedir.
*/
using namespace std;

int main()
{
    int sayi=15;


    sayi++; //sayi 1 arttırıldı.

    /*
    
        sayi++  ==>  sayi=sayi+1

    */
    cout<<"sayi:"<<sayi<<endl;


    int yeniSayi = sayi++;
    /*
    
        atama operatörünün önceliği ++ operatöründen  daha yüksektir.
    
    */
    cout<<"yeniSayi:"<<yeniSayi<<endl;
     cout<<"sayi:"<<sayi<<endl;

    sayi = ++yeniSayi;

    /*
        ++ operatörü değişkenin soluna yazıldığında önceliği de değişmektedir.

        soldaki ++ operatörünün önceliği =(atama) operatöründen öncedir.
    
    */
    cout<<"yeniSayi:"<<yeniSayi<<endl;
    cout<<"sayi:"<<sayi<<endl;
}