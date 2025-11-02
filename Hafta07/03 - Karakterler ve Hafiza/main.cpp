#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    /*
        Bilgisayar hafızasında sadece ikili değerler tutulmaktadır.
        karakterler de aynı şekilde ikili olarak hafızada tutulmaktadır.
        Her bir karakterin ikili bir kod karşılığı bulunmaktadır.

        Örneğin A karakterinin sayısal kodu 65'dir.

        char k='A';

        k değişkenin hafızasındaki hücreye gidersek 1 baytlık hücrede 65 değerinin ikili karşılığının bulunduğunu görürürz.
    
    */

    char k ='A';

    int A_ninSayisalDegeri = k;
    /*
        Yukarı da bir tam sayı değişken tanımlanmıştır. k değişkenin değeri bu tamsayiya atanmaktadır.
        C++ k'nın tuttuğu karakterin sayısal kodunu tam sayı değişkene atayacaktır.
        Aşağıda ise bu tam sayı değeri ekrana çıkartılmaktadır.
    */
   cout<<"A karakterinin kodu="<<A_ninSayisalDegeri<<endl;


   

}