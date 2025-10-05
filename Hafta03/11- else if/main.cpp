#include<iostream>

using namespace std;

int main()
{
    int not = 80;
    /*
    
        if'in doğru olmadığı durumlarda koşulu daraltmak için 
        else if ifadesi kullanılabilir.

        Önce if kontrol edilir. daha sonra sırasıyla bağlı olan else ifler kontrol edilir

    
    */
    if(not>=90)
    {
        cout<<"AA"<<endl;
    }
    else if(not>=80)/* sayı 90'dan küçük 80'den büyük eşit mi*/
    {
        cout<<"BB"<<endl;
    }
    else if(not>=70)/* sayı 80'dan küçük 70'den büyük eşit mi*/
    {
        cout<<"CC"<<endl;
    }
    else/* Yukarıdaki hiç bir koşul olmadığında else koşulu devreye girer*/
    {
        cout<<"not<70 dir"<<endl;
    }



}