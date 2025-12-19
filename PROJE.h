#pragma once
#include <iostream>

using namespace std;

class Mekan
{
	private:
		int HavuzBoyut = -1;
		int HavuzKap = -1;

		int FitnessKap = -1;

		string DaireAd;
		int OdaSayi =-1;
		int OdaBoyutu= -1;
		int Mekanİslem= -1;
		
	
		
	public:
		void Mekanİslemleri();
};


class Oturan
{
	private:
		int Oturanİslem = -1;
		string OturanAd;
		string OturanDerecesi; //Aile Reisi Yoksa Misafir sorgulama
		string OturanDaireAd;  //Oturanın Dairesinin Adı

		int Odemeİslem = -1;
		string OdemeYapan; //Ödeme yapan kişi
		int OdemeTutar = -1; //Yapılan Ödeme tutarı

		string OturanHavuzKul; // Havuz Kullanımı İçin Oturanın Adı

		string OturanFitnessKul; //Fitness Kullanımı için Oturanın Adı


	public:
		void Oturanİslemleri();
		void Odemeİslemleri();
		void HavuzKullanimi();
		void FitnessKullanimi();
};