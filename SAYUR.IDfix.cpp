#include <windows.h>     
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

void gotoxy(int x, int y){
 COORD coord;                         
 coord.X = x;                         
 coord.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int main(int argc, char *argv[]){ 
 int pilih;
 char choose, choosed;
 string user, pass;
 int pilihan;
 int kode_pilihan;               
 int nama_belanjaan;
 int saldo=9000000;
 int topup;
 int sayur;
 int laukpauk;
 int bumbu;
 int sembako;
 int kode[20];
 struct{
 char nabar [20][20];
 int hrg[20],jmlh[20]; 
 }online[10];
 long int total_byra=0,total_byrb=0,total_byrc=0,total_byrd=0,total_byre=0;
 long int ttl[20];
 char kd[30];
 int voucher;
 ulang:
 int a,n;
 char mad;
   system("cls"); 
  
  
	cout<<" Masukkan No. HP : ";cin>>user;cout<<"\n";
	cout<<" Masukkan Password  : ";cin>>pass;cout<<"\n";
	if (user == "085333097522" && pass == "12345")
{
	cout<<"Login Berhasil\n";
	}
	else
	{
	cout<<" No. HP dan password anda salah silahkan coba kembali \n";
	cout<<" Coba lagi ?[y/t]  : ";cin>>pilih;cout<<"\n";
	if (pilihan=='y' || pilihan=='Y')
	{system("cls");
}
}
	cout<<"--------------------------------------------------------\n"<<endl;
 int m;
    int i;
    
    for(m=1;m<30;m++)

 mad= 'Y';          
 while (mad == 'y' || mad == 'Y'){ 
 
    cout<<"\t             SAYUR.ID               \n";
	cout<<"\t          SEMUA TERSEDIA            \n";
    cout<<"\t        MURAH DAN TERPERCAYA        \n";
 	gotoxy(40,12);cout<<"\t saldo : Rp."<<saldo;
 	gotoxy(5,12);cout<<"\t Pilihan \n";
 	gotoxy(6,13);cout<<" 1. SAYUR & BUAH \n";
 	gotoxy(6,14);cout<<" 2. LAUK PAUK \n";
 	gotoxy(6,15);cout<<" 3. BUMBU \n"; 
 	gotoxy(6,16);cout<<" 4. SEMBAKO \n"; 
 	gotoxy(6,17);cout<<" 5. Top up saldo \n"; 
 	cout<<"\n\nSilahkan Pilih Menu [1/2/3/4/5] : ";cin>>kode_pilihan; 
 switch (kode_pilihan){   
  case 1:
   system("cls");
   sayur;
    cout<<"====== SAYUR & BUAH ======"<<endl;
    cout<<"1. LOBAK   :5000  Kode 01"<<endl;
    cout<<"2. TOMAT   :5000  Kode 02"<<endl;
    cout<<"3. WORTEL  :5000  kode 03"<<endl;
    cout<<"4. TERONG  :5000  kode 04"<<endl;
    cout<<"5. CABAI   :5000  kode 05"<<endl;
    cout<<"==============================="<<endl;
 
  
   cout<<"Masukkan Berapa jenis yang dibeli :";cin>>n;
   for(a=1;a<=n;a++){
   cout<<"Masukan kode barang        : ";cin>>kode[a];
   cout<<"Nama sayur/buah       : ";cin>>online[a].nabar[a];
{
   	
   if(kode[a]==01)
    online[a].hrg[a]=5000;
   
   else if(kode[a]==02)
    online[a].hrg[a]=5000;
   
   else if(kode[a]==03)
    online[a].hrg[a]=5000;
   
   else if(kode[a]==04)
    online[a].hrg[a]=5000;
   
   else 
    online[a].hrg[a]=0;
  }
   cout<<"Harga      :Rp."<<online[a].hrg[a]<<endl;
  
   cout<<"Jumlah yang di Beli: ";cin>>online[a].jmlh[a];
   }
   
   system("cls");
 cout<<"`      SAYUR.ID    ``\n";
 cout<<"--------------------------------------------------\n";
   gotoxy(5,3);cout<<"Daftar Belanja Anda";
// 567890123456789012345678901234567890123456789012345678901 (cara ini mempermudah menghitung garis tepian pada tabel menggunakan array)
gotoxy(5,5);cout<<"-----------------------------------------------------------------"<<endl;
gotoxy(5,6);cout<<"|No|     Barang     |    Harga   |     Jumlah Beli  |   Total   |"<<endl;
gotoxy(5,7);cout<<"-----------------------------------------------------------------"<<endl;
for(a=1;a<=n;a++)
{
 gotoxy(5,7+a) ;cout<<"|"; 
 gotoxy(6,7+a) ;cout<<a;
 gotoxy(8,7+a) ;cout<<"|";
 gotoxy(11,7+a);cout<<online[a].nabar[a];
 gotoxy(20,7+a);cout<<"|";
 gotoxy(33,7+a);cout<<online[a].hrg[a];
 gotoxy(41,7+a);cout<<"|";
 gotoxy(48,7+a);cout<<online[a].jmlh[a];
 gotoxy(55,7+a);cout<<"|";
 ttl[a]=online[a].jmlh[a]*online[a].hrg[a];
 gotoxy(61,7+a);cout<<ttl[a];
 gotoxy(68,7+a);cout<<"|";
 total_byra=total_byra+ttl[a]; 
}
cout<<endl;
    cout<<"     ================================================================"<<endl;
cout<<endl;
cout<<"Jadi Total Belanja keseluruhan :Rp. "<<total_byra<<endl;
	cout<<" Ingin menggunakan voucher ? ";
    cout<<" Masukkan kode voucher  "<<endl;
cout<<" kode voucher  : ";cin>>pass;cout<<"\t\t\n";
	if (pass == "12345" )
{
	cout<<" kode voucher anda telah berhasil digunakan \n";
}
	else
{
	cout<<" kode voucher yang anda masukkan salah, silahkan coba kembali \n";
	cout<<" Coba lagi ?[y/t]  : ";cin>>pilih;cout<<"\t\t\n";
	if (pilihan=='y' || pilihan=='Y')
	{system("cls");
}
}
	cout<<"-------------------------------------------------------------------------\n"<<endl;
		
    voucher=1000;
    cout<<" voucher :Rp. "<<voucher<<endl;
    total_byra=total_byra-voucher; 
    gotoxy(5,19);
	cout<<"Jadi Total Belanja :Rp. "<<total_byra<<endl;
	saldo-=total_byra;
	cout<<"sisa saldo : "<<saldo;
            
    break;
           
           
 case 2:
   system("cls");
   laukpauk;
 cout<<"------------- LAUK PAUK -----------"<<endl;
    cout<<"1. TEMPE         :5000  Kode 01"<<endl;
    cout<<"2. TAHU          :5000  Kode 02"<<endl;
    cout<<"3. IKAN TERI     :5000  kode 03"<<endl;
    cout<<"4. IKAN BANDENG  :5000  kode 04"<<endl;
    cout<<"5. DAGING AYAM   :5000  kode 05"<<endl;
    cout<<"--------------------------------"<<endl;
 
    cout<<"Masukkan Berapa jenis yang dibeli :";cin>>n;
   for(a=1;a<=n;a++){
   cout<<"jenis ke    - "<<a<<endl;
   cout<<"Kode        : ";cin>>kode[a];
   cout<<"jenis       : ";cin>>online[a].nabar[a];
   {
   if(kode[a]==01)
    online[a].hrg[a]=5000;
   
   else if(kode[a]==02)
    online[a].hrg[a]=5000;
   
   else if(kode[a]==03)
    online[a].hrg[a]=5000;
   
   else if(kode[a]==04)
    online[a].hrg[a]=5000;
   
   else 
    online[a].hrg[a]=0;
  }
   cout<<"Harga      :Rp."<<online[a].hrg[a]<<endl;
  
   cout<<"Jumlah yang di Beli: ";cin>>online[a].jmlh[a];
   }
   
system("cls");
 cout<<"`      SAYUR.ID    ``\n";
 cout<<"===============================================\n";
   gotoxy(5,3);cout<<"Daftar Belanja Anda";
// 567890123456789012345678901234567890123456789012345678901 (cara ini mempermudah menghitung garis tepian pada tabel menggunakan array)
gotoxy(5,5);cout<<"================================================================"<<endl;
gotoxy(5,6);cout<<"|No|     Barang     |    Harga   |     Jumlah Beli  |   Total   |"<<endl;
gotoxy(5,7);cout<<"================================================================"<<endl;
for(a=1;a<=n;a++)
{
 gotoxy(5,7+a) ;cout<<"|"; 
 gotoxy(6,7+a) ;cout<<a;
 gotoxy(8,7+a) ;cout<<"|";
 gotoxy(11,7+a);cout<<online[a].nabar[a];
 gotoxy(20,7+a);cout<<"|";
 gotoxy(33,7+a);cout<<online[a].hrg[a];
 gotoxy(41,7+a);cout<<"|";
 gotoxy(48,7+a);cout<<online[a].jmlh[a];
 gotoxy(55,7+a);cout<<"|";
 ttl[a]=online[a].jmlh[a]*online[a].hrg[a];
 gotoxy(61,7+a);cout<<ttl[a];
 gotoxy(68,7+a);cout<<"|";
 total_byrb=total_byrb+ttl[a]; 
}
cout<<endl;
    cout<<"     ================================================================"<<endl;
cout<<endl;
   
    gotoxy(5,19);cout<<"Jadi Total Belanja keseluruhan :Rp. "<<total_byrb<<endl;
	saldo-=total_byrb;
	cout<<"sisa saldo : "<<saldo;
	    
    break;
    
 case 3:
   system("cls");
   bumbu;
    cout<<"------------ BUMBU -------------"<<endl;
    cout<<"1. MERICA         :5000  Kode 01"<<endl;
    cout<<"2. KUNYIT         :5000  Kode 02"<<endl;
    cout<<"3. TEMULAWAK      :5000  kode 03"<<endl;
    cout<<"4. ASAM JAWA      :5000  kode 04"<<endl;
    cout<<"5. KENCUR         :5000  kode 05"<<endl;
    cout<<"--------------------------------"<<endl;
 
cout<<"Masukkan Berapa jenis yang dibeli :";cin>>n;
   for(a=1;a<=n;a++){
   cout<<"jenis ke    - "<<a<<endl;
   cout<<"Kode        : ";cin>>kode[a];
   cout<<"jenis       : ";cin>>online[a].nabar[a];
  
{
   if(kode[a]==01)
    online[a].hrg[a]=5000;
   
   else if(kode[a]==02)
    online[a].hrg[a]=5000;
   
   else if(kode[a]==03)
    online[a].hrg[a]=5000;
   
   else if(kode[a]==04)
    online[a].hrg[a]=5000;
   
   else 
    online[a].hrg[a]=0;
  }
   cout<<"Harga      :Rp."<<online[a].hrg[a]<<endl;
  
   cout<<"Jumlah yang di Beli: ";cin>>online[a].jmlh[a];
   }
   
system("cls");
 cout<<"`      SAYUR.ID    ``\n";
 cout<<"===============================================\n";
   gotoxy(5,3);cout<<"Daftar Belanja Anda";
// 567890123456789012345678901234567890123456789012345678901 (cara ini mempermudah menghitung garis tepian pada tabel menggunakan array)
gotoxy(5,5);cout<<"================================================================"<<endl;
gotoxy(5,6);cout<<"|No|     Barang     |    Harga   |     Jumlah Beli  |   Total   |"<<endl;
gotoxy(5,7);cout<<"================================================================"<<endl;
for(a=1;a<=n;a++)
{
 gotoxy(5,7+a) ;cout<<"|"; 
 gotoxy(6,7+a) ;cout<<a;
 gotoxy(8,7+a) ;cout<<"|";
 gotoxy(11,7+a);cout<<online[a].nabar[a];
 gotoxy(20,7+a);cout<<"|";
 gotoxy(33,7+a);cout<<online[a].hrg[a];
 gotoxy(41,7+a);cout<<"|";
 gotoxy(48,7+a);cout<<online[a].jmlh[a];
 gotoxy(55,7+a);cout<<"|";
 ttl[a]=online[a].jmlh[a]*online[a].hrg[a];
 gotoxy(61,7+a);cout<<ttl[a];
 gotoxy(68,7+a);cout<<"|";
 total_byrc=total_byrc+ttl[a]; 
}
cout<<endl;
    cout<<"     ================================================================"<<endl;
cout<<endl;
   
    gotoxy(5,19);cout<<"Jadi Total Belanja keseluruhan :Rp. "<<total_byrc<<endl;
    saldo-=total_byrc;
	cout<<"sisa saldo : "<<saldo;
    break;
 case 4:
   system("cls");
   sembako;
  cout<<"====== SEMBAKO ======"<<endl;
    cout<<"1. MINYAK          :5000  Kode 01"<<endl;
    cout<<"2. GULA            :5000  Kode 02"<<endl;
    cout<<"3. TEPUNG TERIGU   :5000  kode 03"<<endl;
    cout<<"4. KETAN HITAM     :5000  kode 04"<<endl;
    cout<<"5. TAPE            :5000  kode 05"<<endl;
    cout<<"==============================="<<endl;
  
cout<<"Masukkan Berapa jenis yang dibeli :";cin>>n;
   for(a=1;a<=n;a++){
   cout<<"jenis ke    - "<<a<<endl;
   cout<<"Kode        : ";cin>>kode[a];
   cout<<"jenis       : ";cin>>online[a].nabar[a];
   {
   if(kode[a]==01)
    online[a].hrg[a]=5000;
   
   else if(kode[a]==02)
    online[a].hrg[a]=5000;
   
   else if(kode[a]==03)
    online[a].hrg[a]=5000;
   
   else if(kode[a]==04)
    online[a].hrg[a]=5000;
   
   else 
    online[a].hrg[a]=0;
}
   cout<<"Harga      :Rp."<<online[a].hrg[a]<<endl;
  
   cout<<"Jumlah yang di Beli: ";cin>>online[a].jmlh[a];
}
   
   system("cls");
 cout<<"`      SAYUR.ID    ``\n";
 cout<<"===============================================\n";
   gotoxy(5,3);cout<<"Daftar Belanja Anda";
// 567890123456789012345678901234567890123456789012345678901 (cara ini mempermudah menghitung garis tepian pada tabel menggunakan array)
gotoxy(5,5);cout<<"================================================================"<<endl;
gotoxy(5,6);cout<<"|No|     Barang     |    Harga   |     Jumlah Beli  |   Total   |"<<endl;
gotoxy(5,7);cout<<"================================================================"<<endl;
for(a=1;a<=n;a++)
{
 gotoxy(5,7+a) ;cout<<"|"; // dihitung dari garis terakhir ditabel
 gotoxy(6,7+a) ;cout<<a;
 gotoxy(8,7+a) ;cout<<"|";
 gotoxy(11,7+a);cout<<online[a].nabar[a];
 gotoxy(20,7+a);cout<<"|";
 gotoxy(33,7+a);cout<<online[a].hrg[a];
 gotoxy(41,7+a);cout<<"|";
 gotoxy(48,7+a);cout<<online[a].jmlh[a];
 gotoxy(55,7+a);cout<<"|";
 ttl[a]=online[a].jmlh[a]*online[a].hrg[a];
 gotoxy(61,7+a);cout<<ttl[a];
 gotoxy(68,7+a);cout<<"|";
 total_byrd=total_byrd+ttl[a]; 
}
cout<<endl;
    cout<<"     ================================================================"<<endl;
cout<<endl;
   
    gotoxy(5,19);cout<<"Jadi Total Belanja keseluruhan :Rp. "<<total_byrd<<endl;
    saldo-=total_byrd;
	cout<<"sisa saldo : "<<saldo;
            
    break;

case 5: 
	system("cls");
	cout <<"\nTop Up Saldo SAYUR.ID ...";
	cout <<"\n----------------------";
	cout <<"\n\nMasukkan Nominal : Rp. ";cin>>topup;
	saldo += topup;
	cout <<"\n----------------------";
	cout <<"\nSaldo Anda Saat Ini = Rp. "<<saldo;
	cout <<"\nTerima Kasih Telah Melakukan Top Up pesansayur,id.";
	cout <<"\n\n kembali ke menu awal (Y): ";cin>>mad;
	if(mad=='Y'||mad=='y'){
}
	goto ulang;
	break;           
}
			
	cout<<"\n=================================\n";
	cout<<"\nLanjutkan belanja anda?(Y/T)\t";
	cin>>mad;
	
	cout<<"\n SAYUR.ID \n";
	cout<<"\n Terimakasih telah memesan \n";
	if(mad=='Y'||mad=='y'){
		
	goto ulang;
	}else if(mad=='T'||mad=='t'){
	
}
	 
    for (i=5;i<31;i++)

 getch();
}
}

