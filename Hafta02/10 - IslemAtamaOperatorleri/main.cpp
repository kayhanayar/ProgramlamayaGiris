#include<iostream>

/*
    +=, -=, *= ve /=    operatörleri önce işlemi gerçekleştirip sonra atamayı yapmaktadır.

*/
using namespace std;

int main()
{
    int sayi=15;


    sayi+=45;
    /*
        yukarıdaki işlem  +=  operatörünü kullanmaktadır.
        Bu işlem açıldığında sayi=sayi+45 işlemi ortaya çıkmaktadır.
        Burada ilk olarak atama operatörünün sağındaki işlemler gerçekleşmektedir.

        sayi+45 işleminin sonucu 60 olacaktır. ardından bu değer soldaki değişkenine atanır.

        sayi=60;
    
    */
    cout<<"sayi:"<<sayi<<endl;

    sayi/=5;
    /*
        yukarıdaki işlem sayi= sayi/5; şeklinde temsil edilebilir.
        öncelikle atama operatörünün sağındaki işlem gerçekleştirilir.
        elde edilen sonuçta atama operatörünün solundaki değere atanır.
    */

}