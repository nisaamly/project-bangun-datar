#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	/* Nisa Amalia */
	/* 20051397038 */
	/* 2020B */
	
	#include <iostream>
	#include <conio.h>
	#include <windows.h>
	#include <cstdlib>
	#include <math.h>
	
	using namespace std;
	
	HANDLE console = Get StdHandle (STD_OUTPUT_HANDLE) ;
	COORD CursorPosition;
	
	void gotoXY (int,int);
	void gotoXY (int x, int y);
	
	{
		
		CursorPosition.X = x;
		CursorPosition.Y = y;
		SetConsoleCursorPosition(console,CursorPosition);
		
	}
	
	
	void Clear()
	
	{
		
		system ("cls");
		gotoXY (1,1); cout << "Nisa Amalia 200541397038";
		
	}
	
	void hitungGajiKaryawan(){
		bool running = true;
		
		while (running){
			clear();
			
		int Gaji, JumlahJamKerja;
		char golongan;
		string golonganUpperCase, pager = "=============================================================", NamaKaryawan;
		
		do {
			Clear (); 
			gotoXY (18,6) ; cout << "Masukan Nama Karyawan" : "; gotoXY (42,6)' getLine (cin, NamaKaryawan)"
		}while (NamaKaryawan.length () <1);
		
		
		cout << endl;
		gotoXY (18,7); cout << pager << endl;
		gotoXY (18,8); cout << "PILIH GOLONGAN" << endl;
		gotoXY (18,9); cout << "ketik a untuk golongan A lalu tekan enter" << endl;
		gotoXY (18,10); cout << "ketik b untuk golongan B lalu tekan enter" << endl;
		gotoXY (18,11); cout << "ketik c untuk golongan C lalu tekan enter" << endl;
		gotoXY (18,12); cout << "ketik d untuk golongan D lalu tekan enter" << endl;
		gotoXY (18,13); cout << "Masukan Golongan : "; cin >> golongan; cout << endl;
		gotoXY (18,14); cout << pager << endl;
		gotoXY (18,15) "Masukan Jumlah Jam Kerja Selama Seminggu : "; cin >> JumlahJamKerja; cout << endl;
		switch(golongan ){
		
		case 'a' :
			{
				gaji = 5000;
				break;
				
			}
			
		case 'b' :
			{
				gaji = 7000;
				break;
				
			}
		
		case 'c' :
			{
				gaji = 8000;
				break;
				
			}
			
		case 'd' :
			{
				gaji = 10000;
				break;
				
			}
		default:
			{
				gaji = 0;
				break;
				
			}
		
		}
	
	
	if (JumlahJamKerja > 48){
		gaji = gaji*48;
		gaji += (JumlahJamKerja - 48)*4000;
		gaji = gaji*4;
	}else if (JumlahJamKerja <= 48 && gaji !=0){
		gaji = gaji*JumlahJamKerja;
		gaji = gaji*4;
	}else if (JumlahJamKerja < 1){
		gaji = 0;
		JumlahJamKerja = 0;
		
	}
	
	Clear ();
	golonganUpperCase = :: toupper (golongan);
	gotoXY(18,5);
	gotoXY(18,6); cout << "Halo " << NamaKaryawan << endl;
	gotoXY(18,7); cout << "Anda Golongan " << golonganUpperCase << endl;
	gotoXY(18,8); cout << "Gaji Anda Rp. " << << ",- " "per-bulan" << endl << endl << endl;
	
	if(gaji == 0 && JumlahJamKerja > 0){
		Clear ();
		gotoXY(18,5);
		cout << "Error. Golongan Tidak Diketahui" << endl;
		
	}else if (gaji == 0 && JumlahJamKerja == 0){
		clear ();
		gotoXY(18,5);
		cout << "Mohon Maaf Jumlah Jam Kerja Tidak Diketahui" << endl;
		
	}
	
	gotoXY(18,10);cout << "Apakah Anda Ingin Mengulangi Perhitungan Gaji Karyawan Lagi? ";
	gotoXY(18,11);cout <<  "Ketuk Tombol Enter Jika Iya, ketuk tombol spasi jika ingin kembali ke menu awal";
	system ("pause>nul");
	
	if(GetAsyncKeyState(VK_RETURN)){
		RUNNING = TRUE;
	}
	if (GetAsyncKeyState(VK_SPACE)){
		running = false;
	}
	


	void segitigaHeader (int alas, int tinggi, int x){
		gotoXY(18,3); cout << "MENGHITUNG SEGITIGA SIKU-SIKU";
		gotoXY(18,4); cout << "====================================================================";
		gotoXY(18,5); cout << "Alas (sisi pertama) dari Segitiga Siku-Siku = " << alas;
		gotoXY(18,6); cout << "Tinggi (sisi kedua) dari Segitiga Siku -Siku = " << tinggi;
		gotoXY(18,7); cout "(Gunakan arah panah keyboard untuk mengganti posisi kursor)";
		gotoXY(18,x); cout << "_>";
		
	}
	
		int segitigaPanjangSisiMiring (int sisiSikuSikuPertama, int tinggiSikuSikuKedua){
		int hasil;
		hasil = sqrt(sisiSikuSikuPertama + tinggiSikuSikuKedua);
		return hasil;
	}
	
	int segitigaLuas(iny alas, int tinggi){
		int hasil;
		hasil = 0.5*alas*tinggi;
		return hasil;
	}
	
	int segitigaKeliling (int alas, int tinggi, int sisiMiring){
		int keliling;
		keliling = alas + tinggi + sisiMiring;
		return keliling;
		
	}
	
	void tampilanIndexNol (int panjangSisiMiring){
		gotoXY(55,11); cout << " | Panjang Sisi Miring = " << panjangSisiMiring;
	}
	
	
	void tampilkanIndexSatu (int luas){
		gotoXY(55,12); cout << " | Luas Segitiga Siku-Siku = " << Luas;
	}
	
	void tampilaknIndexDuas (int Keliling){
	gotoXY(55,13); cout << " | Keliling Segitiga Siku-Siku = " << Keliling;
		
	}
	
	void menghitungSegitigaSikuSiku(){
		
		int menu_item = 0, x =  11, alas = 0, tinggi = 0, sisiMiring = 0, luas = 0, keliling = 0;
		bool running = true;
		
		gotoXY(18,3); cout << "MENGHITUNG SEGITIGA SIKU-SIKU";
		gotoXY(18,4); cout << "===============================================================================";
		gotoXY(18,5); cout << "Masukan Alas (sisi pertama) dari segitiga siku-siku : "; cin >> alas;
		gotoXY(18,6); cout << "Masukan Tinggi (sisi kedua) dari segitiga siku-siku : "; cin >> tinggi;
		gotoXY(18,7); cout << "===============================================================================";
		
		clear();
		segitigaHeader (alas, tinggi, x);
		
	while(running){
			
		gotoXY(20,11); cout << "1) Tampilkan panjang sisi miring";
		gotoXY(20,12); cout << "2) Tampilkan luas";
		gotoXY(20,13); cout << "2) Tampilkan keliling";
		gotoXY(20,14); cout << "hitung ulang";
		gotoXY(20,15); cout << "ke menu awal";
			
			if(alas == 0 && tinggi == 0){
		clear();
		gotoXY(18,3); cout << "MENGHITUNG SEGITIGA SIKU-SIKU";
		gotoXY(18,4); cout << "===============================================================================";
		gotoXY(18,5); cout << "Masukan Alas (sisi pertama) dari segitiga siku-siku : "; cin >> alas;
		gotoXY(18,6); cout << "Masukan Tinggi (sisi kedua) dari segitiga siku-siku : "; cin >> tinggi;
		gotoXY(18,7); cout << "===============================================================================";
		
		gotoXY(20,11); cout << "1) Tampilkan panjang sisi miring";
		gotoXY(20,12); cout << "2) Tampilkan luas";
		gotoXY(20,13); cout << "2) Tampilkan keliling";
		gotoXY(20,14); cout << "hitung ulang";
		gotoXY(20,15); cout << "ke menu awal";
		
		
		clear();
		segitigaHeader (alas, tinggi, x):
		gotoXY(20,11); cout << "1) Tampilkan panjang sisi miring";
		gotoXY(20,12); cout << "2) Tampilkan luas";
		gotoXY(20,13); cout << "2) Tampilkan keliling";
		gotoXY(20,14); cout << "hitung ulang";
		gotoXY(20,15); cout << "ke menu awal";
	} 
	if(alas != 0 && tinggi != 0 ){
            segitigaHeader(alas, tinggi, x);
		}
		if(sisiMiring != 0){
            tampilkanIndexNol(sisiMiring);
		}
		if(luas != 0){
            tampilkanIndexSatu(luas);
		}
		if(keliling != 0){
            tampilkanIndexDua(keliling);
		}

		system("pause>nul");

		if(GetAsyncKeyState(VK_DOWN) && x != 15)
			{
				gotoXY(18,x); cout << "  ";
				x++;
				gotoXY(18,x); cout << "->";
				menu_item++;
				continue;

			}

		if(GetAsyncKeyState(VK_UP) && x != 11)
			{
				gotoXY(18,x); cout << "  ";
				x--;
				gotoXY(18,x); cout << "->";
				menu_item--;
				continue;
			}

		if(GetAsyncKeyState(VK_RETURN)){

			switch(menu_item){

				case 0: {
				    sisiMiring += segitigaPanjangSisiMiring(alas, tinggi);
				    Clear();
				    menu_item += 1;
				    x += 1;
				    running = true;
					break;
				}


				case 1: {
                    luas += segitigaLuas(alas, tinggi);
                    Clear();
                    menu_item -= 1;
                    menu_item += 2;
				    x -= 1;
				    x += 2;
                    running = true;
					break;
				}
				case 2: {
				    keliling += segitigaKeliling(alas, tinggi, sisiMiring);
				    Clear();
				    menu_item -= 1;
                    menu_item += 2;
				    x -= 1;
				    x += 2;
				    running = true;
					break;
				}

				case 3: {
				    alas -= alas;
				    tinggi -= tinggi;
				    luas -= luas;
				    keliling -= keliling;
				    sisiMiring -= sisiMiring;
				    Clear();
				    menu_item -= 3;
				    x -= 14;
				    x += 11;
					running = true;
					break;
				}

				case 4: {
				    Clear();
				    menu_item -= 4;
				    x -= 15;
					running = false;
				}

			}

		}

	}
}





void menuheader(){
        gotoXY(1,1); cout << "Nisa Amalia 200513497038 2020B";
	    gotoXY(18,5); cout << "Main Menu";
	    gotoXY(18,6); cout << "(Gunakan Arah Panah Keyboard untuk mengganti posisi kursor)\n";
        gotoXY(18,8); cout << "->";
}

int main()
{

    int menu_item = 0, x=8;
	bool running = true;
	menuheader();

	while(running)
	{
        gotoXY(20,8);  cout << "1) Hitung Gaji Karyawan";
		gotoXY(20,9);  cout << "2) Hitung Segitiga siku-siku";
		gotoXY(20,10); cout << "Keluar Program";

		system("pause>nul");

		if(GetAsyncKeyState(VK_DOWN) && x != 10)
			{
				gotoXY(18,x); cout << "  ";
				x++;
				gotoXY(18,x); cout << "->";
				menu_item++;
				continue;

			}

		if(GetAsyncKeyState(VK_UP) && x != 8)
			{
				gotoXY(18,x); cout << "  ";
				x--;
				gotoXY(18,x); cout << "->";
				menu_item--;
				continue;
			}

		if(GetAsyncKeyState(VK_RETURN)){

			switch(menu_item){

				case 0: {
					gotoXY(20,16);
					hitungGajiKaryawan();
					    Clear();
                        menuheader();
                        menu_item -= menu_item;
                        x -= x;
                        x += 8;
                        running = true;
					break;
				}


				case 1: {
					gotoXY(20,16);
					Clear();
					menghitungSegitigaSikuSiku();
                        Clear();
                        menuheader();
                        menu_item -= menu_item;
                        x -= x;
                        x += 8;
                        running = true;
					break;
				}

				case 2: {
					gotoXY(20,16);
					cout << "Terimakasih Telah menggunakan Program ini";
					running = false;
				}

			}

		}

	}

	gotoXY(20,21);

	return 0;
}

