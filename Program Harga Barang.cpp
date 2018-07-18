#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string.h>

using namespace std;

class Barang{
	private:
		char kd_barang[10], nm_barang[20];
		int hrg_barang, Qty, hrg_jual;
	public:
		Barang();
		void InputData(char *, char *, int, int);
		void HitungHargaJual();
		void Tampil();
};

Barang::Barang(){
	hrg_barang=Qty=hrg_jual=0;

}

void Barang::InputData(char *k, char *n, int h, int q){
	strcpy(kd_barang, k);
	strcpy(nm_barang, n);
	hrg_barang=h;
	Qty=q;

}

void Barang::HitungHargaJual(){
	hrg_jual = hrg_barang*Qty;

}

void Barang::Tampil(){
	cout << "\nHarga Jual";
	cout << "\n=========================================================================";
	cout << "\n|"<<setw(10)<<"Kode |" << setw(25)<<"NAMA |"<<setw(15)<<"Harga Barang |"<<setw(7)<<"Qty |"<<setw(15)<<"Harga Jual |" << endl;;
	cout << "=========================================================================\n";
	cout << "|" <<setw(8)<<kd_barang<<" |" <<setw(23)<<nm_barang<<" |"<<setw(13)<<hrg_barang<<" |"<<setw(5)<<Qty<<" |"<<setw(13)<<hrg_jual<<" |";
	cout << "\n=========================================================================\n";

}

int main(){
	cout << "==============================\n";
	cout << "==Program Total Harga Barang==\n";
	cout << "==============================\n\n";

	Barang vBarang;

	char x[10], y[20];
	int z, i;

	cout << "Input Kode = ";
	cin >> x;
	cout << "\nInput Nama = ";
	cin >> y;
	cout << "\nInput Harga Barang = ";
	cin >> z;
	cout << "\nInput Quantity = ";
	cin >> i;
	cout << "\n";
	vBarang.InputData(x,y,z,i);
	vBarang.HitungHargaJual();
	vBarang.Tampil();

	system("pause");
}
