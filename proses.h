using namespace std;

class Proses {
	public :
		void cetak(){
			cout << "Anda sebagai Proses \n";
		}

		void getData(){
			ambil_data.open("api_data.txt");
			bool ayam_goreng = true;
			while(!ambil_data.eof()){
				if (ayam_goreng){
					ambil_data >> bnyk_aymGr;
					ayam_goreng = false;
				}
				else{
					ambil_data >> bnyk_aymBk;
				}
        else{
          ambil_data >>bnyk_aymGrpk;
        }
        else{
          ambil_data >>bnyk_cumiGR;
        }
        else{
          ambil_data >>bnyk_udangGr;
        }
			}
			ambil_data.close();
		}

		void toFile(){
			int total = (hrg_aymGr * bnyk_aymGr) + (hrg_aymBk * bnyk_aymBk) + (hrg_aymG);
			float batas = 45000;
			float t2 = float(total);
			float diskon = t2 * 0.1;

			if (total >= batas)
				t2 = t2 - diskon;


			tulis_data.open("api_data.txt");
			tulis_data << total << endl;
			tulis_data << diskon << endl;
			tulis_data << t2 << endl;
			tulis_data << bnyk_aymGr << endl;
			tulis_data << bnyk_aymBk << endl;
      tulis_data << bnyk_aymGrpk << endl;
      tulis_data << bnyk_cumiGr << endl;
      tulis_data << bnyk_udangGr;
			tulis_data.close();
		}

	private :
		ifstream ambil_data;
		ofstream tulis_data;
		int bnyk_aymGr;
		int bnyk_aymBk;
    int bnyk_aymGrpk;
    int bnyk_cumiGr;
    int bnyk_udangGr;
		int hrg_aymGr = 17000;
		int hrg_aymBk = 25000;
    int hrg_aymGrpk = 21000;
    int hrg_cumi = 20000;
    int hrg_udangGr = 19000;

};