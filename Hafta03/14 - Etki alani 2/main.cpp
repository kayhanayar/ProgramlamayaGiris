#include<iostream>

using namespace std;

int main()
{
    char a ='b';

    if(true)
    {
        //farklı etki alanlarıda aynı isimde değişken tanımlanabilir.
        int a = 125;

        // son tanımlanan a kullanılacaktır.
        cout<<a<<endl;
    }
    //if içerisindeki a değişkeni yok edildiğinden
    //ekrana 'b' karakteri çıkacaktır
    cout<<a<<endl;
}   