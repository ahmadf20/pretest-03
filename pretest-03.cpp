/*
Nama    : Ahmad Faaiz A
NPM     : 140810180023
kelas   : A
Tanggal : 12/03/2018
*************************************/

#include <iostream>
using namespace std;

struct r_mhs{
    char NPM[14];
    char nama[40];
    float IPK;
};

typedef r_mhs larikMhs[30];

void banyakData(int& n){
    cout << "Masukkan banyak data : ";
    cin >> n;
}
void inputMhs(larikMhs& mhs, int n){
    cout << "Input data :" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << "Data mahasiswa ke-" << i << " : " << endl;
        cout << "NPM    : "; cin >> mhs[i].NPM;
        cout << "Nama   : "; cin >> mhs[i].nama;
        cout << "IPK    : "; cin >> mhs[i].IPK;
    }
}
void cetakMhs(larikMhs& mhs, int n){
    cout << "Cetak data :" << endl;
    cout << "No.\tNPM\tNama\tIPK" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << i+1 << "\t" << mhs[i].NPM << "\t" << mhs[i].nama << "\t" << mhs[i].IPK << endl;
    }
}
void sortNPM(larikMhs& mhs, int n){
    for(int i = n; i > 0; i--)
    {
        for(int j = i; j < n; j++)
        {
            if (mhs[j].NPM > mhs[j+1].NPM) {
                swap(mhs[j], mhs[j+1]);
            }
        }
    }
}


int main(){
    int n;
    larikMhs mhs;

    banyakData(n);
    inputMhs(mhs, n);
    cetakMhs(mhs, n);
    sortNPM(mhs, n);
    cetakMhs(mhs, n);
}