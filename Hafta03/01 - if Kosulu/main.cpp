#include<iostream>

using namespace std;

int main()
{
    int sayi = 5;

    /*
        Program kodu yukarıdan aşağı doğru çalışmaktadır.
        Bazı komutlar program akışını etkileyebilmektedir.

        Koşul (if)  ifadeside bunlardan birisidir.

        if ifadesi ( ) arasındaki değeri kontrol etmektedir.

        Eğer ( ) arasındaki değer sıfırdan farklı ise if'e bağlı

        olan komutlar çalıştırılacaktır.

    */
    if(sayi>5)  
        cout<<"Sayi besten buyuktur."<<endl;

    //sayı 5'den büyük olmadığı için yukarıdaki cout  satırı çalıştırılmayacaktır.    


    if(sayi==5)
        cout<<"Sayi bese esitti"<<endl;

    //sayı 5'e esit olduğu için yukarıdaki cout satiri çalışacaktır.

}