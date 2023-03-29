#include <iostream>

using namespace std;
 
string cek_status(int nilai_mat, int nilai_ing) {
    int rerata = (nilai_mat, nilai_ing) / 2;
    if (rerata >= 70 || nilai_mat > 80) {
        return "diterima";
    }
    else {
        return "ditolak";
    }
}

int main() {
    
    string nama[20] = { "asroni", "lia", "joko", "budi", "susi", "eka", "hadi", "yuni", "ririn", "fauzi", "salsa", "azzahra", "ayu", "nadiva", "nadila", "ulfah", "raudha", "putri", "reni", "linda" };
    int nilai_mat[20] = { 85,60,75,70,80,90,95,75,60,65,80,95,80,55,75,70,80,60,75,85 };
    int nilai_ing[20] = { 80,90,85,70,75,60,85,80,65,70,85,90,80,65,65,75,70,77,74,65 };
    string status[20];

    
    for (int i = 0; i < 20; i++) {
        status[i] = cek_status(nilai_mat[i], nilai_ing[i]);
    }

    
    cout << "daftar pendaftar dan status:\n";
    for (int i = 0; i < 20; i++) {
        cout << nama[i] << "=" << status[i] << endl;
    }

    
    int diterima = 0;
    int ditolak = 0;
    for (int i = 0; i < 20; i++) {
        if (status[i] == "diterima") {
            diterima++;
        }
        else {
            ditolak++;
        }
    }

    
    cout << "total kandidat diterima: " << diterima << endl;
    cout << "total kandidat ditolak: " << ditolak << endl;

    return 0;
}