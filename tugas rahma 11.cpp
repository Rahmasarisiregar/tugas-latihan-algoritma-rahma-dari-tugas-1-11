#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	float penjualanbarang=500000,komisipegawai,komisi=0.10,komisitambahan=0.15;
	char namasalesman[30],namaperusahaan[30];
	
	cout<<"JUMLAH PENJUALAN"<<endl;
	cout<<"................"<<endl;
	cout<<"nama salesman :";
	gets(namasalesman);
	cout<<"namaperusahaan :";
	cin>>namaperusahaan;
	cout<<"penjualan barang :";
	cin>>penjualanbarang;
	cout<<"komisi pegawai :"<<komisi<<endl;
	cin>>komisipegawai;
	cout<<"komisi :"<<komisi*0.10<<endl;
	cin>>komisi;
	cout<<"komisi tambahan :"<<komisitambahan*0.15<<endl;
	cin>>komisitambahan;
	
	if(penjualanbarang<=500000){
					komisi=penjualanbarang*0.10; //komisi 10% untuk penjualan barang 500000
	}else{
					komisi=500000*0.10; //komisi untuk penjualan pertama
					komisitambahan=(500000)*0.15; //komisi sisa penjualan 
	}
	
	return 0;
}
