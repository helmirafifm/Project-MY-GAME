#include <iostream>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include<iomanip>

using namespace std;

int main()
{
    string kata, tebakan,jawaban;
    char temp,option;
    int indeks1, indeks2,jml, nyawa=3;
    bool ans=true;
    int i=0;
    do{
    cout << "MASUKAN SEBUAH KATA :";cin>>kata;
    cout <<""<<endl;
    jawaban=kata;
    cout <<"JUMLAH HURUF DARI " <<kata<<" adalah : " << kata.size()<<endl;
    cout <<""<<endl;
    jml=kata.size();
    srand(static_cast<unsigned int>(time(0)));

    for (int y=jml; y>0;y--)
    {
        indeks1=rand() % jml;
        indeks2=y-1;
        temp=kata[indeks1];
        kata[indeks1]=kata[indeks2];
        kata[indeks2]=temp;
    }

    cout << "HASIL ACAK : ";
    for(int i=0;i<jml;i++)
    {
        cout <<kata[i];
    }
    cout << endl <<endl;
    cout << "(cheat : ini adalah angka yang ditebak)=>" <<jawaban<<endl;
    cout <<endl;

        do{
        cout << "TEBAKANNYA ADALAH : "; cin >> tebakan;
        if (tebakan == jawaban)
            {
            cout << "TEBAKAN ANDA BENAR !!!"<<endl;
            ans=true;
            cout << ""<<endl;
            }
        else
            {
            nyawa--;
            cout << "TEBAKAN ANDA SALAH !!"<<endl;
            cout << "NYAWA : "<< nyawa<<endl<<endl;
            ans=false;
            if(nyawa==0){
                cout << "\n TAMAT " <<endl;
                }
         }
        }while(ans==false&&nyawa!=0);
    cout << "APAKAH INGIN MAIN LAGI ? (Y/N)"<<endl;cin >>option;
    i++;
    }while(option=='y');

    return 0;
}
