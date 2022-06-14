#include <iostream>
using namespace std;

class matriks{
  public:
    void input();
    void tampilan();
    int penyortiran();
    int konversi();
  private:
    int data[24], tukar;
    int baris, kolom, data2[24][24];
int i=0;
};

void matriks::input(){
  cout << "Masukkan nomor buku: \n";
  for(int i=0; i<24; i++){
    cout << "data nomor buku ke-["<<i<<"]: ";
    cin >> data[i];
  }
  cout << "Tampilan data nomor buku : ";
  for(int i=0; i<24; i++){
    cout << data[i] << " ";
  }
}

int matriks::penyortiran(){
  for (int i=0; i<25; i++){ // penyortiran data
    for(int j= i+1; j<25; j++ ){
      if (data[i]>data[j]){
        tukar=data[i];
        data[i]=data[j];
        data[j]=tukar;   
      }
    }
  }
  for(int i=0; i<24; i++){ // ditampilkan 
    cout << data[i] << " ";
  }
}

int matriks::konversi(){ 
  int i=0;
  cout << "Masukkan banyak kolom rak : ";
  cin >> kolom;
  cout << "Masukkan banyak baris rak : ";
  cin >> baris;
  for(int k=0; k<baris; k++){
  	for(int l=0; l<kolom; l++){
  		data2[k][l] = data[i];
  		i++;
	  }
  }
  cout << endl;
  for(int k=0; k<baris; k++){
  	for(int l=0; l<kolom; l++){
  		cout << data2[k][l] << " ";
	  }
	  cout << endl;
  }
}
int main(){
  matriks nanda;
  nanda.input();
  cout << endl << endl;
  cout << "Hasil sorting nomor buku: ";
  nanda.penyortiran();
  cout << endl << endl;
  nanda.konversi();
  return 0;
}
