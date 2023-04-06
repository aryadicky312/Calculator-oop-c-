#include <iostream>
using namespace std;

class calculator	//The class

{
public :	//Access specifier(penentu akses)
      double tambah,kurang,kali,bagi,nr1,nr2;	//atribut
      void penjumlahan () //method in class
      {
            cout<<"------------PENJUMLAHAN------------ "<<endl;
            cout<<"Silahkan masukkan 2 angka = "<<endl;
            cout<<"Angka pertama\t: ";cin>>nr1;
            cout<<"Angka kedua\t: ";cin>>nr2;
            tambah = nr1 + nr2;
            cout<<"Hasilnya adalah : "<<tambah;
            cout<<endl;
      }

      void pengurangan ()
      {
            cout<<"------------PENGURANGAN------------ "<<endl;
            cout<<"Silahkan masukkan 2 angka = "<<endl;
            cout<<"Angka pertama\t: ";cin>>nr1;
            cout<<"Angka kedua\t: ";cin>>nr2;
            kurang = nr1 - nr2;
            cout<<"Hasilnya adalah : "<<kurang;
            cout<<endl;
      }

      void perkalian ();
          
      void pembagian ();

};
	  void calculator::perkalian() //method out class
	 {
            cout<<"------------PERKALIAN------------ "<<endl;
            cout<<"Silahkan masukkan 2 angka = "<<endl;
            cout<<"Angka pertama\t: ";cin>>nr1;
            cout<<"Angka kedua\t: ";cin>>nr2;
            kali = nr1 * nr2;
            cout<<"Hasilnya adalah : "<<kali;
            cout<<endl;
      }
	  void calculator::pembagian()
	  {
            cout<<"------------PEMBAGIAN------------ "<<endl;
            cout<<"Silahkan masukkan 2 angka : "<<endl;
            cout<<"Angka pertama\t: ";cin>>nr1;
            cout<<"Angka kedua\t: ";cin>>nr2;
            bagi = nr1 / nr2;
            cout<<"Hasilnya adalah : "<<bagi;
            cout<<endl;
      }
int main()
{
      int pilihan;
      calculator x;//objek
      cout<<"===============KALKULATOR SEDRHANA==============="<<endl;
      cout<<" Menu Pilihan : "<<endl;
      cout<<" 1. Penjumlahan "<<endl;
      cout<<" 2. Pengurangan "<<endl;
      cout<<" 3. Perkalian "<<endl;
      cout<<" 4. Pembagian "<<endl;
      cout<<" 5. Selesai(exit program) "<<endl;
      cout<<endl;
    
	do{
	cout<<"================================================="<<endl;
	cout<<"Masukkan pilihan : ";
	cin>>pilihan;      
    switch (pilihan)
    {
    case 1 : x.penjumlahan ();	//call the method
        break;
    case 2 : x.pengurangan ();
        break;
    case 3 : x.perkalian ();
        break;
    case 4 : x.pembagian ();
        break;
    case 5 :
			cout<<"====================SELESAI======================"<<endl;
			pilihan = 5;
			break;
    default: cout <<"================================================="<<endl;
			 cout <<"Maaf pilihan yang anda inputkan salah"<<endl;
			 cout <<"Silahkan inputkan pilihan kembali"<<endl;
    }
}while(pilihan != 5);

      return 0;
}
