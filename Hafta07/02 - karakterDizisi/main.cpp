#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    /*
        c++ çift tırnak içerisinde yazılanları bir karakter dizisi olarak hafızada tutmaktadır.
        aşağıdaki deneme dizisinin elemanları aşağıdaki gibi olacaktır.

            deneme[0] = 'M'
            deneme[1] = 'e'
            deneme[2] = 'r'
            deneme[3] = 'h'
            deneme[4] = 'a'
            deneme[5] = 'b'
            deneme[6] = 'a'
            deneme[7] = '\0'

        karakter dizilerinin sonuna '\0' özel karakteri yerleştirilmektedir.
        Bu karakter okunacak başka bir karakterin kalmadığını belirtmektedir.
        karakter dizileri ile işlem yapan bir çok fonksiyon '\0' karakterini 
        gördüğünde işlem yapmayı durdurmaktadır.
    */
	char deneme[] = "Merhaba";

    /*
        cout nesnesine bir karakter dizisi verildiğinde özel bir durum oluşmaktadır.
        cout karakter dizisinin her bir elemanını sırayla ekrana çıkarmaktadır.
        '\0' karakterini gördüğünde ise ekrana çıkarma duracaktır.
    */
    cout<<deneme<<endl;

    int sayilar[] = {1,2,3,4};

    /*
        cout<<  bir sayı dizisini aldığında özel bir davranışı bulunmamaktadır.
        dizinin hafızada bulunduğu ilk hücrenin adresini ekrana çıkartacaktır.
    */
    cout<<sayilar<<endl;
}