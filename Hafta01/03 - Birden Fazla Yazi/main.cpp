/*
   cout ile birden fazla mesaj art arda ekrana çıkartılabilir
   tek yapılması gereken mesajdan sonra tekrardan << operatörü kullanılmalıdır.

*/

#include<iostream>



using namespace  std;

int main()
{

    /*
        aşağıda tek bir c++ ifadesi yazılmıştır.
        cout mesajları soldan sağa doğru yazdıracaktır.
    */
    cout<<"Merhaba Dunya" <<"Merhaba Turkiye"<< "Merhaba Sakarya";

   
}


/*
    derlemek için komut isteminde aşağıdaki komutu girmeniz yeterli olacaktır

        g++ main.cpp -o program

*/