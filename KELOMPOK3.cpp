#include<iostream>
#include<fstream>
using namespace std;

int main(){
	int pilihan,  jumlah, total, uang, kembalian;
	int bensin;
	char pembeli [50];
x:
	cout << "##   STRUK SPBU UAD  ##\n";
	cout << "=====================================================\n";
	cout << "Pilihan Menu: \n";
	cout << "[1] Kasir SPBU\n";
	cout << "[2] Keluar dan cetak struk\n";
	cout << "=====================================================\n";

	cout << "Pilihan Anda: ";
	cin >> pilihan;
	if(pilihan == 1){
		cout << "\n";
		cout << " \t\tSPBU UAD " <<endl;
		cout << "======================================================\n";
		cout << "Harga perliter, PERTALITE [1]= Rp 7000\n";
		cout << "Harga perliter, PERTAMAX [2]= Rp 9000\n";
		cout<<"Jenis Bensin : ";
		cin>>bensin;
		if(bensin == 1){
		cout << "PERTALITE\n";
		cout << "Nama Pembeli : ";
		cin >> pembeli;
		cout << "Jumlah Liter : ";
		cin >> jumlah;
		total = 7000*jumlah;
		cout << "Total: Rp " << total << endl;
		cout << "Uang yang dibayarkan : ";
		cin >> uang;
		kembalian = uang - total;
		cout << "Kembalian : " << kembalian << endl;
		cout << "=====================================================\n";
		}
		if(bensin == 2){
		cout << "PERTAMAX\n";
		cout << "Nama Pembeli : ";
		cin >> pembeli;
		cout << "Jumlah Liter : ";
		cin >> jumlah;
		total = 9000*jumlah;
		cout << "Total: Rp " << total << endl;
		cout << "Uang yang dibayarkan : ";
		cin >> uang;
		kembalian = uang - total;
		cout << "Kembalian : " << kembalian << endl;
		cout << "=====================================================\n";
		}
		goto x;
	} 
	if(pilihan == 2){
		ofstream file ("struk.txt");
		if(!file.is_open()){
			cout << "File is not available\n";
		}
		else{
		file << "       STRUK SPBU UAD \n";
		file << "======================================\n";
		file << "PERTALITE[1]\t PERTAMAX[2]\n";
		file << " Nama Pembeli : " << pembeli << endl;
		file << " Jenis Bensin : " << bensin << endl;
		file << " Jumlah Liter : " << jumlah << endl;
		file << "--------------------------------------\n";
		file << " Total Harga      : " << total << endl;
		file << " Bayar            : " << uang << endl;
		file << " Kembalian        : " << kembalian << endl;
		file << "======================================\n";
		file << "   TERIMA KASIH ATAS KUNJUNGAN ANDA\n";
		file << "    SEMOGA HARI ANDA MENYENANGKAN:)\n";
		file << "======================================\n";
		file.close();
		}
	}
	return 0;
}
