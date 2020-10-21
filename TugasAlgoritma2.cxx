//Program Menghitung Biaya Yang Dikeluarkan Pemerintah Dalam Sebulan
#include <iostream>
using namespace std;
main ()
{
	int Umur, Biaya, Biaya1, Biaya2, Biaya3, Biaya4;
	
	cout<< "PROGRAM MENGHITUNG BIAYA YANG DIKELUARKAN PEMERINTAH DALAM SEBULAN\n";
	cout<< "------------------------------------------------------------------\n";
	cout<< "Umur Ayah 	= "; cin>> Umur;
	if(Umur <= 12){
		Biaya1 = 15000 * 30;
	} if(Umur > 12 && Umur<= 20){
		Biaya1 = 20000 * 30;
	} if(Umur > 20){
		Biaya1 = 30000 * 30;
	}
	cout<< "Umur Ibu  	= "; cin>> Umur;
	if(Umur <= 12){
		Biaya2 = 15000 * 30;
	} if(Umur > 12 && Umur<= 20){
		Biaya2 = 20000 * 30;
	} if(Umur > 20){
		Biaya2 = 30000 * 30;
	}
	cout<< "Umur Anak 1	= "; cin>> Umur;
	if(Umur <= 12){
		Biaya3 = 15000 * 30;
	} if(Umur > 12 && Umur<= 20){
		Biaya3 = 20000 * 30;
	} if(Umur > 20){
		Biaya3 = 30000 * 30;
	}
	cout<< "Umur Anak 2	= "; cin>> Umur;
	if(Umur <= 12){
		Biaya4 = 15000 * 30;
	} if(Umur > 12 && Umur<= 20){
		Biaya4 = 20000 * 30;
	} if(Umur > 20){
		Biaya4 = 30000 * 30;
	}
	
	Biaya = Biaya1 + Biaya2 + Biaya3 + Biaya4;
	cout<< "\nHASIL:\n";
	cout<< " Seluruh Biaya Pemerintah Dalam 1 Bulan = " << Biaya << endl; 
	cout<< "--------------------------------------------------------------------";
}
