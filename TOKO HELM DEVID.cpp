#include<iostream>
#include<stdlib.h>
using namespace std;

/*
Mata Kuliah	: Dasar Pemrograman
tugas		: UAS
Nama		: Devid Ardika Pratama
Kelas		: 1B
Tanggal		: 5-1-2022	*/

void dh(){
	kembali:
		system ("cls");
	cout << "======================================\n";
	cout << "=============PRICE LIST=============\n";
	string nm [6]={"helm fullface  \t:", "helm bogo\t:", "helm halface\t:", "helm cakil \t:", "helm classic  \t:", "helm anak     \t:"};
	string nama [6]={"helm fullface \t:", "helm bogo    \t:", "helm halface\t:", "helm cakil  \t:", "helm classic \t:", "helm anak     \t:"};
	int harga [6]={300000,100000,250000,200000,500000,50000}; 
	int pilih;
	
		for (int a = 0 ; a < 6; a++){
		cout << nm [a]  ;
		cout << harga [a];
		
		cout << "/";
		cout << endl;	
}
		cout << "===================================\n";
		cout << "===================================\n";
		
	int byr[6];
	
	int jmlh [6];
	int tot;
	
		for (int a = 0 ; a < 6; a++){
		cout << nama [a] ;
	
		cin >> jmlh [a];		
			
}
system ("cls");
for (int i = 0 ; i < 6; i++){
	byr[i] = harga [i]*jmlh[i];
	cout << nm[i] <<byr [i] << endl ;
	
}

tot = byr [0]+byr[1]+byr[2]+byr[3]+byr[4]+byr[5];
		cout << "harga yang harus anda bayar:"<< tot << endl <<endl << endl;
		cout << "ketik 9 untuk kembali kepembelian \n";
		cout << "masukan angka :";
		cin >> pilih ;
		if (pilih == 9
		){
			goto kembali;
		}
}

int main()
{
	
	cout << "===========================================\n";
	cout << "=============TOKO HELM DEVID=============\n";
	cout << "===========================================\n";
	
int b =1;
cout << "ketik ya untuk melanjutkan \nketik apa saja untuk berhenti untuk berhenti \nmasukan angka : ";
cin >> b;

if (b==1){

	dh();
	
}
else {
	cout << "program telah berhenti";
}
	
	return 0;
}

