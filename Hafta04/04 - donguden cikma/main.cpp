#include <iostream>
using namespace std;


int main()
{
    /*
        turSayisi değişkeni döngünün atacağı tur sayısını belirlemektedir.
        bu tip değişkenlere sayaç adı verilmektedir.
        sayaç bu sefer azaltırak döngü çalıştırılmıştır.
    */

    int turSayisi = 0;



    while(turSayisi>5)
    {

        int girilenSayi;
        cin>>girilenSayi;

        /* 
            dışarıdan girilen sayı çift ise break komutu çalışır
            
            break çağrıldığı etki alanındaki döngüyü bitirir
            
        */

        if(girilenSayi%2==0)
            break;
        
        turSayisi++;
    }

    cout<<"dongu bitti"<<endl;
   
    /*
        dongu break ile mi bitti yoksa kendi koşulu ile mi
    */
}