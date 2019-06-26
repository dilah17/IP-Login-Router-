#include <iostream> //file header yang berfungsi sebagai standar input outut operasi pada c++
#include <cstdlib> //file header yang berfungsi mendefinisikan pencarian, pengurutan dan konversi 
#include <conio.h> //file header yang berfungsi menampilkan hasil antarmuka kepada user 
#include <csignal> //library yang berfungsi menangani sinyal untuk menginformasikan proses yang berjalan 

using namespace std; //untuk mendeklarasikan fungsi atau class yang merupakan bagian dari namespace std yang bersangkutan 

string username, password, buffer_qst, session; //deklarasi
int input_user, buffer_pilihan, salah_password; //deklarasi
char qst; //deklarasi

int login(){

	system("cls"); //untuk membersihkan layar pada program yang akan dijalankan sehingga pemrogram dapat menenentukan saat untuk menghapus data yang telah dijalankan tanpa harus menutup program tersebut dan membukanya kembali.

	cout<<"Username: "; //fungsi output untuk menampilkan data dengan tipe data apapun dilayar
    cin>>username; // fungsi input untuk memasukkan data berupa numerik dan karakter
    cout<<"Password: "; //fungsi output untuk menampilkan data dengan tipe data apapun dilayar
    cin>>password; // fungsi input untuk memasukkan data berupa numerik dan karakter

    if (username == "admin" && password == "admin"){ //IF merupakan operator pernytaan untuk username "admin" dan password "admin"
    	::session = "logged"; 
    	return 0;
    }else{ //fungsi menerima nilai jika pernyataan IF yang dibuat tidak memenuhi syarat dari program yang dibuat
    	if (salah_password == 2){ //pernyataan jika salah password
    		cout << "\n\t ERROR | LOGIN GAGAL 3X\n\n"; //maka akan menampilkan error atau login gagal
    		exit(1);
    	}
    	salah_password++;	
    	login();
    	
    }
    return 0; //mengembalikan nilai
}


int pilihan(){ //tipe data integer yang akan membuat beberapa pilihan

	system("cls"); //untuk membersihkan layar pada program yang akan dijalankan sehingga pemrogram dapat menenentukan saat untuk menghapus data yang telah dijalankan tanpa harus menutup program tersebut dan membukanya kembali.

	cout<<"====================================\n";
    cout<<"     Pencarian ip login router      \n";
    cout<<"====================================\n";
    cout<<endl<<endl;
    cout<<"\n<<< Menu Pilihan >>>\n\n";
    cout<<"1.Tenda  5.TP-Link   9.Totolink  13.Motorola 17.Tellabs\n";
    cout<<"2.huawai 6.Xiaomi    10.Linksys  14.Prolink  18.Engeniuos\n"; 
    cout<<"3.cisco  7.Asus      11.D-link   15.3COM     19.Trandware\n";
    cout<<"4.zte    8.Synology  12.Netgear  16.Canyon   20.Orbi Pro\n\n";

    cout<<"Masukkan Nomor Router: "; //fungsi output untuk menampilkan data sesuai dengan tipe data
    cin>>input_user; //fungsi input untuk memasukkan data

    return input_user;//mengembalikan nilai
}

string question(int kode){
	if (kode == 1){//membandingkan pernyataan jika di inputkan nilai
		cout << "\n\t\t [?] apakah anda membuka ingin membuka browser ? [Y/n] ";//pernyataan setelah tampilan ip 
		cin >> qst;

		if (qst == 'Y' || qst == 'y'){
			return "buka_browser"; //pernyataan jika ya
		}else{
			return "cancel_browser";//pernyataan jika tidak
		}
	}else if(kode == 2){//menerima nilai jika fungsi if tidak memenuhi persyaratan
		cout << "\n\t [?] apakah anda mengulang program ? [Y/n] ";//pernyataan jika tidak login ke browser
		cin >> qst;

		if (qst == 'Y' || qst == 'y'){
			return "ulang_program";//pernyataan jika ya
		}else{
			return "exit_program";//pernyataan jika tidak
		}
	}

	return "null";//mengembalikan nilai
}

int eksekusi_program(int arg){
	switch(arg){ //pernyataan untuk menjalankan salah satu pernyataan dari beberapa kemungkinan pernyataan
		case 1: //pernyataan  yang  digunakan  untuk  menanggani pengambilan  keputusan  yang  melibatkan  sejumlah  alternatif pilihan.
        	cout<<"\n\t192.168.23.11\n";
        	if (question(1) == "buka_browser"){
        		system("start http://192.168.23.11");
        	}
        	return 0;
        	break;//statement peloncatan
       	case 2://pernyataan  yang  digunakan  untuk  menanggani pengambilan  keputusan  yang  melibatkan  sejumlah  alternatif pilihan.
        	cout<<"\n\t192.168.8.1\n"; 
        	
        	if (question(1) == "buka_browser"){
        		system("start http://192.168.8.1");
        	}
        	return 0;
        	break;//statement peloncatan
         case 3://pernyataan  yang  digunakan  untuk  menanggani pengambilan  keputusan  yang  melibatkan  sejumlah  alternatif pilihan.
            cout<<"\n\t192.168.0.30\n"; 
            
            if (question(1) == "buka_browser"){
                system("start http://192.168.0.30");
            }
            return 0;
            break;//statement peloncatan
        case 4://pernyataan  yang  digunakan  untuk  menanggani pengambilan  keputusan  yang  melibatkan  sejumlah  alternatif pilihan.
            cout<<"\n\t192.168.100.100\n"; 
            
            if (question(1) == "buka_browser"){
                system("start http://192.168.100.100");
            }
            return 0;
            break;//statement peloncatan
        case 5://pernyataan  yang  digunakan  untuk  menanggani pengambilan  keputusan  yang  melibatkan  sejumlah  alternatif pilihan.
            cout<<"\n\t192.168.0.254\n"; 
            
            if (question(1) == "buka_browser"){
                system("start http://192.168.0.254");
            }
            return 0;
            break;//statement peloncatan
        case 6://pernyataan  yang  digunakan  untuk  menanggani pengambilan  keputusan  yang  melibatkan  sejumlah  alternatif pilihan.
            cout<<"\n\t192.166.77.88\n"; 
            
            if (question(1) == "buka_browser"){
                system("start http://192.166.77.88");
            }
            return 0;
            break;//statement peloncatan
        case 7://pernyataan  yang  digunakan  untuk  menanggani pengambilan  keputusan  yang  melibatkan  sejumlah  alternatif pilihan.
            cout<<"\n\t10.10.1.1\n"; 
            
            if (question(1) == "buka_browser"){
                system("start http://10.10.1.1");
            }
            return 0;
            break;//statement peloncatan
        case 8://pernyataan  yang  digunakan  untuk  menanggani pengambilan  keputusan  yang  melibatkan  sejumlah  alternatif pilihan.
            cout<<"\n\t192.168.1.99\n"; 
            
            if (question(1) == "buka_browser"){
                system("start http://192.168.1.99");
            }
            return 0;
            break;//statement peloncatan
        case 9://pernyataan  yang  digunakan  untuk  menanggani pengambilan  keputusan  yang  melibatkan  sejumlah  alternatif pilihan.
            cout<<"\n\t192.168.2.1\n"; 
            
            if (question(1) == "buka_browser"){
                system("start http://192.168.2.1");
            }
            return 0;
            break;//statement peloncatan
        case 10://pernyataan  yang  digunakan  untuk  menanggani pengambilan  keputusan  yang  melibatkan  sejumlah  alternatif pilihan.
            cout<<"\n\t192.168.1.10\n"; 
            
            if (question(1) == "buka_browser"){
                system("start http://192.168.1.10");
            }
            return 0;
            break;//statement peloncatan
        case 11://pernyataan  yang  digunakan  untuk  menanggani pengambilan  keputusan  yang  melibatkan  sejumlah  alternatif pilihan.
            cout<<"\n\t192.168.0.101\n"; 
            
            if (question(1) == "buka_browser"){
                system("start http://192.168.0.101");
            }
            return 0;
            break;//statement peloncatan
        case 12://pernyataan  yang  digunakan  untuk  menanggani pengambilan  keputusan  yang  melibatkan  sejumlah  alternatif pilihan.
            cout<<"\n\t192.168.0.227\n"; 
            
            if (question(1) == "buka_browser"){
                system("start http://192.168.0.227");
            }
            return 0;
            break;//statement peloncatan
        case 13://pernyataan  yang  digunakan  untuk  menanggani pengambilan  keputusan  yang  melibatkan  sejumlah  alternatif pilihan.
            cout<<"\n\t192.168.50.1\n"; 
            
            if (question(1) == "buka_browser"){
                system("start http://192.168.50.1");
            }
            return 0;
            break;//statement peloncatan
        case 14://pernyataan  yang  digunakan  untuk  menanggani pengambilan  keputusan  yang  melibatkan  sejumlah  alternatif pilihan.
            cout<<"\n\t192.168.1.254\n"; 
            
            if (question(1) == "buka_browser"){
                system("start http://192.168.1.254");
            }
            return 0;
            break;//statement peloncatan
        case 15://pernyataan  yang  digunakan  untuk  menanggani pengambilan  keputusan  yang  melibatkan  sejumlah  alternatif pilihan.
            cout<<"\n\t192.168.1.1\n"; 
            
            if (question(1) == "buka_browser"){
                system("start http://192.168.1.1");
            }
            return 0;
            break;//statement peloncatan
        case 16://pernyataan  yang  digunakan  untuk  menanggani pengambilan  keputusan  yang  melibatkan  sejumlah  alternatif pilihan.
            cout<<"\n\t192.168.0.30\n"; 
            
            if (question(1) == "buka_browser"){
                system("start http://192.168.0.30");
            }
            return 0;
            break;//statement peloncatan
        case 17://pernyataan  yang  digunakan  untuk  menanggani pengambilan  keputusan  yang  melibatkan  sejumlah  alternatif pilihan.
            cout<<"\n\t192.168.10.1\n"; 
            
            if (question(1) == "buka_browser"){
                system("start http://192.168.10.1");
            }
            return 0;
            break;//statement peloncatan
        case 18://pernyataan  yang  digunakan  untuk  menanggani pengambilan  keputusan  yang  melibatkan  sejumlah  alternatif pilihan.
            cout<<"\n\t192.168.1.254\n"; 
            
            if (question(1) == "buka_browser"){
                system("start http://192.168.1.254");
            }
            return 0;
            break;//statement peloncatan
        case 19://pernyataan  yang  digunakan  untuk  menanggani pengambilan  keputusan  yang  melibatkan  sejumlah  alternatif pilihan.
            cout<<"\n\t192.168.123.254\n"; 
            
            if (question(1) == "buka_browser"){
                system("start http://192.168.123.254");
            }
            return 0;
            break;//statement peloncatan
        case 20://pernyataan  yang  digunakan  untuk  menanggani pengambilan  keputusan  yang  melibatkan  sejumlah  alternatif pilihan.
            cout<<"\n\t192.168.223.100\n"; 
            
            if (question(1) == "buka_browser"){
                system("start http://192.168.223.100");
            }
            return 0;
            break;//statement peloncatan
	}
    return 0;
}


void signalHandler( int signum ) {
   system("cls"); //untuk membersihkan layar pada program yang akan dijalankan sehingga pemrogram dapat menenentukan saat untuk menghapus data yang telah dijalankan tanpa harus menutup program tersebut dan membukanya kembali.
   // cout << "\n\n\t\tTerima Kasih\n\n";
   exit(signum);  
}


int main(){


	signal(SIGINT, signalHandler);  
	system("cls"); //untuk membersihkan layar pada program yang akan dijalankan sehingga pemrogram dapat menenentukan saat untuk menghapus data yang telah dijalankan tanpa harus menutup program tersebut dan membukanya kembali.

if (::session == "logged" || login() == 0){
	buffer_pilihan = pilihan();
}		
	

	if (eksekusi_program(buffer_pilihan) == 0 || eksekusi_program(buffer_pilihan) == 1){
		if (question(2) == "ulang_program"){
			main();
		}else{ //fungsi menerima nilai jika pernyataan IF yang dibuat tidak memenuhi syarat dari program yang dibuat
			system("cls"); //untuk membersihkan layar pada program yang akan dijalankan sehingga pemrogram dapat menenentukan saat untuk menghapus data yang telah dijalankan tanpa harus menutup program tersebut dan membukanya kembali.
			cout << "\n\n\t\tTerima Kasih\n\n";
			exit(1);
		}
	}

    return 0;//mengembalikan nilai
}

