#include<iostream>

using namespace std;

int main()
{
    int sayi = 5;

    /*
        Aşağıdaki koşul sayı>0 koşulunun sonucunu kontrol etmektedir.
        koşul sonucu doğru(1) olduğu için if'e ait olan {} içerisindeki 
        komutlar çalışacaktır.
    */
    if(sayi>0)
    {
        cout<<"Sayi Pozitiftir."<<endl;
        sayi = sayi*sayi;
    }
        

     /*
        Aşağıdaki koşul sayı!=5 koşulunun sonucunu kontrol etmektedir.
        koşul sonucu doğru(1) olduğu için if'e ait olan {} içerisindeki 
        komutlar çalışacaktır.
    */     


    if(sayi!=5)
    {
        cout<<"Sayi bese esit degildir"<<endl;
        sayi/sayi;
    }
        

    

}