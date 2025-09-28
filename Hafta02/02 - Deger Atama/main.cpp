#include<iostream>

/*
    Değişkenlere Değer atama = operatörü ile gerçekleştirilmektedir.

    = operatörünün solunda değer atanabilecek bir değişken olmalıdır.

*/
using namespace std;

int main()
{
    
    int sayi = 25;

    cout<<"sayi:"<<sayi;    //önce ekrana sayi: yazısı çıkartılacak ve ardından sayi değişkenin değeri 25 yazılacaktır.
    
    
    /*
    
        Aşağıdaki ifadede öncelikle = operatörünün sağındaki işlemler gerçekleştirilecektir.

        45+15  = 60 sonucu elde edildikten sonra ifademiz

        sayi= 60 şeklinde sonuçlanacaktır.

        atama operatörü sağdaki 60 değerini soldaki sayi değişkeninin temsil ettiği hafıza alanına kopyalanacaktır.
    */

    sayi = 45 +15;  //45+15 işleminin sonucu sayı değişkenine atanmaktadır.

    cout<<"sayi:"<<sayi;
}