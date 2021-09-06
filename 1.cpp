#include<iostream>
using namespace std;
int main() {

    int jam1, menit1, detik1;
    int jam2, menit2, detik2;
    int jam3, menit3, detik3;
    int sisa, durasi, total1, total2;

    cout << "\t Menghitung durasi waktu \n\n";
    
    cout << " mulai pada jam   : ";
    cin >> jam1;
    cout << " mulai pada menit  ;";
    cin >> menit1;
    cout <<  " mulai pada detik :";
    cin >> detik1;

    cout << endl;

    cout << " Berakhir pada Jam : ";
    cin >> jam2;
    cout << " berakhir pada menit  ;";
    cin >> menit2;
    cout <<  " berakhir pada detik :";
    cin >> detik2;

    total1 = (jam1 * 3600) + (menit1 * 60) + detik1;
    total2 = (jam2 * 3600) + (menit2 * 60) + detik2;

    durasi = total2 - total1;

    jam3 = durasi / 3600;
    sisa = durasi % 3600;
    menit3 = sisa / 60;
    detik3 = sisa % 60;

    cout << "\n durasi waktunya " << jam3 << " Jam, " << menit3 << " menit, " << detik3 << " detik";
}
