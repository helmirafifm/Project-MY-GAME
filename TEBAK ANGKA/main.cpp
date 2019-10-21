#include <iostream>
#include <String>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int kunci, tebakan,maks, nyawa=3;
    char option;
    int i=0;
    srand(time(NULL));
    do{
    do{
        cout << "masukkan maksimal nilai (10-100): "; cin >> maks;
        if(maks<10 || maks>100){
            cout << "MASUKAN ANGKA ANTARA 0-100  !!!" << endl;
            cout<<endl;
        }
    } while (maks<10 || maks>100);

    cout << "SILAHKAN TEBAK ANGKA ANTARA 0 SAMPAI "<<maks<<"!!"<<endl;
    kunci = rand() % maks +1;
    cout << "(cheat : ini adalah angka yang ditebak)=>" <<kunci<<endl;
    cout << ""<<endl;

    do{
        cout << "MASUKAN TEBAKAN ANDA : ";cin >> tebakan;
        if(tebakan<kunci){
            cout << "tebakan anda terlalu kecil"<<endl;
            nyawa--;
            cout << "tabakan anda salah, nyawa : "<<nyawa<<endl;
        }
        else if(tebakan>kunci){
            cout << "tebakan anda terlalu besar"<<endl;
            nyawa--;
            cout << "tabakan anda salah, nyawa : "<<nyawa<<endl;
        }
        else if (kunci == tebakan){
            cout << "tebakan anda benar"<<endl;
        }
        cout << ""<<endl;
        if(nyawa==0){
            cout << "ANDA KALAH"<<endl;
        }
    }while (kunci!=tebakan && nyawa !=0);
    cout << "INGIN BERMAIN LAGI ?(y/n) : ";cin >>option;
    cout << ""<< endl;
    i++;
    }while(option=='y');
    return 0;
}
