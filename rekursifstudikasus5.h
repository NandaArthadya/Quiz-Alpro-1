using namespace std;

class mahasiswa {
  public:
    void mhs(int a);
  private :
  string b;
  int c;
};
void mahasiswa::mhs(int a){
  if(a>=1){
    mhs(a-1);
    cout << "Masukkan MatKul : ";
    cin >> b;
    cout << "Masukkan Jumlah sks :";
    cin >> c;
    }
    cout << endl;
};