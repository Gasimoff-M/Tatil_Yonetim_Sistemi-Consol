#include "PROJE.h"
#include <fstream>
#include <string>

void Mekan::Mekan›slemleri() {

	fstream Mekantxt;
	
	Mekantxt.open("mekan.txt");
	

	do {
		cout << "   *****************************\n";
		cout << "   **     Mekan ›˛lemleri     **\n";
		cout << "   *****************************\n\n";
		cout << "L¸tfen Yapmak ›stediiniz ›˛lemi SeÁiniz\n";
		cout << " 1.Mekan Ekle\n";
		cout << " 2.Mekan Sil\n";
		cout << " 3.Mekan D¸zenle\n";
		cout << " 4.Mekan Listele\n";
		cout << " 5.Anan Men¸ye Dˆn\n";
		cout << "SeÁiminiz Hangisi : ";
		cin >> Mekan›slem;
		cout << endl;

		if (Mekan›slem == 1)
		{
			int Mekan›slem2;
			do {


				cout << "Eklemek ›stediiniz Mekan T¸r¸n¸ SeÁiniz\n\n";
				cout << " 1.Daire\n";
				cout << " 2.Fitness\n";
				cout << " 3.Havuz\n";
				cout << " 4.Ana Men¸ye Dˆn\n";
				cout << "SeÁiminiz Hangisi : ";
				cin >> Mekan›slem2;

				

				if (Mekan›slem2 == 1)
				{
					fstream Mekantxt;
					Mekantxt.open("Mekan.txt" ,ios::out | ios::app);

					
					cout << "Daire Bilgilerini Giriniz \n";
					cout << " Daire Adi : ";
					cin >> DaireAd;

					cout << " Oda Say˝ : ";
					cin >> OdaSayi;

					cout << " Metrekare : ";
					cin >> OdaBoyutu;


					Mekantxt << "Daire bilgileri :\n Daire Ad˝ : " << DaireAd << ",";
					Mekantxt << "  Oda Say˝s˝ : " << OdaSayi << ",";
					Mekantxt << "  Metrekaresi : " << OdaBoyutu << ".\n\n";

					cout << "\nDaire Ba˛ar˝ ile Eklenmi˛tir.\n\n";
				}
				else if (Mekan›slem2 == 2)
				{
					fstream Mekantxt;
					Mekantxt.open("Mekan.txt",ios::out | ios ::app );

					
					cout << "Fitness Salonunun Bilgilerini Giriniz \n\n";

					cout << " Fitness Kapasitesi KaÁ Ki˛ilik : ";
					cin >> FitnessKap;


					Mekantxt << "Fitness Salonu Bilgileri :\n Fitness Salonu Kapasitesi : " << FitnessKap << " Ki˛ilik\n\n";

					cout << "\nFitness Ba˛ar˝ ile Eklenmi˛tir.\n\n";
				}
				else if (Mekan›slem2 == 3)
				{
					fstream Mekantxt;
					Mekantxt.open("Mekan.txt", ios::out | ios::app );

					
					cout << "Havuz Bilgilerini Giriniz \n\n";

					cout << " Havuz Kapasitesi KaÁ Ki˛ilik : ";
					cin >> HavuzKap;

					cout << " Havuz Boyutu KaÁ Metrekare : ";
					cin >> HavuzBoyut;

					Mekantxt << "Havuz Bilgileri :\n Havuz Kapasitesi : " << HavuzKap << " Ki˛ilik , ";
					Mekantxt << " Havuz Boyutu : " << HavuzBoyut << " Metrekarelik .\n\n";
					
					cout << endl << "Havuz Bilgileri Ba˛ar˝ ile Eklenmi˛tir.\n";

				}
				else if (Mekan›slem2 == 4)
				{
					break;

				}
				else
				{
					cout << " GeÁersiz SeÁim ! \n";
				}
			} while (Mekan›slem2 != 4);

		}
		else if (Mekan›slem == 2)
		{
			fstream Mekantxt;
			Mekantxt.open("Mekan.txt", ios::out | ios::trunc);
			
			cout << "Mekanlar Ba˛ar˝ ›le silinmi˛tir .\n";
		}
		else if (Mekan›slem == 3)
		{
			fstream GeciciMekan;
			GeciciMekan.open("Gecici.txt" ,ios::out | ios ::app );

			int MekanDegis;
			cout << "Dei˛tirmek ›stediiniz Mekan˝ SeÁiniz\n";
			cout << " 1.Daire\n";
			cout << " 2.Fitness\n";
			cout << " 3.Havuz\n";
			cout << " 4.An Men¸ye Geri Dˆn\n";
			cout << "SeÁiminiz Hangisi : ";

			cin >> MekanDegis;
			
			
			if (MekanDegis == 1)
			{
					
					Mekantxt >> DaireAd >> OdaSayi >> OdaBoyutu;

					cout << " Daire Ad˝ : ";
					cin >> DaireAd;

					cout << " Oda Say˝s˝ : ";
					cin >> OdaSayi;

					cout << " Oda Metrekaresi : ";
					cin >> OdaBoyutu;

					GeciciMekan << "Daire bilgileri :\n Daire Ad˝ : " << DaireAd << ",";
					GeciciMekan << "  Oda Say˝s˝ : " << OdaSayi << ",";
					GeciciMekan << "  Metrekaresi : " << OdaBoyutu << ".\n\n";
					GeciciMekan << "Fitness Salonu Bilgileri :\nFitness Salonu Kapasitesi : " << FitnessKap << " Ki˛ilik\n\n";


					GeciciMekan << "Havuz Bilgileri :\n Havuz Kapasitesi : " << HavuzKap << " Ki˛ilik , ";
					GeciciMekan << " Havuz Boyutu : " << HavuzBoyut << " Metrekarelik .\n\n";

					cout << "Daire Bilgileri Ba˛ar˝ ›le Dei˛tirildi .\n";
				
				
					Mekantxt.close();
					GeciciMekan.close();

			}
			else if (MekanDegis == 2)
			{
					
					
					Mekantxt >> FitnessKap;

					cout << "Fitness Kapasiesi KaÁ Ki˛ilik : ";
					cin >> FitnessKap;

					GeciciMekan << "Daire bilgileri :\n Daire Ad˝ : " << DaireAd << ",";
					GeciciMekan << "  Oda Say˝s˝ : " << OdaSayi << ",";
					GeciciMekan << "  Metrekaresi : " << OdaBoyutu << ".\n\n";

					GeciciMekan << "Fitness Salonu Bilgileri :\nFitness Salonu Kapasitesi : " << FitnessKap << " Ki˛ilik\n\n";

					GeciciMekan << "Havuz Bilgileri :\n Havuz Kapasitesi : " << HavuzKap << " Ki˛ilik , ";
					GeciciMekan << " Havuz Boyutu : " << HavuzBoyut << " Metrekarelik .\n\n";

						
						cout << "Fitness Bilgileri ba˛ar˝ ›le Dei˛tirildi.\n";
					
				
					Mekantxt.close();
					GeciciMekan.close();
			}
			else if (MekanDegis == 3)
			{
			
				cout << "Havuz Kapasitesi KaÁ Ki˛ilik : ";
				cin >> HavuzKap;

				cout << " Havuz Boyutu KaÁ Metrekare : ";
				cin >> HavuzBoyut;

				GeciciMekan << "Daire bilgileri :\n Daire Ad˝ : " << DaireAd << ",";
				GeciciMekan << "  Oda Say˝s˝ : " << OdaSayi << ",";
				GeciciMekan << "  Metrekaresi : " << OdaBoyutu << ".\n\n";

				GeciciMekan << "Fitness Salonu Bilgileri :\nHavuz Kapasitesi : " << FitnessKap << " Ki˛ilik\n\n";

				GeciciMekan << "Havuz Bilgileri :\n Havuz Kapasitesi : " << HavuzKap << " Ki˛ilik , ";
				GeciciMekan << " Havuz Boyutu : " << HavuzBoyut << " Metrekarelik .\n\n";

				cout << "Havuz Bilgileri Ba˛ar˝ ile Dei˛tirildi.\n";
						
			}
			else if (MekanDegis == 4)
			{
				break;
			}
			else
			{
				cout << "GeÁersiz SeÁim !";
			}
			remove("Mekan.txt");
			rename("Gecici.txt", "Mekan.txt");

		}
		else if (Mekan›slem == 4)
		{
			fstream file;
			file.open("Mekan.txt", ios::in);
			string MekanListele;
			while (getline(file, MekanListele))
			{
				cout << MekanListele << endl;
			}
			file.close();
		}
		else if (Mekan›slem == 5)
		{
			break;
		}
		else
		{
			cout << "GeÁersiz SeÁim !\n";
		}
	}while (Mekan›slem != 5);
}

void Oturan::Oturan›slemleri() {

	fstream Oturantxt;
	Oturantxt.open("oturan.txt");

	

	do
	{
		cout << "   ******************************\n";
		cout << "   **     OTURAN B›LG›LER›     **\n";
		cout << "   ******************************\n\n";
		cout << "L¸tfen Yapmak ›stediiniz ›˛lemi SeÁiniz\n";
		cout << " 1.Oturan Ekle\n";
		cout << " 2.Oturan Sil\n";
		cout << " 3.Oturan D¸zenle\n";
		cout << " 4.Oturan Listele\n";
		cout << " 5.Anan Men¸ye Dˆn\n";
		cout << "SeÁiminiz Hangisi : ";
		cin >> Oturan›slem;

		if (Oturan›slem == 1)
		{
			fstream Oturantxt;
			Oturantxt.open("oturan.txt", ios::out | ios::app);

			cout << "Oturan Bilgilerini Giriniz : \n";
			cout << " Oturan Ad˝ : ";
			cin >> OturanAd;

			cout << " Site Sakini Ve Ya Misafir Olup Olmadiini Belirtin : ";
			cin >> OturanDerecesi;

			cout << " Oturan˝n Daire Adini Giriniz : ";
			cin >> OturanDaireAd;

			Oturantxt << "Oturan Bilgileri : \n";
			Oturantxt << " Oturan Ad˝ : " << OturanAd;
			Oturantxt << "  Oturan Derecesi : " << OturanDerecesi;
			Oturantxt << "  Oturan˝n Daire Ad˝ : " << OturanDaireAd << endl;

			cout << " Oturan Bilgileri Ba˛ar˝ ›le Eklendi .\n";
		}
		else if (Oturan›slem == 2)
		{
			fstream Oturantxt;
			Oturantxt.open("oturan.txt", ios::out | ios::trunc);

			cout << "Oturanlar Ba˛ar˝ ›le Silinmi˛tir.\n";
		}
		else if (Oturan›slem == 3)
		{
			fstream OturanDegis;
			OturanDegis.open("oturanDegis.txt", ios::out | ios::app);

			cout << "Otursn Bilgilerini D¸zenle\n";
			cout << " Oturan Ad˝ : ";
			cin >> OturanAd;

			cout << " Site Sakini Ve Ya Misafir Olup Olmadiini Belirtin : ";
			cin >> OturanDerecesi;

			cout << " Oturan˝n Daire Adini Giriniz : ";
			cin >> OturanDaireAd;

			remove("oturan.txt");
			rename("oturanDegis.txt", "oturan.txt");

			cout << "Oturan Bilgileri Ba˛ar˝ ›le Dei˛tirildi .\n";

		}
		else if (Oturan›slem == 4)
		{
			fstream file1;
			file1.open("oturan.txt", ios::in);
			string OturanListele;
			while (getline(file1, OturanListele))
			{
				cout << OturanListele << endl;
			}
			file1.close();
		}
		else if (Oturan›slem == 5)
		{
			break;
		}
		else
		{
			cout << "GeÁersiz SeÁim !";
		}
	} while (Oturan›slem != 5);
}

void Oturan::Odeme›slemleri() {

	fstream Odeme;
	Odeme.open("odeme.txt", ios::out | ios::app);

	cout << "   *****************************\n";
	cout << "   **     ÷DEME B›LG›LER›     **\n";
	cout << "   *****************************\n\n";
	cout << "L¸tfen Yapmak ›stediiniz ›˛lemi SeÁiniz\n";
	cout << " 1.÷deme Ekle\n";
	cout << " 2.÷deme Sil\n";
	cout << " 3.÷deme D¸zenle\n";
	cout << " 4.÷deme Listele\n";
	cout << " 5.Anan Men¸ye Dˆn\n";
	cout << "SeÁiminiz Hangisi : ";
	cin >> Odeme›slem;

	do {
		if (Odeme›slem == 1)
		{
			cout << "÷deme Bilgilerini Giriniz : \n";
			cout << " ÷deme Yapan˝n Ad˝ : ";
			cin >> OdemeYapan;

			cout << " ÷deyeceiniz Tutar : ";
			cin >> OdemeTutar;

			if (OdemeTutar <= 15000)
			{
				Odeme << "÷deme Bilgiler : \n";
				Odeme << " ÷deme Yapan : " << OdemeYapan;
				Odeme << " ÷denen tutar : " << OdemeTutar << "TL";
				Odeme << "  BOR« VAR !";
			}
			else
			{
				Odeme << "÷deme Bilgiler : \n";
				Odeme << " ÷deme Yapan : " << OdemeYapan;
				Odeme << " ÷denen tutar : " << OdemeTutar << "TL";
				Odeme << "  BOR« YOK !";
			}
			break;
		}
		else if (Odeme›slem == 2)
		{
			fstream Odeme;
			Odeme.open("odeme.txt", ios::out | ios::trunc);

			cout << "÷demeler Ba˛ar˝ ›le Silinmi˛tir.\n";
			Odeme.close();
			
		}
		else if (Odeme›slem == 3)
		{
			fstream OdemeDegis;
			OdemeDegis.open("odemeDegis.txt", ios::out | ios::app);

			cout << "Yeni ÷deme Bilgilerini Girin \n";
			cout << " ÷deme Yapan˝n Ad˝ : ";
			cin >> OdemeYapan;

			cout << " ÷deyeceiniz tutar : ";
			cin >> OdemeTutar;

			remove("odeme.txt");
			rename("odemeDegis.txt", "odeme.txt");

		}
		else if (Odeme›slem == 4)
		{

			fstream file2;
			file2.open("odeme.txt", ios::in);
			string OdemeListele;
			while (getline(file2, OdemeListele))
			{
				cout << OdemeListele << endl;
			}
			file2.close();
		}
		else if (Odeme›slem == 5)
		{
			break;
		}
		else
		{
			cout << "GeÁersiz seÁim !";
		}
	} while (Odeme›slem!=5);

}

void Oturan::HavuzKullanimi() {
	
	fstream HavuzKul;
	HavuzKul.open("havuzkul.txt", ios::out | ios::app);

	cout << "   *****************************\n";
	cout << "   **     HAVUZ KULLANIMI     **\n";
	cout << "   *****************************\n\n";
	cout << " Havuz Kullan˝m˝ ›Áin Oturan Bilgisini Girin : ";
	cin >> OturanHavuzKul;


		if (OdemeTutar <= 15000)
		{
			HavuzKul << "Havuz Kullan˝m Durumu : ";
			HavuzKul << OturanHavuzKul << " Borc Var, Havuz Kullandirilmadi.\n";

			cout << OturanHavuzKul << " Borc Var, Havuz Kullandirilmadi.\n";
		}
		else
		{
			HavuzKul << "Havuz Kullan˝m Durumu : ";
			HavuzKul << OturanHavuzKul << " Borc Yok , Havuz Kullandirildi.\n";

			cout << OturanHavuzKul << " Borc Yok , Havuz Kullandirildi.\n";
		}
	
}

void Oturan::FitnessKullanimi() {

	fstream Fitness;
	Fitness.open("fitness.txt", ios::out | ios::app);

	cout << "   *******************************\n";
	cout << "   **     F›TNESS KULLANIMI     **\n";
	cout << "   *******************************\n\n";
	cout << " Fitness Kullan˝m˝ ›Áin Oturan Bilgisini Girin : ";
	cin >> OturanFitnessKul;
	   
	
		if (OdemeTutar <= 15000)
		{
			Fitness << "Havuz Kullan˝m Durumu : ";
			Fitness << OturanFitnessKul << " Borc Var, Havuz Kullandirilmadi.\n";

			cout << OturanFitnessKul << " Borc Var, Havuz Kullandirilmadi.\n";
		}
		else
		{
			Fitness << "Havuz Kullan˝m Durumu : ";
			Fitness << OturanFitnessKul << " Borc Yok , Havuz Kullandirildi.\n";

			cout << OturanFitnessKul << " Borc Yok , Havuz Kullandirildi.\n";
		}

}
 // SAYGILARLA   **- MAHAMMAD GAS›ML› -***.