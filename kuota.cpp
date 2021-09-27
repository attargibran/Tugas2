//Mohammad Attar Gibran
//123210088
#include<iostream>
using namespace std;
int main(){
    int jenjang, pengajar, siswa, biayap=0, biayas=0, biaya;
    cout << "Jenis Instansi :" << endl
         << "1. PAUD" << "\n2. SD" << "\n3. SMP" << "\n4. SMA" << "\n5. Perguruan Tinggi"
         << "\n\nMasukkan jenis instansi anda (isi dengan nomor): ";
    cin >> jenjang;
    
    cout << "Silahkan masukkan jumlah pengajar di instansi anda : ";
    cin >> pengajar;

    cout << "Silahkan masukkan jumlah pelajar di instansi anda : ";
    cin >> siswa;

    switch(jenjang){
        case 1 : 
                biayap = 6000*pengajar*42;
                biayas = 6000*siswa*20;
                break;
        case 2 :
                biayap = 6000*pengajar*42;
                biayas = 6000*siswa*35;
                break;
        case 3 :
                biayap = 6000*pengajar*42;
                biayas = 6000*siswa*35;
                break;
        case 4 :
                biayap = 6000*pengajar*42;
                biayas = 6000*siswa*35;
                break;
        case 5 :
                biayap = 6000*pengajar*50;
                biayas = 6000*siswa*50;
                break;
        default :
                cout << "\nMaaf, data yang anda masukkan tidak valid\n";
    } 
    biaya = biayap + biayas;
    cout << "\nBiaya yang perlu dikeluarkan adalah :" << "\nUntuk Pengajar\t : " << biayap
         << "\nUntuk Pelajar\t : " << biayas << "\nTotal biaya\t : " << biaya;
}