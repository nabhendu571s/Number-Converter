#include<bits/stdc++.h>
using namespace std;
string decimal_Binary(long long int decimal_Num);
string decimal_Hexadecimal(long long int decimal_Num);
long long binary_Decimal(const string& binary_Num);
long long hexadecimal_Decimal(const string& hexadecimal_Num);
bool  display(){
    long long int choice;
    do {
        cout << "Options:\n"
             << "1. Convert Decimal to Binary\n"
             << "2. Convert Decimal to Hexadecimal\n"
             << "3. Convert Binary to Decimal\n"
             << "4. Convert Hexadecimal to Decimal\n"
             << "5. Exit\n"
             << "Enter choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                long long int decimal_Num;
                cout << "Enter decimal number: ";
                cin >> decimal_Num;
                cout << "Binary: " << decimal_Binary(decimal_Num) << endl;
                break;
            }
            case 2: {
                long long int decimal_Num;
                cout << "Enter decimal number: ";
                cin >> decimal_Num;
                cout << "Hexadecimal: " << decimal_Hexadecimal(decimal_Num) << endl;
                break;
            }
            case 3: {
                string binary_Num;
                cout << "Enter binary number: ";
                cin >> binary_Num;
                cout << "Decimal: " << binary_Decimal(binary_Num) << endl;
                break;
            }
            case 4: {
                string hexadecimal_Num;
                cout << "Enter hexadecimal number: ";
                cin >> hexadecimal_Num;
                cout << "Decimal: " << hexadecimal_Decimal(hexadecimal_Num) <<endl;
                break;
            }
            case 5:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);  
}
string decimal_Binary(long long int decimal_Num) {
    stringstream s;
    s<< bitset<8>(decimal_Num);
    return s.str();
}
string decimal_Hexadecimal(long long int decimal_Num) {
    stringstream s;
    s<< hex << uppercase << decimal_Num;
    return s.str();
}
long long binary_Decimal(const string& binary_Num) {
    return stoi(binary_Num, nullptr, 2);
}
long long  hexadecimal_Decimal(const string& hexadecimal_Num) {
    return stoi(hexadecimal_Num, nullptr, 16);
}
signed main(){
    long long int t=1;
    while(t--){
        display();
    }
    return 0;
}