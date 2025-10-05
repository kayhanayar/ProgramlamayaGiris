#include<iostream>

/*
    > (büyüktür)
    < (küçüktür)
    == ( eşitmi)
    != (eşit değilmi)
    || (veya)
    &&(ve)
    >=
    <=
*/
using namespace std;

int main()
{
    int sayi1 = 15;
    int sayi2 = 25;


    int sonuc = sayi1>sayi2;    //karşılaştırılan işlem sayi1 büyüktür sayi2 den
    
    /*
        karşılaştırma  yanlış ise işlem sonucunda 0(false) değeri elde edilir.

        doğru ise 1 elde edilir.

        sayi1>sayi2  ===>  15>25  doğru değildir. 
        
        Dolayısıyla sayi1>sayi2 işlemi 0 değeri getirecektir
    */

    cout<<"sonuc:"<<sonuc<<endl;



    sayi1 = sayi2;


    sonuc =  sayi1==sayi2;
    /*
        yukarıdaki ifadede ilk olarak atama operatörünün sağındaki işlemler gerçekleştirilecektir.

        sayi1==sayi2 işleminde ==(eşitmi) operatörü sol ve sağındaki iki değeri karşılaştırmaktadır.

        iki değer eşit ise işlem sonucu 1 olacaktır. Eğer değil ise 0 olacaktır.

    */

    cout<<"sonuc:"<<sonuc<<endl;


    sayi1 = 15;
    sayi2 =0;
    
    sonuc = sayi1&&sayi2;   //ve operatörü. 

    /*
    
        &&(ve) operatörü iki operandınında doğru olması durumunda işlem sonucu doğru olacaktır.
        aksi durumda işlem yanlış yani 0 olacaktır.

        C++ programlama dili yanlış(false) değer için 0 sayısını kullanmaktadır.
        doğru değer olarak 0 dışındaki bütün değerler kabul edilebilir olmaktadır.
        (Makinede bu şekilde çalışmaktadır.)
    
        sayi1&&sayi2  ===>  15&&0   ===>  0
    */

}