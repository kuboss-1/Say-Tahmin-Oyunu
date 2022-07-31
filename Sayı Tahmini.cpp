#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main()
{
    int tahmin;
    char cevap = 'e';
    srand(time(NULL));
    while (cevap == 'e')
    {
        int rastgele_sayi = rand() % 100;
        cout<< "0 ile 100 arasinda bir sayi tuttum. \nHadi tahmin et!";
        cin >> tahmin;
        while (tahmin != rastgele_sayi)
        {
            if (tahmin< rastgele_sayi)
               {
                  cout<< tahmin << " tuttugum sayidan kucuk."<<endl;
               }

            else
            {
               cout<< tahmin << " tuttugum sayidan buyuk."<<endl;
            }
            cout<< "Tekrar tahmin et: ";
            cin>>tahmin;
        }
        cout<< "Buldun, tebrikler!!! Tuttugum sayi "<<rastgele_sayi<< "idi."<<endl;
        cout<< "Yeniden oynamak ister misin?"<< endl;
        cout<< "(Evet: e, Hayir: h)";

    }
    cout<< "Gule gule..."<<endl;
    return 0;

}
