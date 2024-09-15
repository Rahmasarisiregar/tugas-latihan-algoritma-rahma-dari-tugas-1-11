#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	char nmmhs[30],nim[15];
	float jlhbrg,harga,totalharga;
	
	cout<<setprecision(13);
	cout<<"nama mahasiswa: ";
	cin>>nmmhs;
	cout<<"NIM : ";
	cin>>nim;
	cout<<"jumlah barang : ";
	cin>>jlhbrg;
	cout<<"harga : ";
	cin>>harga;
	totalharga=jlhbrg*harga;
	cout<<"total harga = "<<totalharga<<endl;
	return 0;
}
