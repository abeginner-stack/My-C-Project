#include <iostream>
using namespace std;
int main() {
 
  int berat;
  int planet;
  cout << "Masukkan berat anda di bumi: ";
  cin >> berat; 
  cout << "Berikut daftar planet yang bisa anda pilih:\n 1. Mercury\n 2.Venus\n 3.Mars\n 4.Jupiter\n 5.Saturn\n 6.Uranus\n 7.Neptune\n";
  cout << "Pilih planet yang ingin anda lawan (Nomor): ";
  cin >> planet;
  
  if (planet == 1) {
    berat = berat * 0.38;
  } else if (planet == 2) {
    berat = berat * 0.91;
  } else if (planet == 3) {
    berat = berat * 0.38;
  } else if (planet == 4) {
    berat = berat * 2.34;
  } else if (planet == 5) {
    berat = berat * 1.06;
  } else if (planet == 6) {
    berat = berat * 0.92;
  } else if (planet == 7) {
    berat = berat * 1.19;
  } else {
    cout << "Planet tidak ditemukan";
  }
cout << "Berat anda di planet tersebut adalah: " << berat << " kg" << endl;
  return 0;
}
