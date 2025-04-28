#include <iostream>
using namespace std;

class Hewan
{ // memiliki 3 member
private:
    char jenis_kelamin; // memggunkan char karena hanya menggunakn 1 kareakter anatar P atau L
public:
    string tipe;
    string umur; // memnggunakn string karena tidak akan dikoputasi
    void inputData(){ // membuat member berupa prilaku atau preosedur matau method
        cout << "Masukan Jenis Kelamin : ";
        cin >> jenis_kelamin;
        cout << "Masukan Tipe Hewan (Darat, Udara, Air) : ";
        cin >> tipe;
        cout << "Masukan Umur Hewan : ";
        cin >> umur;
    }
    void tampil_jenis_kelamin(){ // memanggil member yang di private agar bisa di akses di public
        cout << "Jenis Kelamin Hewan : " << jenis_kelamin;
    }

}; // harus menggunakn titik koma ketika menggunkana clas

int main()
{
    

}