#include <iostream>

using namespace std;

int main()
{
   int satir = 3;

   for (int disSayac = 1; disSayac <= satir; disSayac++)  //-----> Dış döngü
   {
      for (int icSayac = disSayac; icSayac <=satir; icSayac++)    // ----> iç döngü
      {
         cout << "*";
      }
      cout << endl;
   }
}