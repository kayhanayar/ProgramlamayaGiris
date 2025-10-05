#include<iostream>

using namespace std;

int main()
{
    int not = 80;

    /* 
        Birden fazla koşul operatörü kullanıldığında if işlemler sonucundaki değeri kullanır

        not >= 80 karşılaştırması doğrudur yani işlem sonucu 1'dir
        not <90 karşılaştırması doğrudur yani işlem sonucu 1'dir
        
        1 && 1 karşılaştırması doğrudur işlem sonucu 1'dir

        sonuc olarak koşul içerisi   if(1) şeklinde olacaktır.
        
    */

    if(not>=80&&not<90)
        cout<<"AA"<<endl;


}