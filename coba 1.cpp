#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <csignal>

using namespace std;

string username, password, buffer_qst, session;
int input_user, buffer_pilihan, salah_password;
char qst;

int login(){

	system("cls");

	cout<<"Username: ";
    cin>>username;
    cout<<"Password: ";
    cin>>password;

    if (username == "admin" && password == "admin"){
    	::session = "logged";
    	return 0;
    }else{
    	if (salah_password == 2){
    		cout << "\n\t ERROR | LOGIN GAGAL 3X\n\n";
    		exit(1);
    	}
    	salah_password++;	
    	login();
    	
    }
    return 0;
}


int pilihan(){

	system("cls");

	cout<<"====================================\n";
    cout<<"     Pencarian ip login router      \n";
    cout<<"====================================\n";
    cout<<endl<<endl;
    cout<<"\n<<< Menu Pilihan >>>\n\n";
    cout<<"1.Tenda  5.krupuk\n";
    cout<<"2.huawai 6.ayam\n";
    cout<<"3.cisco  7.opor\n";
    cout<<"4.zte    8.gedang\n\n";

    cout<<"Masukkan Nomor Router: ";
    cin>>input_user;

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
	switch(arg){
		case 1:
        	cout<<"\n\t192.168.23.11\n";
        	if (question(1) == "buka_browser"){
        		system("start http://192.168.23.11");
        	}
        	return 0;
        	break;
       	case 2:
        	cout<<"\n\t192.166.77.88\n"; 
        	
        	if (question(1) == "buka_browser"){
        		system("start http://192.166.77,88");
        	}
        	return 0;
        	break;
	}
    return 0;
}


void signalHandler( int signum ) {
   system("cls");
   // cout << "\n\n\t\tTerima Kasih\n\n";
   exit(signum);  
}


int main(){


	signal(SIGINT, signalHandler);  
	system("cls");

if (::session == "logged" || login() == 0){
	buffer_pilihan = pilihan();
}		
	

	if (eksekusi_program(buffer_pilihan) == 0 || eksekusi_program(buffer_pilihan) == 1){
		if (question(2) == "ulang_program"){
			main();
		}else{
			system("cls");
			cout << "\n\n\t\tTerima Kasih\n\n";
			exit(1);
		}
	}

    return 0;
}