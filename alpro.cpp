#include<iostream>
#include<fstream>
using namespace std;

int main(){
	int jumlah, total, total1, diskon, menu, x;
	float jarak;
	char a, b, pilihan1;
		cout << "           RUMAH MAKAN AlDO \n ";
		cout << " Masa Pandemi hanya menerima orderan Delivery\n";
		cout << " MENU : \n";
		cout << " [1] Ayam Geprek  Rp 21.000\n";
		cout << " [2] Ayam Goreng  Rp 17.000\n";
		cout << " [3] Udang Goreng Rp 19.000\n";
		cout << " [4] Cumi Goreng  Rp 20.000\n";
		cout << " [5] Ayam Bakar   Rp 25.000\n ";
		cout << " Menu Pilihan : ";
		cin >> menu;
		if(menu == 1){
			cout << " Ayam Geprek\n";
			cout << " Harga : Rp 21000\n";
			cout << " Jumlah : ";
			cin >> jumlah;
			cout << " Jarak Rumah (km): ";
			cin >> jarak;
			total1 = jumlah*21000;
			if (jarak <= 3){
				total = jumlah*21000;
				cout << " Ongkir : 15000\n";
				if (total > 25000){
					cout << "Diskon Ongkir: 3000\n";
					x = total-3000;
					cout << " Total : " << x << endl;
				}
				if (total > 50000){
					cout << "Diskon Ongkir: 5000 + 15% Pembelian\n";
					diskon = total*15/100;
					x = total-diskon-5000;
					cout << " Total : " << x << endl;
				}
				if (total > 150000){
					cout << "Diskon Ongkir: 8000 + 35% Pembelian\n";
					diskon = total*35/100;
					x = total-diskon-8000;
					cout << " Total : " << x << endl;
				}
			}
			if (jarak > 3){
				total = jumlah*21000;
				cout << " Ongkir : 25000\n";
				if (total > 25000){
					cout << "Diskon Ongkir: 3000\n";
					x = total-3000;
					cout << " Total : " << x << endl;
				}
				if (total > 50000){
					cout << "Diskon Ongkir: 5000 + 15% Pembelian\n";
					diskon = total*15/100;
					x = total-diskon-5000;
					cout << " Total : " << x << endl;
				}
				if (total > 150000){
					cout << "Diskon Ongkir: 8000 + 35% Pembelian\n";
					diskon = total*35/100;
					x = total-diskon-8000;
					cout << " Total : " << x << endl;
				}
			}
		}
		else if(menu == 2){
			cout << " Ayam Goreng\n";
			cout << " Harga : Rp 17000\n";
			cout << " Jumlah : ";
			cin >> jumlah;
			cout << " Jarak Rumah (km): ";
			cin >> jarak;
			total1 = jumlah*17000;
			if (jarak <= 3){
				total = jumlah*17000;
				cout << " Ongkir : 15000\n";
				if (total > 25000){
					cout << "Diskon Ongkir: 3000\n";
					x = total-3000 ;
					cout << " Total : " << x << endl;
				}
				if (total > 50000){
					cout << "Diskon Ongkir: 5000 + 15% Pembelian\n";
					diskon = total*15/100;
					x = total-diskon-5000;
					cout << " Total : " << x << endl;
				}
				if (total > 150000){
					cout << "Diskon Ongkir: 8000 + 35% Pembelian\n";
					diskon = total*35/100;
					x = total-diskon-8000;
					cout << " Total : " << x << endl;
				}
			}
			if (jarak > 3){
				total = jumlah*17000;
				cout << " Ongkir : 25000\n";
				if (total > 25000){
					cout << "Diskon Ongkir: 3000\n";
					x = total-3000;
					cout << " Total : " << x << endl;
				}
				if (total > 50000){
					cout << "Diskon Ongkir: 5000 + 15% Pembelian\n";
					diskon = total*15/100;
					x = total-diskon-5000;
					cout << " Total : " << x << endl;
				}
				if (total > 150000){
					cout << "Diskon Ongkir: 8000 + 35% Pembelian\n";
					diskon = total*35/100;
					x = total-diskon-8000;
					cout << " Total : " << x << endl;
				}
			}
		}
		else if(menu == 3){
			cout << " Udang Goreng\n";
			cout << " Harga : Rp 19000\n";
			cout << " Jumlah : ";
			cin >> jumlah;
			cout << " Jarak Rumah (km): ";
			cin >> jarak;
			total1 = jumlah*19000;
			if (jarak <= 3){
				total = jumlah*19000;
				cout << " Ongkir : 15000\n";
				if (total > 25000){
					cout << "Diskon Ongkir: 3000\n";
					x = total-3000;
					cout << " Total : " << x << endl;
				}
				if (total > 50000){
					cout << "Diskon Ongkir: 5000 + 15% Pembelian\n";
					diskon = total*15/100;
					x =  total-diskon-5000;
					cout << " Total : " << x << endl;
				}
				if (total > 150000){
					cout << "Diskon Ongkir: 8000 + 35% Pembelian\n";
					diskon = total*35/100;
					x = total-diskon-8000;
					cout << " Total : " << x << endl;
				}
			}
			if (jarak > 3){
				total = jumlah*19000;
				cout << " Ongkir : 25000\n";
				if (total > 25000){
					cout << "Diskon Ongkir: 3000\n";
					x = total-3000;
					cout << " Total : " << x << endl;
				}
				if (total > 50000){
					cout << "Diskon Ongkir: 5000 + 15% Pembelian\n";
					diskon = total*15/100;
					x = total-diskon-5000;
					cout << " Total : " << x << endl;
				}
				if (total > 150000){
					cout << "Diskon Ongkir: 8000 + 35% Pembelian\n";
					diskon = total*35/100;
					x = total-diskon-8000;
					cout << " Total : " << x << endl;
				}
			}
		}
	
		else if(menu == 4){
			cout << " Cumi Goreng\n";
			cout << " Harga : Rp 20000\n";
			cout << " Jumlah : ";
			cin >> jumlah;
			cout << " Jarak Rumah (km): ";
			cin >> jarak;
			total1 = jumlah*20000;
			if (jarak <= 3){
				total = jumlah*20000;
				cout << " Ongkir : 15000\n";
				if (total > 25000){
					cout << "Diskon Ongkir: 3000\n";
					x = total-3000;
					cout << " Total : " << x << endl;
				}
				if (total > 50000){
					cout << "Diskon Ongkir: 5000 + 15% Pembelian\n";
					diskon = total*15/100;
					x = total-diskon-5000;
					cout << " Total : " << x << endl;
				}
				if (total > 150000){
					cout << "Diskon Ongkir: 8000 + 35% Pembelian\n";
					diskon = total*35/100;
					x = total-diskon-8000;
					cout << " Total : " << x << endl;
				}
			}
			if (jarak > 3){
				total = jumlah*20000;
				cout << " Ongkir : 25000\n";
				if (total > 25000){
					cout << "Diskon Ongkir: 3000\n";
					x = total-3000;
					cout << " Total : " << x << endl;
				}
				if (total > 50000){
					cout << "Diskon Ongkir: 5000 + 15% Pembelian\n";
					diskon = total*15/100;
					x = total-diskon-5000;
					cout << " Total : " << x << endl;
				}
				if (total > 150000){
					cout << "Diskon Ongkir: 8000 + 35% Pembelian\n";
					diskon = total*35/100;
					x = total-diskon-8000;
					cout << " Total : " << x << endl;
				}
			}
		}
		else if(menu == 5){
			cout << " Ayam Bakar\n";
			cout << " Harga : Rp 25000\n";
			cout << " Jumlah : ";
			cin >> jumlah;
			cout << " Jarak Rumah (km): ";
			cin >> jarak;
			total1 = jumlah*25000;
			if (jarak <= 3){
				total = jumlah*25000;
				cout << " Ongkir : 15000\n";
				if (total > 25000){
					cout << "Diskon Ongkir: 3000\n";
					x = total-3000;
					cout << " Total : " << x << endl;
				}
				if (total > 50000){
					cout << "Diskon Ongkir: 5000 + 15% Pembelian\n";
					diskon = total*15/100;
					x = total-diskon-5000;
					cout << " Total : " << x << endl;
				}
				if (total > 150000){
					cout << "Diskon Ongkir: 8000 + 35% Pembelian\n";
					diskon = total*35/100;
					x = total-diskon-8000;
					cout << " Total : " << x << endl;
				}
			}
			if (jarak > 3){
				total = jumlah*25000;
				cout << " Ongkir : 25000\n";
				if (total > 25000){
					cout << "Diskon Ongkir: 3000\n";
					 x = total-3000;
					cout << " Total : " << x << endl;
				}
				if (total > 50000){
					cout << "Diskon Ongkir: 5000 + 15% Pembelian\n";
					diskon = total*15/100;
					x = total-diskon-5000;
					cout << " Total : " << x << endl;
				}
				if (total > 150000){
					cout << "Diskon Ongkir: 8000 + 35% Pembelian\n";
					diskon = total*35/100;
					x = total-diskon-8000; 
					cout << " Total : " << x << endl;
				}
			}
		
		ofstream coba ;
		coba.open ("strukku.txt");

		if(!coba.is_open()){
			cout << "coba is not available\n";
		}
		else{
			coba << "    STRUK RUMAH MAKAN ALDO\n";
			coba << " ===================================\n";
			coba << " [1] Ayam Geprek  Rp 21.000\n";
			coba << " [2] Ayam Goreng  Rp 17.000\n";
			coba << " [3] Udang Goreng Rp 19.000\n";
			coba << " [4] Cumi Goreng  Rp 20.000\n";
			coba << " [5] Ayam Bakar   Rp 25.000\n ";
			coba << " Pesanan : " << menu << endl;
			coba << " JUmlah  : " << jumlah << endl;
			coba << " Total   : " << x << endl; 
			coba << " ==================================\n";
			coba.close();
		}
	}
	return 0;
}
