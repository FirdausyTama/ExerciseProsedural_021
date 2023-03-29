#include <iostream>
using namespace std;

int main() {
	int nilai_matematika[20];
	int nilai_bahasa_inggris[20];
	string nama_kandidat[20];
	for (int i = 0; i < 20; i++) {
		cout << "======================" << endl;
		cout << "Masukan nama kandidat: ";
		cin >> nama_kandidat[i];
		cout << "Masukan nilai matematika: ";
		cin >> nilai_matematika[i];
		cout << "Masukan nilai bahasa inggris: ";
		cin >> nilai_bahasa_inggris[i];
	}
}