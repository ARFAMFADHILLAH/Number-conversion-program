#include <iostream>
#include <sstream>
#include <bitset>
#include <iomanip>

using namespace std;

string toBiner(int desimal){
    return bitset<32>(desimal).to_string();
}

string toHexa(int desimal){
    stringstream ss;
    ss << hex << desimal;
    return ss.str();
}

string toOktal(int desimal){
    stringstream ss;
    ss << oct << desimal;
    return ss.str();
}

int main(){
    int choice, desimal;

    do{
        cout << "MENU KONVERSI BILANGAN" << endl;
        cout << "1. Desimal ke biner" << endl;
        cout << "2. Desimal ke oktal" << endl;
        cout << "3. Desimal ke hexadesimal" << endl;
        cout << "4. Keluar program" << endl;
        cout << "Masukkan pilihan anda [1/2/3/4] : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Masukkan angka desimal : ";
            cin >> desimal;
            cout << "Maka Binernya adalah: " << toBiner(desimal) << "\n" << endl;
            break;
        case 2:
            cout << "Masukkan angka desimal : ";
            cin >> desimal;
            cout << "Maka Oktalnya adalah: " << toOktal(desimal) << "\n" << endl;
            break;
        case 3:
            cout << "Masukkan angka desimal : ";
            cin >> desimal;
            cout << "Maka Hexadesimalnya adalah: " << toHexa(desimal) << "\n" << endl;
            break;
        case 4:
            return(0);
        default:
            cout << "Pilihan yang anda masukkan tidak valid" << "\n" << endl;
        }
    } while (true);
}