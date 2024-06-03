#include <iostream>
using namespace std;

int main()
{
    try {
        cout << "Selamat Belajar di Prodi TI UMY" << endl;
        cout << "Pernyataan tidak ada dieksekusi" << endl;
    }
    catch (int a) {
        cout << "Pengecualian akan dieksekusi" << endl;
    }
}