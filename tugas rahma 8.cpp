#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	char namamahasiswa[30],nim[10],nilaihuruf;
	float nilaihadir,nilaitugas,nilaiuts,nilaiuas,nilaiakhir;
	
	cout<<"DAFTAR NILAI MAHASISWA"<<endl;
	cout<<"mata kuliah : ALGORITMA pemrograman"<<endl;
	cout<<"-----------------------------------"<<endl;
	cout<<"nama mahasiswa :" ;
	gets(namamahasiswa);
	cout<<"nim :";
	cin>>nim;
	cout<<"nilai hadir :" ;
	cin>>nilaihadir;
	cout<<"nilai tugas :" ;
	cin>>nilaitugas;
	cout<<"nilai uts :" ;
	cin>>nilaiuts;
	cout<<"nilaiuas :" ;
	cin>>nilaiuas;
	nilaiakhir=(0.1*nilaihadir)+(0.15*nilaitugas)+(0.35*nilaiuts)+(0.4*nilaiuas);
	if(nilaihadir>=85 && nilaiakhir<=100) {
		nilaihuruf='A' ;  //jika begini maka ini adalah if tunggal
	}else if(nilaiakhir>=70 && nilaiakhir<=85) {
		nilaihuruf='B';   //jika ditambah else maka adalah if jamak
	}else if(nilaiakhir>=60 && nilaiakhir<=70) {
		nilaihuruf='C' ;
	}else if(nilaiakhir>=50 && nilaiakhir<=60) {
		nilaihuruf='D' ;
	}else if(nilaiakhir>=0 && nilaiakhir<=50) {
		nilaihuruf='E' ;
	}else {
		nilaihuruf='_' ;
	}
	
	cout<<"nilai akhir =" <<nilaiakhir<<endl;
	cout<<"nilai huruf =" <<nilaihuruf<<endl;
	return 0;
}
