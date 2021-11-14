// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string nama, jabatan, status_pernikahan;
	int nomor_pegawai, jumlah_jam_lembur, jumlah_anak, gaji_pokok, tunjangan, uang_lembur, total;

	cout << "Masukkan Nomor Pegawai : ";
	cin >> nomor_pegawai;
	cout << "Masukkan Nama : ";
	cin >> nama;
	cout << "Masukkan Jabatan : (Pilihan : Operator, Manjaer) : ";
	cin >> jabatan;
	cout << "Jumlah Jam Lembur : ";
	cin >> jumlah_jam_lembur;
	cout << "Status Pernikahan : (Pilihan : Belum,Menikah(Punya Anak),Menikah(Belum Punya Anak) : ";
	cin >> status_pernikahan;
	cout << "Jumlah Anak : ";
	cin >> jumlah_anak;

	if (jabatan == "Operator")
	{
		gaji_pokok = 2000000;
	}
	else if (jabatan == "Manajer") {
		gaji_pokok = 3500000;
	}

	if (status_pernikahan == "Belum")
	{
		tunjangan = gaji_pokok * 5 / 100;
	}
	else if (status_pernikahan == "Menikah(Belum Punya Anak)")
	{
		tunjangan = gaji_pokok * 10 / 100;
	}
	else if (status_pernikahan == "Menikah(Punya Anak)")
	{
		tunjangan = gaji_pokok * 15 / 100;
	}

	if (jumlah_jam_lembur >= 20)
	{
		uang_lembur = 0;
	}
	else {
		uang_lembur = gaji_pokok * 2.5 / 100;
	}

	total = gaji_pokok + uang_lembur + tunjangan;

	cout << "Nama : " << nama << endl;
	cout << "Jabatan : " << jabatan << endl;
	cout << "Status Pernikahan : " << status_pernikahan << endl;
	cout << "Gaji Pokok : " << gaji_pokok << endl;
	cout << "Tunjangan : " << tunjangan << endl;
	cout << "Jumlah Jam Lembur : " << jumlah_jam_lembur << endl;
	cout << "Uang Lembur : " << uang_lembur << endl;
	cout << "Total Gaji : " << total << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
