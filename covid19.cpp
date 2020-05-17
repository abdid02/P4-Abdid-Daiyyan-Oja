#include<iostream>
#include<iomanip>
#include<string>
#include<conio.h>

using namespace std;

int main()
{
	int i, nilai, benar=0, salah=0;
	string user, pass;
	char pilihanlogin, pilihan, jawab, pilih;
	ulang : 
	cout<<"          SELAMAT DATANG\n";
	cout<<"    SILAHKAN MENJAWAB SOAL DIBAWAH INI\n";
	cout<<"  AGAR DAPAT MEMENANGKAN HADIAH MENARIK!\n";
	cout<<"--------------------------------------------\n";
	cout<<"Silahkan Login sebelum menjawab soal\n";
	cout<<"\t\t\t\t\t\t\t\t\t\n";
	cout<<"Masukkan Username : ";cin>>user;cout<<"\n";
	cout<<"Masukkan Password : ";cin>>pass;cout<<"\t\t\n";
			if (user == "yayan" && pass == "12345")
			{
				cout<<"Login Berhasil\n";
			}
			else
			{
				cout<<" Username dan password anda salah silahkan coba kembali \n";
				cout<<" Coba lagi ?[y/t]  : ";cin>>pilihanlogin;cout<<"\t\t\n";
					if (pilihanlogin=='y' || pilihanlogin=='Y')
					{system("cls");
					goto ulang;}
					else{goto selesai;}
					if (pilihanlogin=='t' || pilihanlogin=='T')
					{goto selesai;}		
			}
			
			
	cout<<"-------------------------------------------------------------------------\n";
	system("cls");
	{
    ulangjwb :
	cout<<"PILIHLAH SALAH SATU JAWABAN YANG MENURUT ANDA BENAR!\n";
	cout<<"JIKA BANYAK JAWABAN YANG BENAR MAKA HADIAH BISA DI TERIMA\n";
	cout<<"-------------------------------------------------------------------------\n";
	cout<<"1. Apa itu coronavirus?\n";
	string pilgan1[50]={"a.Coronavirus adalah suatu kelompok virus yang dapat menyebabkan penyakit pada manusia","b.Coronavirus adalah suatu keadaan dimana suhu tubuh terlalu dingin","c.Coronavirus adalah suatu keadaan dimana suhu tubuh terlalu panas","d.Semua jawaban benar"};
	for (i=0;i<=3;i++)
	{cout<<pilgan1[i]<<"\n";}
    cout<<"Jawaban Anda : ";
    cin >> jawab;
        if(jawab == 'a' || jawab == 'A')
        {benar++;}
        else{
        salah++;}
    cout<<"---------------------------------------------------------------------------\n";        
    cout<<"2. Kapan coronavirus pertamakali ditemukan?\n";
    string pilgan2[50]={"a.Palangkaraya,Januari 1999","b.Medan,Maret 2010","c.Wuhan,Desember 2019","d.Zimbabwe,Agustus 1989"};
	for (i=0;i<=3;i++)
	{cout<<pilgan2[i]<<"\n";}
    cout<<"Jawaban Anda : ";
    cin >> jawab;
        if(jawab == 'c' || jawab == 'C')
        {benar++;}
        else{
        salah++;}
    cout<<"----------------------------------------------------------------------------\n";        
	cout<<"3. Bagaimana coronavirus menular?\n";
	string pilgan3[50]={"a.Coronavirus tidak menular","b.Coronavirus menular lewat perairan","c.Coronavirus menular lewat kontak tubuh","d.Coronavirus samasekali tidak menular"};
	for (i=0;i<=3;i++)
	{cout<<pilgan3[i]<<"\n";}
    cout<<"Jawaban Anda : ";
    cin >> jawab;
        if(jawab == 'c' || jawab == 'C')
        {benar++;}
        else{
        salah++;}
	cout<<"-----------------------------------------------------------------------------\n";				
	cout<<"4. Berapa Lamakah Waktu yang Diperlukan saat tanda tanda Muncul Gejala Coronavirus?\n";
	string pilgan4[50]={"a.1 hari","b.6 hari","c.14 hari","d.10 hari"};
    for (i=0;i<=3;i++)
	{cout<<pilgan4[i]<<"\n";}
	cout<<"Jawaban Anda : ";
    cin >> jawab;
        if(jawab == 'c' || jawab == 'C')
        {benar++;}
        else{
        salah++;}
    cout<<"-------------------------------------------------------------------------------\n";       
    cout<<"5. Berapa indikasi suhu tubuh seseorang yang terinveksi virus corona?\n";
    string pilgan5[50]={"a.30°C","b.31°C","c.38°C","d.34°C"};
	for (i=0;i<=3;i++)
	{cout<<pilgan5[i]<<"\n";}
    cout<<"Jawaban Anda : ";
    cin >> jawab;
            if(jawab == 'c' || jawab == 'C')
        {benar++;}
        else{
        salah++;}
	cout<<"--------------------------------------------------------------------------------\n";
	cout<<"6. Bagaimanakah cara untuk terhidar dari coronavirus?\n";
	string pilgan6[50]={"a.tidak keluar rumah dan hidari kontak tubuh dengan orang orang","b.bermain di mall siang siang","c.pergi keluar negri","d.pergi jalan jalan"};
	for (i=0;i<=3;i++)
	{cout<<pilgan6[i]<<"\n";}
	cout<<"Jawaban Anda : ";
    cin >> jawab;
        if(jawab == 'a' || jawab == 'A')
        {benar++;}
        else{
        salah++;}     
	cout<<"----------------------------------------------------------------------------------\n";
	cout<<"7. Apasaja gejala dari corona virus?\n";
	string pilgan7[50]={"a.gatal gatal","b.tidak dapat menggerakan tangan","c.demam dan gangguan pernafasan","d.seluruh badan terasa pegal"};
	for (i=0;i<=3;i++)
	{cout<<pilgan7[i]<<"\n";}
    cout<<"Jawaban Anda : ";
    cin >> jawab;
        if(jawab == 'c' || jawab == 'C')
        {benar++;}
        else{
        salah++;}
	cout<<"----------------------------------------------------------------------------------\n";
	cout<<"8. bagaimana cara pemerintah untuk memutus penyebaran virus corona?\n";
	string pilgan8[50]={"a.menyarankan masyarakat agar pergi keluar negri","b.tidak menutup jalur masuk kedalam negri","c.mendukung kegiatan diluar rumah","d.menyarankan masyarakat agar tetap dirumah"};
    for (i=0;i<=3;i++)
	{cout<<pilgan8[i]<<"\n";}
	cout<<"Jawaban Anda : ";
    cin >> jawab;
            if(jawab == 'd' || jawab == 'D')
        {benar++;}
        else{
        salah++;}
	cout<<"-------------------------------------------------------------------------------------\n";
	cout<<"9. alat apasajakah yang dapat mencegah penularan virus corona?\n";
	string pilgan9[50]={"a.masker dan hand sanitizer","b.motor","c.ember","d.bedak"};
	for (i=0;i<=3;i++)
	{cout<<pilgan9[i]<<"\n";}
	cout<<"Jawaban Anda : ";
    cin >> jawab;
            if(jawab == 'a' || jawab == 'A')
        {benar++;}
        else{
        salah++;}
	cout<<"-------------------------------------------------------------------------------------\n";
	cout<<"10. Di negara mana kasus penularan terbanyak corona virus saat ini?\n";
	string pilgan10[50]={"a. Turki","b. Iran","c. Brazil","d.Amerika serikat"};
	for (i=0;i<=3;i++)
	{cout<<pilgan10[i]<<"\n";}
	cout<<"Jawaban Anda : ";
    cin >> jawab;
            if(jawab == 'd' || jawab == 'D')
        {benar++;}
        else{
        salah++;} 
			
	cout<<"Apakah anda yakin dengan jawaban anda??[y/t]\n";cin>>pilihan;cout<<"\n";
					if (pilihan=='y' || pilihan=='Y')
					{goto nilai;}
					
					if (pilihan=='t' || pilihan=='T')
					{system("cls"); 
					goto ulangjwb;
					cout<<endl;}												       

	}		nilai :
					cout<<"-------------------------------------------------------\n";
					cout<<" NILAI :"<<endl;
            		nilai = benar*10;
            		cout<<"    Soal yang Benar : "<<benar<<" soal "<<endl;
            		cout<<"    soal yang Salah : "<<salah<<" soal "<<endl;
            		cout<<"    Nilai Hasil   : "<<nilai<<"\n"<<endl;
			selesai : 
			cout<<"---------------------------"<<endl;
			cout<<"Program Selesai, Terimakasi\n";
			cout<<"---------------------------"<<endl;
	
}

