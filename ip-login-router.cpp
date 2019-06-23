#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;
int main()
{
    int a;
    string b,c,d;
pass:
    system("cls");
    cout<<"Username: ";
    cin>>b;
    cout<<"Password: ";
    cin>>c;
    if(b=="admin" && c=="admin")
    {
        system("cls");
    }
    else
    {
        cout<<"Password atau Username yang anda masukkan salah!"<<endl;
        cout<<endl<<"coba lagi? (Y/N)";
        cin>>d;
        if(d=="Y"||"y")
        {
            goto pass;
        }/* 
        if(d=="N"||"n")
        {
            goto selesai;
        }*/
    }
    cout<<"====================================\n";
    cout<<"     Pencarian ip login router      \n";
    cout<<"====================================\n";
    cout<<endl<<endl;
    cout<<"\n\n<<< Menu Pilihan >>>\n\n";
    cout<<"1.Tenda  5.cek1\n";
    cout<<"2.huawai 6.cek2\n";
    cout<<"3.cisco  7.cek3\n";
    cout<<"4.zte    8.cek4\n\n";
menu:
    cout<<"Masukkan Nomor Router: ";
    cin>>a;
     if   (a==1)
    {
        cout<<"ip login router tenda\n";
        cout<<"192.168.23.11";
    }
    else if(a==2)
    {
        cout<<"192.166.77,88";
    }
    else if(a==3)
    {
        cout<<"Nilai anda adalah C";
    }
    else if(a==4)
    {
        cout<<"Nilai anda adalah D";
    }
    
    else
        cout<<"Nilai yang anda masukkan tidak benar!";
        cout<<endl<<"coba lagi? (Y/N)";
        cin>>d;
        if(d=="Y"||"y")
        {
            goto menu;
        }
        else
        {
            system("cls");
        } 
    return 0;
}
