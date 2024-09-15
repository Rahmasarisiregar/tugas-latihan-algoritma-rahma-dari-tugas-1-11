#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout<<"GAJI KARYAWAN STMIK PENUSA" <<endl;
	char npeg [30],njab[30];
	float gaji,pajak,pinjaman,gajibersih=0;
	cout<<"masukkan nama pegawai:";
	cin>>npeg;
	cout<<"masukkan jabatan:";
	cin>>njab;
	cout<<"gaji:";
	cin>>gaji;
	cout<<setprecision(13);
	pajak=0,15*gaji;
	cout<<"pajak:"<<pajak<<endl;
	cout<<"pinjaman:";
	cin>>pinjaman;
	gajibersih=gaji-(pinjaman+pajak);
	cout<<"gaji bersih:"<<gajibersih<<endl;

	return 0;
}
