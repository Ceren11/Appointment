// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

class Standard {
protected:
	int   odaUcret, tvUcret, klimaUcreti, gunSayisi, Net, odaServis;
	float totalUcret;
public:
	Standard() :odaUcret(0), tvUcret(0), klimaUcreti(0), gunSayisi(0), Net(0), odaServis(0)
			{}
		void ucretHesapla(int oda, int tv, int kl, int gun)
		{
			totalUcret = (oda + tv + kl )*gun;
		}
		void goster()
		{
			cout << "Standard Oda Icin Odenmesi Gereken Total Fiyat: " << ' ' << totalUcret << endl;
		}
	
};

class Luks :public Standard

{
private:
	float totalUcret1;
public:
	void ucretHesapla1(int od1,int tv1,int kl1,int ods,int gun1)

	{
		totalUcret1 = (od1 + tv1 + kl1 + ods)*gun1;
	}

	void goster()
	{
		cout << "Luks Oda Icin Odenmesi Gereken Total Fiyat :" << ' '  <<totalUcret1<<endl;
	}
};

int main()
{
	Standard oda1;
	Luks oda2;

	int   odaUcret, tvUcret, klimaUcreti, gunSayisi, Net, odaServis;


	cout << "-------------OTEL RESEPSIYON PROGRAMI------------------" << endl  ;
	cout << "\tSTANDARD ODALAR ICIN" << endl;
	cout << ' ' << "Oda Ucretini Giriniz:" << ' ' << endl;
	cin >> odaUcret;
	cout << ' ' << "Tv Ucretini Giriniz:" << ' ' << endl;
	cin >> tvUcret;
	cout << ' ' << "Klima Ucretini Giriniz:" << ' ' << endl;
	cin >> klimaUcreti;
	cout << ' ' << "Konaklanacak Gun Sayisini Giriniz:" << ' ' << endl;
	cin >> gunSayisi;
	cout << "*******************************" << endl;
	cout << ' ' << "Luks Odalar Icin Oda Servisini Giriniz" << ' ' << endl;
	cin >> odaServis;

	oda1.ucretHesapla(odaUcret, tvUcret, klimaUcreti, gunSayisi);
	oda1.goster();

	oda2.ucretHesapla1(odaUcret, tvUcret, klimaUcreti, odaServis, gunSayisi);
	oda2.goster();


	system("pause");
	return 0;
}
