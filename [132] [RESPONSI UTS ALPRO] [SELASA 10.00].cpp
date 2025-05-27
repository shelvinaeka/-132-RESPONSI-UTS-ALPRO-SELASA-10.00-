#include<iostream>
#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
int main(){
    string username;
	float password;
	string barang;
	float diskon;
	int hasil;
	string hapusBarang;

	
	cout<<"==Login=="<<endl;
	cout<<"Username: ";
	cin>>username;
	cout<<"Password: ";
	cin>>password;
	cout<<endl;
	
	cout<<"Masukkan barang setiap pembelian: " ;
	cin>>barang;
	cout<<"Apakah anda ingin menghapus barang? y/n : ";
	cin>>hapusBarang;
	cout<<"Masukkan diskon belanja(dalam bentuk %): ";
	cin>>diskon;
	cout<<"Hasil rincian pemasukkan supermaket: ";
	cin>>hasil;
	cout<<"Total pembelian supermaket: "<<endl;
	

}
