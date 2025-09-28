#include<iostream>

/*
    Atama operatörü değişkenler arasında veri transfer için de kullanılabilir

    = operatörünün sağındaki değişkenin değeri soldaki değişkene kopyalanacaktır.

    İşlem sonucunda soldaki değişken değişirken sağdaki değişmez.

*/
using namespace std;

int main()
{
    
    int sayi1 = 25;
    int sayi2 = 45;
    

    cout<<"islem oncesi"<<endl;     //endl satır başı yapmak için kullanılır.
    cout<<"sayi1:"<<sayi1<<endl;    

    cout<<"sayi2:"<<sayi2<<endl;
    
    sayi1= sayi2;

    cout<<"islem sonrasi"<<endl;     //endl satır başı yapmak için kullanılır.    

    cout<<"sayi1:"<<sayi1<<endl;    

    cout<<"sayi2:"<<sayi2<<endl;
}