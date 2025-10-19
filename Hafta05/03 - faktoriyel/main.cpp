#include<iostream>
using namespace std;

int main()
{
    int sayi;
    cout<<"faktoriyeli alinacak sayiyi girin:";
    cin>>sayi;

    int faktoriyel=1;

    for(int i=1;i<=sayi;i++)
        faktoriyel*=i;
    /*
        Döngü adımları          
        sayi=5 olsun;

        tur   i     Koşul      faktoriyel       İşlem               sonuc(faktoriyel)
        1     1      1<=5            1          faktoriyel*=1           1
        2     2      2<=5            1          faktoriyel*=2           2
        3     3      3<=5            2          faktoriyel*=3           6
        4     4      4<=5            6          faktoriyel*=4           24
        5     5      5<=5           24          faktoriyel*=5           120
        6     6      6<=5  (Koşul doğru değil döngü biter)                     
    */
    cout<<sayi<<"! = "<<faktoriyel<<endl;
}