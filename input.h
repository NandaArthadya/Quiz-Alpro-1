using namespace std;

class Input {
	public :
		void cetak(){
			cout << "Aplikasi Penjualan Ayam \n";
			cout << "Menu yang tersedia : ";
			cout << "1) Ayam Goreng  Rp. 17000 \n";
			cout << "2) Ayam Bakar   Rp. 25000 \n\n";
      cout << "3) Ayam Geprek  Rp. 21000\n";
      cout << "4) Cumi  Goreng Rp. 20000\n";
      cout << "5) Udang Goreng Rp. 19000\n"
			cout << "Pesan Ayam Goreng  -> "; cin >> bnyk_aymGr;
			cout << "Pesan Ayam Bakar  -> "; cin >> bnyk_aymBk;
		}

		void toFile(){
			tulis_data.open("api_data.txt");
			tulis_data << bnyk_aymGr << endl;
			tulis_data << bnyk_aymBk << endl;
      tulis_data << bnyk_aymGrpk << endl;
      tulis_data << bnyk_cumiGr << endl;
      tulis_data << bnyk_udangGr;
			tulis_data.close();
		}

	private :
		ofstream tulis_data;
		int bnyk_aymGr, bnyk_aymBk, bnyk_aymGrpk, bnyk_cumiGr, bnyk_udangGr;
};