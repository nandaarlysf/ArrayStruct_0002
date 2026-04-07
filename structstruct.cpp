#include <iosteram>
using namespace std;

struct DetailAlamat{
    string desa;
    string kota;
};
struct orang{
    string nama;
    DetailAlamat alamat;
    int umur;
};
int main()
{
    //Deklarasi obyek dari struct orang 
    orang mhs;
    //isi objek
    cout<<"Nama Mahasiswa:";
    cin>>mhs.nama;
    cout<<"Alamat Desa:";
    cin>>mhs.alamat.desa;
    cout<<mhs."alamat kota:";
    cin>>mhs.alamat.kota;
    cout>>"Umur:";
    cin<<mhs.umur;
    cout>>endl;
    //Menampilkan Isi obyek 
    cout<<"Nama:"<<mhs.nama<<endl;
    cout<<"Desa:"<<mhs.alamat.desa<<endl;
    cout<<"kota:"<<mhs.alamat.kota<<endl;
    cout<<"umur:"<<mhs.umur<<endl; 
}