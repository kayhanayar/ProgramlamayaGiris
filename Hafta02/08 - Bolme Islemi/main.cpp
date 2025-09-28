#include<iostream>

/*
   aritmetik işlemler matematiksel işlem sırasına göre gerçekleşir

*/
using namespace std;

int main()
{

    int sayi1= 2;
    int sayi2= 5;
    /*
    
        aşağıdaki işlem sayi1 değerini sayi2 değerine bölmektedir.

        2/5 işlemi matematiksel olarak 0.4 değerine eşittir.

        Fakat programlama dillerinde iki tam sayının bölümü sonucu elde edilecek 
        
        değer de tam sayı olacaktır. Dolayısıyla 0.4 ondalık değerinin ondalık kısmı kaybedilecektir.

        C++ programlama dilinde 2/5  işleminin sonucu 0 olacaktır.
    
    */
    int sonuc = sayi1/sayi2;

    cout<<"sonuc:"<<sonuc<<endl;

    float ondalikSayi =5.0f;

    /*
        tam sayı ile ondalık sayının işleme tabi tutulması sonucunda ondalık sayı elde edilecektir.

        sayi1/ondalikSayi   ===>   2/5.0f  ====>  0.4f olacaktır.

            
    */

    float ondalikSonuc = sayi1/ondalikSayi;

    cout<<"ondalikSonuc:"<<ondalikSonuc<<endl;

    /*
    
        Aşağıdaki ifadede öncelikle atama operatörünün sağındaki işlem gerçekleştirilmektedir.

        işlem sonucu 0.4f değeri elde edilmektedir.

        Fakat atama operatörü devreye girdiğinde soldaki değişken tam sayı olduğu için

        derleyici ondalık 0.4f değerini tam sayıya çevirecektir. Dolayısıyla sonuc
        
        değişkenin 0 değeri atanır.
    
    */


    sonuc = sayi1/ondalikSayi;

    cout<<"sonuc:"<<sonuc<<endl;
}