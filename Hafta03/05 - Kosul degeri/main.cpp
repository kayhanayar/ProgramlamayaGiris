#include<iostream>

using namespace std;

int main()
{
    int sayi = 5;

    /*
        Kosul (if)  parantezler arasındaki değeri kontrol eder

        0'dan farklı ise komutları çalıştırır(içeri girer)

        0 ise komutları çalıştırmaz.
    */
    if(sayi)
        cout<<"bu satir calisir"<<endl;

    
    sayi = 0;
    if(sayi)
        cout<<"bu satir calismayacaktir"<<endl;
}