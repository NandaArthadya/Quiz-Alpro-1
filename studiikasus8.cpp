#include<iostream>
#include <string>

using namespace std;


  string barang[]={"Samsung Evo", "SanDisk 16GB", "Logitecth M170", "WD Green 120 GB", "Garmin Venu SQ", "Epson L3210 AIO"};
    int harga[]={200000,60000,120000,400000,3100000,2500000};
    int stok[]={30, 45, 55, 23, 12, 14};
    string cart_barang[100];
    int cart_harga[100];
    int jumlah,indeks=-1,N;
    char barang_nama;
    int barang_harga,barang_stok;
    
//untuk daftar barang
string cbarang(string barang[],int harga[],int stok[]){
    cout << "_______________________________________________________________________________\n";
    cout << " kode \t\t  barang \t\t harga \t\t\t stok barang  |\n";
    cout << "______________________________________________________________________________|\n";
   for(int i=0;i<6;i++){
        cout << " " << i << "\t\t" << barang[i] << "\t\tRp. " << harga[i] << "\t\t\t" << stok[i] << " " << "|"<< endl;
   }
   cout << "_______________________________________________________________________________\n";
   cout << endl;
}



int cart(){
	char lagi;
	char input;
	
	do {
		int N[100];
        int kode;
        cout << "silahkan masukkan kode barang : ";
        cin >> kode;
        
        if(stok[kode] == 0){
        	cout << "Barang yang anda pilih " << endl;
		}
		else{
			cout << "nama barang \t: " << barang[kode] << endl;
        	cout << "harga barang \t: " << harga[kode] << endl;
        	cout << "stok barang \t: " << stok[kode]-1 << endl;
        	indeks=indeks+1;
        	cart_barang[indeks]=barang[kode];
        	cart_harga[indeks]=harga[kode];
        	stok[kode]=stok[kode]-1;
        	jumlah=jumlah*harga[kode];
        	cout << "total harga \t: " << jumlah << endl;
		}
			cout << "belanja lagi?[y/t] ";
        	cin >> lagi;
        	cout << endl;
	}
	while(lagi=='Y' || lagi=='y');
}



/////////////////////// untuk Keranjang Belanja ////////////////////////////////
string keranjang(int maks,string cart_barang[],int cart_harga[]){
    cout << endl;
    cout << "________________________________________\n";
    cout << "Daftar Barang yang anda beli:" << endl;
    for(int i=0;i<=maks;i++){
        cout << "\t" << i+1 << "  " << cart_barang[i] << "\t\t\tRp. " << cart_harga[i] << endl;
    }
}
int main(){
    int pilih;
    cbarang(barang,harga,stok);
    cart();
    keranjang(indeks,cart_barang,cart_harga);
    cout << "______________________________________\n";
    cout << "\t total harga yang harus anda bayar adalah : ";
    cout << jumlah << endl;
    cout << "—————————————————————————\n";
	return 0;
}

