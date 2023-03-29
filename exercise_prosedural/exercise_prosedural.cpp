#include <iostream>

using namespace std;

double rerata(double a, double b) {
	return (a + b) / 2;
}

string status(double a, double b) {
	if (a >= 70 || b >= 80)
		return "lulus";
	else
		return "gagal";
}

double reratanil[20];
string nama_kandidat[20];
int nilM[20], nilBi[20];

int main() {
	double nilM, nilBi;
	for (int i = 0; i < 20; i++) {
		cout << "masukan nilai matematika = ";
		cin >> nilM;
		cout << "masukan nilai bahasa inggris = ";
		cin >> nilBi;
		cout << "status kelulusan : " << status(rerata(nilM, nilBi));
	}

}