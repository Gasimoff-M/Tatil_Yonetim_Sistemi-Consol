

             /****************************************************************/
             /**											 				**/
             /**					SAKARYA ÜNÝVERSÝTESÝ					**/
             /**			BÝLGÝSAYAR VE BÝLÝÞÝM BÝLÝMLERÝ FAKÜLTESÝ       **/
             /**				BÝLGÝSAYAR MÜHENDÝSLÝÐÝ BÖLÜMÜ              **/
             /**				    PROGRAMLAMAYA GÝRÝÞ DERSÝ               **/
             /**                                                            **/
             /**   		    ÖDEV NUMARASI : PROJE                           **/
             /**			ÖÐRENCÝ ADI : MAHAMMAD GASÝMLÝ                  **/
             /**			ÖÐRENCÝ NUMARASI : B241210568                   **/
             /**			DERS GRUBU : 1 - CÝ ÖÐRETÝM, A GRUBU            **/
             /**															**/
             /****************************************************************/


#include <iostream>
#include <fstream>
#include <string>
#include "PROJE.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");
    int secim;
    do {
        cout << endl;
        cout << "   *****************************\n";
        cout << "   **  TATÝL SÝTESÝ YÖNETÝMÝ  **\n";
        cout << "   *****************************\n\n";
        cout << "Lütfen Yapmak Ýstediðiniz Ýþlemi Seçiniz\n";
        cout << " 1.Mekan Ýþlemleri\n";
        cout << " 2.Kiþi ve Daire Bilgileri\n";
        cout << " 3.Ödeme Ýþlemleri\n";
        cout << " 4.Havuz Kullanýmý\n";
        cout << " 5.Fitness Kullanýmý\n";
        cout << " 6.Çýkýþ\n";
        cout << "Seçiminiz Hangisi : ";
        cin >> secim;
        cout << endl << "------------------------------------------------\n" << endl;
        Mekan mekanÝslemleri;
        Oturan oturanÝslemleri;
        if (secim == 1)
        {
               mekanÝslemleri.MekanÝslemleri();
        }
        else if (secim == 2)
        {
            oturanÝslemleri.OturanÝslemleri();
        }
        else if (secim == 3)
        {
            oturanÝslemleri.OdemeÝslemleri();
        }
        else if (secim == 4)
        {
            oturanÝslemleri.HavuzKullanimi();
        }
        else if (secim == 5)
        {
            oturanÝslemleri.FitnessKullanimi();
        }
        else if (secim == 6)
        {
            break;
        }
        else
        {
            cout << "Gerçersiz Seçim !\n";
        }


    } while (secim != 6);

    return 0;
}
