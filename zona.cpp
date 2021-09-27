//Mohammad Attar Gibran
//123210088
#include<iostream>
using namespace std;
int main(){

    int odp, positif1, positif2, kasusmt;
    string daerah, zona = "";

    cout << "Program Menentukan Zona Covid" << endl;
    cout << "Masukkan nama daerah\t : ";
    getline(cin, daerah);
    
    cout << endl << "Data COVID-19 di " << daerah << " sebulan terakhir" << endl;
    cout << "Jumlah kasus positif survei 1\t : "; cin >> positif1;
    cout << "Jumlah kasus positif survei 2\t : "; cin >> positif2;
    cout << "Jumlah ODP\t\t\t : "; cin >> odp;
    cout << "Jumlah kasus kematian\t\t : "; cin >> kasusmt;

    if( positif1 < positif2 && odp > 0 && kasusmt > 0){
        cout << daerah << " adalah zona hitam";
    } else if( positif1 < positif2 && odp > 0 && kasusmt == 0){
        cout << daerah << " adalah zona merah";
    } else if(positif1 == 0 && positif2 == 0 && kasusmt == 0 && odp>0){
        cout << daerah << " adalah zona oranye";
    } else if(positif1 == 0 && positif2 == 0 && kasusmt == 0 && odp==0){
        cout << daerah << " adalah zona hijau";
    } else {
        cout << "Zona tak terdefinisi";
    }

    return 0;

}