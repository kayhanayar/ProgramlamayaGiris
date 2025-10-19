
#include <iostream>

using namespace std;

int main()
{
    
    
    int sayi;

    cout<<"<-------------Basamaklariy yazdir--------------->"<<endl;
    cout<<"sayi giriniz:";
    cin>>sayi;

    cout<<"basamaklar:";
    while(sayi)
    {
        int basamak = sayi%10;
        sayi/=10;
        cout<<basamak<<" - ";
    }
    cout<<endl;
    
}
