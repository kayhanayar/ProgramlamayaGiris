#include <iostream>

using namespace std;

int main()
{
    int sinir;


    int toplam = 0 ;
    /* 
        arttırma işlemi sadece ++ olmak zorunda değildir
        tek bir işlem olduğu sürece başka işlemlerde yapılabilri.
     */
    for(int i=1;i<sinir;i+=2)
    {
        toplam*=i;
    }

    cout<<"tek sayilarin toplami"<<toplam<<endl;
}