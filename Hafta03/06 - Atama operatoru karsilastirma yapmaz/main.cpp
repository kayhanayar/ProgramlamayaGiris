#include<iostream>

using namespace std;

int main()
{
    int sayi = 5;

    /*
        = (atama operatörü) == (eşit mi) operatörlerinin yaptığı işlem ve
        sonuçları farklıdır.

        sayi=6 işleminde sayi değişkenine 6 değeri atanır. 
        ve işlem sonucu atanan değerdir    (sayi=6)==>  6

        sayi==6 işleminde sayi değişkenindeki değer ile 6 sayısı karşılaştırılıyor
        eşitlerse işlem sonucu 1 değillerse işlem sonucu 0 olacaktır.

    */
    if(sayi=6)
        cout<<"kosul icerisine girer mi"<<endl;

    /*
        Yukarıdaki if koşulunun içerisindeki iifade sayi değişkenine 6 değeri atanıyor

        atama işlemi sonucunda atan değer işlemin olduğu yere bırakılacaktır.

        dolayısıyla  if(sayi=6)  ===>  if(6)  sonucuna dönüşecektir.
    */

}