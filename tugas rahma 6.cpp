#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout <<"PENJUALAN BARANG ELEKTRONIK" <<endl;
    char namabarang[30];
    float harga,jumlahjual,totalharga,diskon,totalbayar=0;
    cout<<"namabarang=";
    cin>>namabarang;
    cout<<"harga=";
    cin>>harga;
    cout<<"jumlahjual=";
    cin>>jumlahjual;
    totalharga*harga*jumlahjual;
    cout<<"totalharga="<<totalharga<<endl;
    diskon=0.1*totalharga;
    cout<<"diskon="<<diskon<<endl;
    totalbayar=totalharga-diskon;
     cout<<"totalbayar="<<totalbayar<<endl;
    return 0;
}