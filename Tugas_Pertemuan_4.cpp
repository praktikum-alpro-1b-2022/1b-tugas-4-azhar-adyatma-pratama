#include <iostream>
using namespace std;

int main (){
    cout << "(1) Membedakan bilangan genap dan bilangan ganjil\n";
    int bil;

    cout << "Masukkan bilangan: ";
    cin >> bil;

    if (bil%2==0){
        cout << bil << " adalah bilangan genap. \n";
    }else{
        cout << bil << " adalah bilangan ganjil. \n";
    }
    cout << "============================================================== \n";


    cout << "(2) Program login sederhana menggunakan Nested If \n";
    string username;
    string password;

    cout << "Masukkan username: ";
    cin >> username;

    cout << "Masukkan password: ";
    cin >> password;

    if (username == "iniusername" && password =="inipassword123"){
        cout << "Username dan password sesuai, login berhasil \n";
    }else if (password == "inipassword123"){
        cout << "Username tidak sesuai, password sesuai \n";
    }else if (username == "iniusername"){
        cout << "Username sesuai, password tidak sesuai \n";
    }else{
        cout << "Username dan password tidak sesuai \n";
    }
    cout << "============================================================== \n";


    cout << "(3) Menentukan tahun kabisat\n";
    int tahun;

    cout << "Masukkan tahun: ";
    cin >> tahun;

    if (tahun % 400 == 0){
        cout << tahun << " adalah tahun kabisat \n";
    }else if (tahun % 100 == 0){
        cout << tahun << " bukan tahun kabisat \n";
    }else if (tahun % 4 == 0){
        cout << tahun << " adalah tahun kabisat \n";
    }else {
        cout << tahun << " bukan tahun kabisat \n";
    }
    cout << "============================================================== \n";


    cout << "(4) Program memilih menu makanan menggunakan Switch Case \n";
    cout << "-------------------------------------------- \n";
    cout << "          Menu restaurant Mc Yahud \n";
    cout << " 1. Nasi Goreng Informatika     Rp. 5.000,- \n";
    cout << " 2. Nasi Soto Ayam Internet     Rp. 7.000,- \n";
    cout << " 3. Gado-Gado Disket            Rp. 4.500,- \n";
    cout << " 4. Bubur Ayam LAN              Rp. 4.000,- \n";
    cout << "-------------------------------------------- \n";

    int menu;
    cout << "Masukkan kode menu pilihan anda (1,2,3,4): ";
    cin >> menu;

    switch (menu){
    case 1:
        cout << "Anda memilih menu Nasi Goreng Informatika, harga Rp. 5.000,- \n";
        break;
    case 2:
        cout << "Anda memilih menu Nasi Soto Ayam Internet, harga Rp. 7.000,- \n";
        break;
    case 3:
        cout << "Anda memilih menu Gado-Gado Disket, harga Rp. 4.500,- \n";
        break;
    case 4:
        cout << "Anda memilih menu Bubur Ayam LAN, harga Rp. 4.000,- \n";
        break;
    default:
        cout << "Kode menu yang anda masukkan tidak tersedia \n";
        break;
    }
    cout << "============================================================== \n";


    cout << "(5) Membuat sistem penjualan susu \n";
    cout << "\t Tabel Daftar Harga Produk Susu\n";
    cout << "-----------------------------------------------\n";
    cout << "| Kode Susu | NamaProduk |  Ukuran  |  Harga  |\n";
    cout << "-----------------------------------------------\n";
    cout << "|     1     |   Dancow   |B = Besar |Rp.10.000|\n";
    cout << "|           |            |S = Sedang|Rp.4.250 |\n";
    cout << "|           |            |K = Kecil |Rp.2.100 |\n";
    cout << "-----------------------------------------------\n";
    cout << "|     2     |  Indomilk  |B = Besar |Rp.8.500 |\n";
    cout << "|           |            |S = Sedang|Rp.4.000 |\n";
    cout << "|           |            |K = Kecil |Rp.2.025 |\n";
    cout << "-----------------------------------------------\n";
    cout << "|     3     |  Sustacal  |B = Besar |Rp.17.000|\n";
    cout << "|           |            |S = Sedang|Rp.14.500|\n";
    cout << "|           |            |K = Kecil |Rp.8.300 |\n";
    cout << "-----------------------------------------------\n";

    double kode, jumlah , B1 , B2 , B3 , S1 , S2 , S3 , K1 , K2 , K3;
    B1 = 10000, B2 = 8500, B3 = 17000, S1 = 4250, S2 = 4000, S3 = 14500, K1 = 2100, K2 = 2025, K3 = 8300;
    char ukuran;

    cout << "Masukan kode susu (1-3)        : ";
    cin >> kode;
    cout << "Masukan Jumlah Pembelian       : ";
    cin >> jumlah;
    cout << "Masukan Ukuran (B,S,K)         : ";
    cin >> ukuran;
    cout << "\n";

    if (kode==1)
        cout << "Susu yang anda pilih           : Dancow\n";
    else if (kode==2)
        cout << "Susu yang anda pilih           : Indomilk\n";
    else if (kode==3)
        cout << "Susu yang anda pilih           : Sustacal\n";
    else
        cout << "Kode yang anda masukan salah";

        cout << "Jumlah yang anda beli          : "<< jumlah << "\n";

    if (ukuran=='B')
        cout << "Ukuran susu yang anda pilih    : Besar";
    else if (ukuran=='S')
        cout << "Ukuran susu yang anda pilih    : Sedang";
    else if (ukuran=='K')
        cout << "Ukuran susu yang anda pilih    : Kecil";
    else
        cout << "Ukuran yang anda pilih tidak tersedia";

    cout << "\n";

    //Untuk Kode susu 1
    if (kode==1 && ukuran =='B')
        cout << "Total Harga                    : Rp." << jumlah * B1 << "\n";
    else if (kode==1 && ukuran =='S')
        cout << "Total Harga                    : Rp." << jumlah * S1 << "\n";
    else if (kode==1 && ukuran =='K')
        cout << "Total Harga                    : Rp." << jumlah * K1 << "\n";

    //Untuk Kode susu 2
    else if (kode==2 && ukuran =='B')
        cout << "Total Harga                    : Rp." << jumlah * B2 << "\n";
    else if (kode==2 && ukuran =='S')
        cout << "Total Harga                    : Rp." << jumlah * S2 << "\n";
    else if (kode==2 && ukuran =='K')
        cout << "Total Harga                    : Rp." << jumlah * K2 << "\n";

    //Untuk Kode susu 3
    else if (kode==3 && ukuran =='B')
        cout << "Total Harga                    : Rp." << jumlah * B3 << "\n";
    else if (kode==3 && ukuran =='S')
        cout << "Total Harga                    : Rp." << jumlah * S3 << "\n";
    else if (kode==3 && ukuran =='K')
        cout << "Total Harga                    : Rp." << jumlah * K3 << "\n";
    else
        cout << "Kode yang anda masukan salah";



}
