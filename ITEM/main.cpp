#include <iostream>

using namespace std;

int main()
{
    string nama_item;
    int stat, pembanding;
    string item_sebelumnya, item_terhebat,item_terlemah;
    char option;
    int i=0;

    do{
        cout << "masukan nama item : "; cin >> nama_item;
        cout << "masukan stat : "; cin >> stat;

        cout << "item anda adalah : "<<nama_item<<endl;
        cout << "stat : " <<stat<<endl;

        if(i==0){
            cout << "item sebelumya : Tidak ada "<<endl;
        }
        else if (i!=0){
            cout << "item sebelumnya :"<<item_sebelumnya<<endl;
        }


        if(i==0){
            item_terhebat=nama_item;
            pembanding=stat;
        }
        else if(i!=0){
            if(stat>pembanding){
                item_terhebat=nama_item;
            }
        }
        cout << "item terhebat : "<<item_terhebat<<endl;


        if(i==0){
            item_terlemah=nama_item;
            pembanding=stat;
        }
        else if(i!=0){
            if(stat<pembanding){
                item_terlemah=nama_item;
            }
        }
        cout << "item terlemah : "<<item_terlemah<<endl;
        cout << "input item lagi ? (y/n) : "<<endl; cin >>option;
        item_sebelumnya=nama_item;
        i++;
    }while(option=='y');
    return 0;
}
