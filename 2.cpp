#include<studio.h>
#include<conio.h>
#include<iostream.h>
using namespace std;
int main ()
{
   char pilihtanggal, uangbelanja, hargaproduk, totaltelur
   int tanggal, hargaproduk, penambahantelur, totaltelur

   atas:
        cout<<"=========================================="<<endl;
        cout<<"\tPembelian Telur Luna                    "<<endl;
        cout<<"=========================================="<<endl;
        cout<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"pilihan tanggal beli"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"1. 2"<<endl;
        cout<<"2. 3"<<endl;
        cout<<"3. 5"<<endl;
        cout<<"4. 7"<<endl;
        cout<<"5. 11"<<endl;
        cout<<"6. 13"<<endl;
        cout<<"7. 17"<<endl;
        cout<<"8. 19"<<endl;
        cout<<"9. 23"<<endl;
        cout<<"10. 31"<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"pilihan tanggal [1-10]    :"; cin>>pilihtanggal;
        cout<<"jumlah pembelian :"; cin>>jumlahpembelian;
        cout<<"------------------------------------------"<<endl;


            if (pilihtanggal=='1') {tanggal="2";
            hargaproduk=2500;}
            else if (pilihtanggal=='2') {tanggal="3";
            hargaproduk=2500;}
            else if (pilihtanggal=='3') {tanggal="5";
            hargaproduk=2500;}
            else if (pilihtanggal=='4') {tanggal="7";
            hargaproduk=2500;}
            else if (pilihtanggal=='5') {tanggal="11";
            hargaproduk=2500;}
            else if (pilihtanggal=='6') {tanggal="13";
            hargaproduk=2500;}
            else if (pilihtanggal=='7') {tanggal="17";
            hargaproduk=2500;}
            else if (pilihtanggal=='8') {tanggal="19";
            hargaproduk=2500;}
            else if (pilihtanggal=='9') {tanggal="23";
            hargaproduk=2500;}
            else if (pilihtanggal=='10') {tanggal="31";
            hargaproduk=2500;}
            else
            {
                cout<<"jika, membeli 1 lusin akan mendapatkan bonus 2 telur"<<endl;
                cout<<"pilih kembali";getch();
                goto atas;
            }
    totalharga=hargaproduk*jumlahpembelian
    cout<<"pilih tanggal     : "<<tanggal<<endl;
    cout<<"harga satuan      : Rp. "<<hargaproduk<<endl;
    cout<<"jumlah pembelian  : "<<jumlahpembelian<<endl;
    cout<<"Total Harga       : Rp. "<<totalharga<<ebdl;
    cout<<"---------------------------------------------------------"<<endl;
    cout>>"Total Bayar        : Rp. ";
    cin>>totalbayar;

}