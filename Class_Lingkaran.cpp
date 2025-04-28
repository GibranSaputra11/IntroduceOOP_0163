#include <iostream>
using namespace std;

class Lingkaran{
    public:
        float jejari;
        void inputData(){
        cout << "Masukan jejari : ";
        cin >> jejari;
        }
        float luaslingkaran(float a){
            return 3.14 * a * a;
        }
        void menampilkanLuas(){
            cout << "Jejari = " << jejari << endl;
            cout << "Luas Lingkaran = " << luaslingkaran(jejari);
        }
};

int main(){
    Lingkaran lkrn;
    lkrn.inputData();
    lkrn.menampilkanLuas();
}