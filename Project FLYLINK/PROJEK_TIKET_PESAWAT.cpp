#include <iostream>
using namespace std;
	struct app{
		int pil ,type , tpp, tiket ,h ,jam ,tp ,umur ,tanggalkepulangan ,tanggal ,kabin ,hrgkabin ;
		int hrg[3];
		string bulan ,bk ,nama ,st ,nk ,ter ,nohp ,kota ,m ,mm;
		char mkn ,pp ,vaksin ,kejadwal ,jk ;
};

	int total(int a,int b,int c){
		long hargatotal;
		hargatotal=a+b+c;
		return hargatotal;}

	void menu(){
		app apk;
		jadwal:
	system ("cls"); 
	cout<<"Welcome to F L Y  L I N K" <<endl;
	cout<<"#=======================================================================================================================#" <<endl;
	cout<<"|   Tujuan Anda			Type		    Type		     Type		    Type                |" <<endl;
	cout<<"	                        Ekonomi(E)          Ekonomi Premium(EP)      Bisnis(B)              First Class(F)      |" <<endl;
	cout<<"========================================================================================================================#" <<endl;
	cout<<"|1. Tokyo, Jepang 	        IDR 8.500.000/pax   IDR 19.800.000/pax       IDR 32.000.000/pax     IDR 64.000.000/pax  |" <<endl;
	cout<<"|2. Bangkok, Thailand           IDR 5.500.000/pax   IDR 18.500.000/pax       IDR 32.500.000/pax     IDR 68.500.000/pax  |" <<endl;
	cout<<"|3. Singapore, Singapore        IDR 2.500.000/pax   IDR 14.500.000/pax       IDR 28.500.000/pax     IDR 52.500.000/pax  |" <<endl;
	cout<<"|4. Sydney, Australia           IDR 7.320.000/pax   IDR 15.750.000/pax       IDR 30.250.000/pax     IDR 60.500.000/pax  |" <<endl;
	cout<<"|5. Manila, Filipina            IDR 8.000.000/pax   IDR 17.500.000/pax       IDR 34.500.000/pax     IDR 69.500.000/pax  |" <<endl;
	cout<<"#=======================================================================================================================#" <<endl;
	cout<<"Masukkan Nama Kota atau Bandara : ";cin>>apk.kota;
	cout<<"Masukkan Pilihan Tempat Anda (1-5): "; cin>>apk.pil;
	cout<<"Atur Tanggal Keberangkatan : ";cin>>apk.tanggal;
	cout<<"Atur Bulan Keberangkatan: ";cin>>apk.bulan;
	cout<<"Pulang-Pergi(y/t) : ";cin>>apk.pp;
		if (apk.pp == 'y'|apk.pp=='Y'){
			cout<<"Atur Tanggal Kepulangan : "; cin>>apk.tanggalkepulangan;
			cout<<"Atur Bulan Kepulangan: ";cin>>apk.bk;
		} else {
			apk.tanggalkepulangan=0;
		}
	cout<<"Apakah Anda Sudah Vaksin(y/t) : ";cin>>apk.vaksin;
		if (apk.vaksin == 'y'|apk.vaksin=='Y'){
			;
		} else {
			cout<<"Mohon Vaksin Dulu!!!!!";exit(0);
		}
	system ("cls");
	cout<<"Masukkan Biodata Anda"<<endl;
	cout<<"Masukkan Nama Anda : ";cin>>apk.nama;
	cout<<"Masukkan No.Handphone(+62): ";cin>>apk.nohp;
	cout<<"Masukkan Jenis Kelamin Anda (L/P) : ";cin>>apk.jk;
		if (apk.jk == 'l'|apk.jk=='L'){
			apk.m="Mr.";
			apk.mm="Laki-laki";
		} else if (apk.jk=='p'|apk.jk=='P'){
			apk.m="Mrs.";
			apk.mm="Perempuan";
		}
	cout<<"Masukkan Umur Anda : ";cin>>apk.umur;
	cout<<endl;

	system ("cls");
	switch (apk.pil){
		case 1 : 
	cout<<"------------------------------------" <<endl;
	cout<<"Type Seat: " <<endl;
	cout<<"1. Ekonomi(E) (Rp. 8.500.000)" <<endl;
	cout<<"2. Ekonomi Premium(EP) (Rp. 19.800.000)" <<endl;
	cout<<"3. Bisnis(B) (Rp. 32.000.000)" <<endl;
	cout<<"4. First Class(F) (Rp. 64.000.000)" <<endl;
	cout<<"Masukkan Pilihan Type Seat Anda (1-4): "; cin>>apk.type;
	if (apk.type == 1){
			apk.h=8500000;
		} else if (apk.type == 2){
			apk.h=19800000;
		} else if (apk.type == 3){
			apk.h=32000000;
		} else if (apk.type == 4){
			apk.h=64000000;
		} else {
			apk.h=0;
		}break;
		case 2 :
	cout<<"------------------------------------" <<endl;
	cout<<"Type Seat: " <<endl;
	cout<<"1. Ekonomi(E) (Rp. 5.500.000)" <<endl;
	cout<<"2. Ekonomi Premium(EP) (Rp. 18.500.000)" <<endl;
	cout<<"3. Bisnis(B) (Rp. 32.500.000)" <<endl;
	cout<<"4. First Class(F) (Rp. 68.500.000)" <<endl;
	cout<<"Masukkan Pilihan Type Seat Anda (1-4): "; cin>>apk.type;
		if (apk.type == 1){
			apk.h=5500000;
		} else if (apk.type == 2){
			apk.h=18500000;
		} else if (apk.type == 3){
			apk.h=32500000;
		} else if (apk.type == 4){
			apk.h=68500000;
		} else {
			apk.h=0;
		}break;
		case 3 :
	cout<<"------------------------------------" <<endl;
	cout<<"Type Seat: " <<endl;
	cout<<"1. Ekonomi(E) (Rp. 2.500.000)" <<endl;
	cout<<"2. Ekonomi Premium(EP) (Rp. 14.500.000)" <<endl;
	cout<<"3. Bisnis(B) (Rp. 28.500.000)" <<endl;
	cout<<"4. First Class(F) (Rp. 52.500.000)" <<endl;
	cout<<"Masukkan Pilihan Type Seat Anda (1-4): "; cin>>apk.type;
		if (apk.type == 1){
			apk.h=2500000;
		} else if (apk.type == 2){
			apk.h=14500000;
		} else if (apk.type == 3){
			apk.h=28500000;
		} else if (apk.type == 4){
			apk.h=52500000;
		} else {
			apk.h=0;
		}break;
		case 4 : 
	cout<<"------------------------------------" <<endl;
	cout<<"Type Seat: " <<endl;
	cout<<"1. Ekonomi(E) (Rp. 7.320.000)" <<endl;
	cout<<"2. Ekonomi Premium(EP) (Rp. 15.750.000)" <<endl;
	cout<<"3. Bisnis(B) (Rp. 30.250.000)" <<endl;
	cout<<"4. First Class(F) (Rp. 60.500.000)" <<endl;
	cout<<"Masukkan Pilihan Type Seat Anda (1-4): "; cin>>apk.type;
		if (apk.type == 1){
			apk.h=7320000;
		} else if (apk.type == 2){
			apk.h=15750000;
		} else if (apk.type == 3){
			apk.h=30250000;
		} else if (apk.type == 4){
			apk.h=60500000;
		} else {
			apk.h=0;
		}break;
		case 5 :
	cout<<"------------------------------------" <<endl;
	cout<<"Type Seat: " <<endl;
	cout<<"1. Ekonomi(E) (Rp. 8.500.000)" <<endl;
	cout<<"2. Ekonomi Premium(EP) (Rp. 17.500.000)" <<endl;
	cout<<"3. Bisnis(B) (Rp. 34.500.000)" <<endl;
	cout<<"4. First Class(F) (Rp. 69.500.000)" <<endl;
	cout<<"Masukkan Pilihan Type Seat Anda (1-4): "; cin>>apk.type;
		if (apk.type == 1){
			apk.h=8000000;
		} else if (apk.type == 2){
			apk.h=17500000;
		} else if (apk.type == 3){
			apk.h=34500000;
		} else if (apk.type == 4){
			apk.h=69500000;
		} else {
			apk.h=0;
		}break;
		default : cout<<" Maaf Inputan Anda Salah Silakan Ulang lagi (y/t): "; cin>>apk.kejadwal;
		if (apk.kejadwal=='y'|apk.kejadwal=='Y'){
			goto jadwal;
		}else{
	 		exit(0);
		}
	}
	
	cout<<"Fasilitas Penerbangan"<<endl;
	cout<<"Bagasi/Kabin (Max 32kg) : ";cin>>apk.kabin;
		if (apk.kabin<=32){
			apk.hrgkabin=apk.kabin*0;
	} else {
		apk.hrgkabin=(apk.kabin-32)*150000;
	}
	switch (apk.type){
		case 1: apk.st = "Ekonomi"; break;
		case 2: apk.st = "Ekonomi Premium"; break;
		case 3: apk.st = "Bisnis"; break;
		case 4: apk.st = "First Class"; break;
		default : apk.st = "Salah Input";
	}
	cout<<"Jumlah Tiket yang ingin dibeli: "; cin>>apk.tiket;
	switch (apk.pil){
		case 1: apk.nk = "Tokyo, Jepang"; break;
		case 2: apk.nk = "Bangkok, Thailand"; break;
		case 3: apk.nk = "Singapore, Singapore"; break;
		case 4: apk.nk = "Sydney, Australia"; break;
		case 5: apk.nk = "Manila, Filipina"; break;
		default : apk.nk = "Salah Input";
	}

system ("cls");
	switch (apk.pil){
		case 1: 
	cout<<"#=========================#"<<endl;
	cout<<"|Jam Penerbangan : |" <<endl;
	cout<<"|1. 20:00 (CGK) - 10:45 (NRT) |" <<endl;
	cout<<"|2. 19:50 (CGK) - 11:05 (NRT) |" <<endl;
	cout<<"|3. 15:05 (CGK) - 17:50 (NRT) |" <<endl;
	cout<<"|4. 20:00 (CGK) - 13:00 (NRT) |" <<endl;
	cout<<"|5. 20:00 (CGK) - 18:40 (NRT) |" <<endl;
	cout<<"#=========================#" <<endl;
	cout<<"Masukkan Pilihan Jam Terbang Anda (1-5): "; cin>>apk.jam;
		switch (apk.jam){
			case 1: apk.ter = "20:00 (CGK) - 10:45 (NRT)"; break;
			case 2: apk.ter = "19:50 (CGK) - 11:05 (NRT)"; break;
			case 3: apk.ter = "15:05 (CGK) - 17:50 (NRT)"; break;
			case 4: apk.ter = "20:00 (CGK) - 13:00 (NRT)"; break;
			case 5: apk.ter = "20:00 (CGK) - 18:40 (NRT)"; break;
			default : apk.ter = "Salah Input";
		}break;

		case 2:
	cout<<"#=========================#"<<endl;
	cout<<"|Jam Penerbangan : |" <<endl;
	cout<<"|1. 19:25 (CGK) - 22:35 (DMK) |" <<endl;
	cout<<"|2. 19:00 (CGK) - 23:00 (DMK) |" <<endl;
	cout<<"|3. 19:05 (CGK) - 22:45 (DMK) |" <<endl;
	cout<<"|4. 18:20 (CGK) - 21:40 (DMK) |" <<endl;
	cout<<"|5. 20:00 (CGK) - 23:20 (DMK) |" <<endl;
	cout<<"#=========================#" <<endl;
	cout<<"Masukkan Pilihan Jam Terbang Anda (1-5): "; cin>>apk.jam;
		switch (apk.jam){
			case 1: apk.ter = "20:00 (CGK) - 22:35 (DMK)"; break;
			case 2: apk.ter = "19:00 (CGK) - 23:00 (DMK)"; break;
			case 3: apk.ter = "19:05 (CGK) - 22:45 (DMK)"; break;
			case 4: apk.ter = "18:20 (CGK) - 21:40 (DMK)"; break;
			case 5: apk.ter = "20:00 (CGK) - 23:20 (DMK)"; break;
			default : apk.ter = "Salah Input";
		}break;

		case 3: 
	cout<<"#=========================#"<<endl;
	cout<<"|Jam Penerbangan : |" <<endl;
	cout<<"|1. 19:35 (CGK) - 00:20 (SIN) |" <<endl;
	cout<<"|2. 19:40 (CGK) - 00:10 (SIN) |" <<endl;
	cout<<"|3. 19:35 (CGK) - 22:25 (SIN) |" <<endl;
	cout<<"|4. 15:30 (CGK) - 18:15 (SIN) |" <<endl;
	cout<<"|5. 13:35 (CGK) - 16:20 (SIN) |" <<endl;
	cout<<"#=========================#" <<endl;
	cout<<"Masukkan Pilihan Jam Terbang Anda (1-5): "; cin>>apk.jam;
		switch (apk.jam){
			case 1: apk.ter = "19:35 (CGK) - 00:20 (SIN)"; break;
			case 2: apk.ter = "19:50 (CGK) - 00:10 (SIN)"; break;
			case 3: apk.ter = "19:35 (CGK) - 22:25 (SIN)"; break;
			case 4: apk.ter = "15:30 (CGK) - 18:15 (SIN)"; break;
			case 5: apk.ter = "13:35 (CGK) - 16:20 (SIN)"; break;
			default : apk.ter = "Salah Input";
		}break;

		case 4: 
	cout<<"#=========================#"<<endl;
	cout<<"|Jam Penerbangan : |" <<endl;
	cout<<"|1. 20:00 (CGK) - 10:45 (SYD) |" <<endl;
	cout<<"|2. 19:50 (CGK) - 11:05 (SYD) |" <<endl;
	cout<<"|3. 15:05 (CGK) - 17:50 (SYD) |" <<endl;
	cout<<"|4. 20:00 (CGK) - 13:00 (SYD) |" <<endl;
	cout<<"|5. 20:00 (CGK) - 18:40 (SYD) |" <<endl;
	cout<<"#=========================#" <<endl;
	cout<<"Masukkan Pilihan Jam Terbang Anda (1-5): "; cin>>apk.jam;
			switch (apk.jam){
				case 1: apk.ter = "20:00 (CGK) - 10:45 (SYD)"; break;
				case 2: apk.ter = "19:50 (CGK) - 11:05 (SYD)"; break;
				case 3: apk.ter = "15:05 (CGK) - 17:50 (SYD)"; break;
				case 4: apk.ter = "20:00 (CGK) - 13:00 (SYD)"; break;
				case 5: apk.ter = "20:00 (CGK) - 18:40 (SYD)"; break;
				default : apk.ter = "Salah Input";
			}break;

		case 5:
	cout<<"#=========================#"<<endl;
	cout<<"|Jam Penerbangan : |" <<endl;
	cout<<"|1. 20:00 (CGK) - 10:45 (MNL) |" <<endl;
	cout<<"|2. 19:50 (CGK) - 11:05 (MNL) |" <<endl;
	cout<<"|3. 15:05 (CGK) - 17:50 (MNL) |" <<endl;
	cout<<"|4. 20:00 (CGK) - 13:00 (MNL) |" <<endl;
	cout<<"|5. 20:00 (CGK) - 18:40 (MNL) |" <<endl;
	cout<<"#=========================#" <<endl;
	cout<<"Masukkan Pilihan Jam Terbang Anda (1-5): "; cin>>apk.jam;
		switch (apk.jam){
			case 1: apk.ter = "20:00 (CGK) - 10:45 (MNL)"; break;
			case 2: apk.ter = "19:50 (CGK) - 11:05 (MNL)"; break;
			case 3: apk.ter = "15:05 (CGK) - 17:50 (MNL)"; break;
			case 4: apk.ter = "20:00 (CGK) - 13:00 (MNL)"; break;
			case 5: apk.ter = "20:00 (CGK) - 18:40 (MNL)"; break;
			default : apk.ter = "Salah Input";
		}break;

	default : cout<<" Anda Salah Memasukkan Kode"<<endl;
	}
	cout<<"------------------------------------" <<endl;
	cout<<"Dengan Makanan (y/t): "; cin>>apk.mkn;
	if (apk.mkn == 'y'|apk.mkn=='Y'){
		cout<<"Total Makanan yang ingin dibeli/50rb: "; cin>>apk.tp;
	} else {
		apk.tp=0;
	}

system ("cls");
	cout<<"Pemesanan Tiket"<<endl;
	cout<<"Nama Kota: "<<apk.kota<<endl;
	cout<<"Nama Pilihan Tempat: "<<apk.nk<<endl;
	cout<<"Tanggal Berangkat: "<<apk.tanggal<<"/"<< apk.bulan<<endl;
		if (apk.pp == 'y'|apk.pp=='Y'){
			cout<<"Tanggal Pulang: "<<apk.tanggalkepulangan<<"/"<< apk.bk<<endl;
			apk.tpp=apk.tiket*2;
		} else {
			apk.tanggalkepulangan=0;
			apk.tpp=apk.tiket;
		}
	cout<<"Sudah Vaksin!!!"<<endl;
	cout<<"===============================================" <<endl;
	cout<<"Biodata"<<endl;
	cout<<"Nama: "<<apk.nama<<endl;
	cout<<"No.Handphone: "<<apk.nohp<<endl;
	cout<<"Jenis kelamin: "<<apk.mm<<endl;
	cout<<"Umur: "<<apk.umur<<" tahun"<<endl;
	cout<<"============================================================="<<endl;
	cout<<"Terima Kasih "<< apk.m << apk.nama << " telah memilih penerbangan di maskapai ini"<<endl;
	cout<<"Nama Negara yang akan dikunjungi " << apk.nk <<" dengan total " << apk.tiket << " tiket "<< apk.st << " dengan bagasi/kabin " <<apk.kabin<<" Kg"<<endl;
	cout<<"Jam Penerbangan: " << apk.ter <<endl;
	apk.hrg [0]= apk.h * apk.tpp;
	apk.hrg [1]= apk.tp * 50000;
	apk.hrg [2]= apk.hrgkabin;
	cout<<"Total Biaya Keseluruhan(Termasuk Biaya Admin): " << total(apk.hrg[0],apk.hrg[1],apk.hrg[2])
	<< endl;
	cout<<"-----------------------------------------------------------" <<endl;
	}
	int main(){
		app apk;
		char tanya;
		atas:
		menu();
	cout<<"Apakah Anda Ingin Memesan Tiket Lagi (y/t)?";cin>>tanya;
		if(tanya=='y'|tanya=='Y'){
			goto atas;
		} else {
			selesai:
	cout<<"TERIMA KASIH DAN JANGAN LUPA MENGGUNAKAN MASKER!"<<endl;
	cout<<"ENJOY YOUR FLIGHTS " <<endl;
	}
	}
