#include<iostream>

/*
   aritmetik işlemler matematiksel işlem sırasına göre gerçekleşir

*/
using namespace std;

int main()
{

    int sayi1= 15;
    int sayi2= 20;
    /*
    
        aşağıdaki ifadede önce toplam değişkeni tanımlanıyor
        ardından = operatörünün sağındaki işlemler gerçekleştiriliyor.
        Burada sadece toplama işlemi olduğundan sayılar toplanıp sonuç elde ediliyor
        elde edilen sonuç atama operatörü ile toplam değişkenin üzerine yazılıyor
    
    */
    int toplam = sayi1+sayi2;

    cout<<"toplam:"<<toplam<<endl;

    /*
        Önce atama operatörünün sağındaki işlemler yapılır

        sayi1*toplam işleminin sonucunda elde edilen değer ile
        sayi2 değerinin farkı alınır. elde edilen sonuçta atama operatörü
        aracılığıla sonuc değişkenine atanır.

    */
    int sonuc = sayi1*toplam-sayi2;

    cout<<"sonuc:"<<sonuc<<endl;

    /*
    
        aritmetik işlemler soldan sağa doğru yapılmaktadır.

    */
}