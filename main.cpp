#include <iostream>

using namespace std;

int main()
{
    float a,b,hasil;
    char aritmatika;
    cout << "Selamat Datang Di Program Calculator \n" <<endl;
    cout << "Masukkan Bilangan Pertama : ";
 cin >> a;
 cout << "Pilih Operator +,-,*,/ : ";
 cin >> aritmatika;
 cout << "Masukkan Bilangan Kedua : " << endl;
 cin >> b;
 cout << "Hasil : " << endl;

 switch(aritmatika){
  case '+': hasil = a + b;
   cout << a << aritmatika << b << " = " << hasil << endl;
  break;
  case '-': hasil = a - b;
   cout << a << aritmatika << b << " = " << hasil << endl;
  break;
  case '*': hasil = a * b;
   cout << a << aritmatika << b << " = " << hasil << endl;
  break;
  case '/': hasil = a / b;
   cout << a << aritmatika << b << " = " << hasil << endl;
  break;
  default : cout << "Operator Anda Salah" << endl;
 }
}
