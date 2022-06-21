#include <iostream>
using namespace std;

class pointer{
public:
  void inputan();
  void tambahan();
};
struct node{
  char nama[20];
  char nim[20];
  node *next;
}; 

node *awal = NULL;
node *posisi;
int option = 0;

void pointer::inputan(){
  cout << endl;
  node *baru;
  baru = new node;
  cout << "Silahkan Masukkan Nama : ";
  cin >> baru->nama;
  cout << "Silahkan Masukkan Nim : ";
  cin >> baru->nim;
  baru->next = NULL;
  if(awal==NULL){
    awal=baru;
    awal->next = NULL;
  }
  else{
    baru->next = awal;
    awal= baru;
  }
  cout << "========================="<<endl;
  cout << "|Proses menampilkan data|"<<endl;
  cout << "_________________________"<<endl;
  cout << "daftar nama :" << baru->nama << endl;
  cout << "daftar nim: " << baru->nim << endl;
    
}
void pointer::tambahan(){
  node *temp, *temp2;
  temp= new node;
  cout << endl;
  cout << "Silahkan Masukkan Nama : ";
  cin >> temp->nama;
  cout << "silahkan Masukkan Nim : ";
  cin >> temp->nim;
  temp->next=NULL;
  if(awal==NULL){
    awal=temp;
    posisi = awal;
  }
  else{
    temp2 = awal;
    while(temp2->next !=NULL){
      temp2=temp2->next;
    }
    temp2->next=temp;
  }
  char lagi;
  cout << "Ingin menginput lagi? y/t   ";
  cin >>lagi;
  if(lagi=='y'){
    tambahan();
cout << "PROGRAM SELESAI";
  cout << "========================="<<endl;
  cout << "|Proses menampilkan data|"<<endl;
  cout << "_________________________"<<endl;
  cout << "daftar nama :" << temp->nama << endl;
  cout << "daftar nim: " << temp->nim << endl;
cout << "PROGRAM SELESAI"<<endl;
  }
  else{
    cout << endl;
    cout << "\n========================="<<endl;
  cout << "|Proses menampilkan data|"<<endl;
  cout << "_________________________"<<endl;
  cout << "daftar nama :" << temp->nama << endl;
  cout << "daftar nim: " << temp->nim << endl;
//cout << "PROGRAM SELESAI"<<endl;
  }
}
int main(){
  pointer nanda;
  nanda.inputan();
  nanda.tambahan();
  
}