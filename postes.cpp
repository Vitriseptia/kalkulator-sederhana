#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int tambah(int x,int y)
{
	int hasil;
	return hasil=x+y;
}
int kurang(int x,int y)
{
	int hasil;
	return hasil=x-y;
}
int kali(int x,int y)
{
	int hasil;
	return hasil=x*y;
}
int bagi(int x,int y)
{
	int hasil;
	return hasil=x/y;
}

void cetakgaris(int n)
{
	int i;
	cout<<"\n\n";
	for(i=0; i<=n; i++)
	cout<<"-";cout<<"\n";
}
int main()
{
	int menu;
	cout<<"---------------------------------"<<endl;
	cout<<"| PROGRAM KALKULATOR 		|"<<endl;
	cout<<"| Menu Operasi :		|"<<endl;
	cout<<"|	1. Penambahan		|"<<endl;
	cout<<"|	2. Pengurangan		|"<<endl;
	cout<<"|	3. Perkalian		|"<<endl;
	cout<<"|	4. Pembagian		|"<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"Pilih Menu No: ";
	cin>>menu;
	switch(menu)
	{
		case 1:
		{
			int c=0 , d=0;
			cout<<" Bilang Pertama: "; cin>>c;
			cout<<" Bilangan Kedua: "; cin>>d;
			cout<<" Hasil "<<c<<" + "<<d<<" = "<<tambah(c,d);
			cetakgaris(30);
			break;
		}
		case 2:
		{
			int c=0 , d=0;
			cout<<" Bilang Pertama: "; cin>>c;
			cout<<" Bilangan Kedua: "; cin>>d;
			cout<<" Hasil "<<c<<" - "<<d<<" = "<<kurang(c,d);
			cetakgaris(30);
			break;
		}
		case 3:
		{
			int c=0 , d=0;
			cout<<" Bilang Pertama: "; cin>>c;
			cout<<" Bilangan Kedua: "; cin>>d;
			cout<<" Hasil "<<c<<" x "<<d<<" = "<<kali(c,d);
			cetakgaris(30);
			break;
		}
		case 4:
		{
			int c=0 , d=0;
			cout<<" Bilang Pertama: "; cin>>c;
			cout<<" Bilangan Kedua: "; cin>>d;
			cout<<" Hasil "<<c<<" : "<<d<<" = "<<bagi(c,d);
			cetakgaris(30);
			break;
		}
		default:
 		cout<<" Kode yang anda masukkan tidak ada";
 	}
}
