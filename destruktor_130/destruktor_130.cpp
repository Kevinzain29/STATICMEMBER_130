

#include <iostream>
using namespace std;

class angka{
private:
	int* arr;
	int panjang;
public:
	angka(int); //constructor
	~angka();  //destructor
	void cetakData();
	void isiData();
};
//Definisi member function
angka::angka(int i) { //construktor
	panjang = i;
	arr = new int[i];
	isiData();

}

angka::~angka() { //destruktor
	cout << endl;
	cetakData();
	delete[]arr;
	cout << "Alamat Array Sudah Dilepaskan" << endl;
}

void angka::cetakData() {
	for (int i = 1;i <= panjang;i++) {
		cout << i << " = " << arr[i] << endl;
	}
}

void angka::isiData() {
	for (int i = 1;i <= panjang;i++) {
		cout << i << " = ";cin >> arr[i];
	}
	cout << endl;
}

int main() {
	angka belajarcpp(3); //construktor dipanggil
	angka* ptrBelajarcpp = new angka(5); //construktor dipangggil
	delete ptrBelajarcpp; //destruktor dipanggil

	return 0;
}//destruktor dipanggil




