/*
   include komutu derleme aşamasından önce çalışır. Derleyiciye derleme işlemini nasıl yapacağını belirtmektedir.

   O yüzden Cpp ifadelerinde olduğu gibi noktalı virgül(;) ile bitmez

*/

#include<iostream>


//Derlemeye dahil olan  cpp ifadeleri noktalı virgül(;) ile bitmelidir.
using namespace  std;

/*
    fonksiyon tanımlarında noktalı virgül(;) kullanılmaz
*/
int main()
{

    /* 
        ifade bittiğinde ; yerleştirilmelidir
        noktalı virgül kaldırılarak hata kontrol edilebilir.
    */ 
    cout<<"Merhaba Dunya";

    /* 
        cpp ifadeleri ; ile bitmektedir. 
        sonraki ifade için satır başı yapmak gerekmez.
        Fakat temiz ve okunabilir kod dosyaları için satır başı yapılması doğru olacaktır.
    */ 

    cout<<"Merhaba Turkiye";cout<< "Merhaba Sakarya";
}



/*
    derlemek için komut isteminde aşağıdaki komutu girmeniz yeterli olacaktır

        g++ main.cpp -o program

*/