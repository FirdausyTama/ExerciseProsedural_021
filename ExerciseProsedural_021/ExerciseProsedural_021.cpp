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

	int jumlah_diterima = 0;
	int jumlah_tidak_diterima = 0;
	for (int i = 0; i < 20; i++) {
		float rata_rata = (nilai_matematika[i] + nilai_bahasa_inggris[i]) / 2.0;
		if (rata_rata >= 70 || nilai_matematika[i] > 80) {
			cout << nama_kandidat[i] << "\nDiterima" << endl;
			jumlah_diterima++;
		}
		else {
			cout << nama_kandidat[i] << "\nTidak diterima" << endl;
			jumlah_tidak_diterima++;
		}
	}

	cout << "jumlah kandidat yang di terima: " << jumlah_diterima << endl;
	cout << "jumlah kandidat yang tidak di terima: " << jumlah_tidak_diterima << endl;

	return 0;
}