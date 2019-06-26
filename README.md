# IP-Login-Router-
Program yang dapat menampilkan IP Login Router dari beberapa router

/************************************************SCRIPT*********************************/

#include <iostream> //file header yang berfungsi sebagai standar input outut operasi pada c++
#include <cstdlib> //file header yang berfungsi mendefinisikan pencarian, pengurutan dan konversi 
#include <conio.h> //file header yang berfungsi menampilkan hasil antarmuka kepada user 
#include <csignal> //library yang berfungsi menangani sinyal untuk menginformasikan proses yang berjalan 

using namespace std; //untuk mendeklarasikan fungsi atau class yang merupakan bagian dari namespace std yang bersangkutan 

string username, password, buffer_qst, session;
int input_user, buffer_pilihan, salah_password;
char qst;

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
    return 0;
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

    return input_user;
}

string question(int kode){
	if (kode == 1){
		cout << "\n\t\t [?] apakah anda membuka ingin membuka browser ? [Y/n] ";
		cin >> qst;

		if (qst == 'Y' || qst == 'y'){
			return "buka_browser";
		}else{
			return "cancel_browser";
		}
	}else if(kode == 2){
		cout << "\n\t [?] apakah anda mengulang program ? [Y/n] ";
		cin >> qst;

		if (qst == 'Y' || qst == 'y'){
			return "ulang_program";
		}else{
			return "exit_program";
		}
	}

	return "null";
}

int eksekusi_program(int arg){
	switch(arg){ //pernyataan untuk menjalankan salah satu pernyataan dari beberapa kemungkinan pernyataan
		case 1:
        	cout<<"\n\t192.168.23.11\n";
        	if (question(1) == "buka_browser"){
        		system("start http://192.168.23.11");
        	}
        	return 0;
        	break;
       	case 2:
        	cout<<"\n\t192.168.8.1\n"; 
        	
        	if (question(1) == "buka_browser"){
        		system("start http://192.168.8.1");
        	}
        	return 0;
        	break;
         case 3:
            cout<<"\n\t192.168.0.30\n"; 
            
            if (question(1) == "buka_browser"){
                system("start http://192.168.0.30");
            }
            return 0;
            break;
        case 4:
            cout<<"\n\t192.168.100.100\n"; 
            
            if (question(1) == "buka_browser"){
                system("start http://192.168.100.100");
            }
            return 0;
            break;
        case 5:
            cout<<"\n\t192.168.0.254\n"; 
            
            if (question(1) == "buka_browser"){
                system("start http://192.168.0.254");
            }
            return 0;
            break;
        case 6:
            cout<<"\n\t192.166.77.88\n"; 
            
            if (question(1) == "buka_browser"){
                system("start http://192.166.77.88");
            }
            return 0;
            break;
        case 7:
            cout<<"\n\t10.10.1.1\n"; 
            
            if (question(1) == "buka_browser"){
                system("start http://10.10.1.1");
            }
            return 0;
            break;
        case 8:
            cout<<"\n\t192.168.1.99\n"; 
            
            if (question(1) == "buka_browser"){
                system("start http://192.168.1.99");
            }
            return 0;
            break;
        case 9:
            cout<<"\n\t192.168.2.1\n"; 
            
            if (question(1) == "buka_browser"){
                system("start http://192.168.2.1");
            }
            return 0;
            break;
        case 10:
            cout<<"\n\t192.168.1.10\n"; 
            
            if (question(1) == "buka_browser"){
                system("start http://192.168.1.10");
            }
            return 0;
            break;
        case 11:
            cout<<"\n\t192.168.0.101\n"; 
            
            if (question(1) == "buka_browser"){
                system("start http://192.168.0.101");
            }
            return 0;
            break;
        case 12:
            cout<<"\n\t192.168.0.227\n"; 
            
            if (question(1) == "buka_browser"){
                system("start http://192.168.0.227");
            }
            return 0;
            break;
        case 13:
            cout<<"\n\t192.168.50.1\n"; 
            
            if (question(1) == "buka_browser"){
                system("start http://192.168.50.1");
            }
            return 0;
            break;
        case 14:
            cout<<"\n\t192.168.1.254\n"; 
            
            if (question(1) == "buka_browser"){
                system("start http://192.168.1.254");
            }
            return 0;
            break;
        case 15:
            cout<<"\n\t192.168.1.1\n"; 
            
            if (question(1) == "buka_browser"){
                system("start http://192.168.1.1");
            }
            return 0;
            break;
        case 16:
            cout<<"\n\t192.168.0.30\n"; 
            
            if (question(1) == "buka_browser"){
                system("start http://192.168.0.30");
            }
            return 0;
            break;
        case 17:
            cout<<"\n\t192.168.10.1\n"; 
            
            if (question(1) == "buka_browser"){
                system("start http://192.168.10.1");
            }
            return 0;
            break;
        case 18:
            cout<<"\n\t192.168.1.254\n"; 
            
            if (question(1) == "buka_browser"){
                system("start http://192.168.1.254");
            }
            return 0;
            break;
        case 19:
            cout<<"\n\t192.168.123.254\n"; 
            
            if (question(1) == "buka_browser"){
                system("start http://192.168.123.254");
            }
            return 0;
            break;
        case 20:
            cout<<"\n\t192.168.223.100\n"; 
            
            if (question(1) == "buka_browser"){
                system("start http://192.168.223.100");
            }
            return 0;
            break;
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

    return 0;
}
