#include <iostream>

using namespace std;
int main(){
double sayi1;
double sayi2;
double sonuc;
char islem;
char devamEt;
do{


cout << "1. Sayiyi girin" << endl;
cin >> sayi1;
cout << "Yapmak istediginiz islemi giriniz" << endl;
cin >> islem;
cout << "2. Sayiyi girin" << endl;
cin >> sayi2;
if(islem == +){
sonuc = sayi1 + sayi2;
cout << "Sonuc: " << sonuc << endl;
}
else if(islem == -){
sonuc = sayi1 - sayi2;
cout << "Sonuc: " << sonuc << endl;
}
else if(islem == *){
sonuc = sayi1 * sayi2;
cout << "Sonuc: " << sonuc << endl;
}
else if(islem == /){
if(sayi2 == 0){
cout << "Hata: 0'a bolemezsiniz" << endl;
}
else{
sonuc = sayi1 / sayi2;
cout << "Sonuc: " << sonuc << endl;
}
}
else{
cout << "Gecersiz islem girdiniz"; << endl;
}
cout << "Baska bir islem yapmak ister misiniz? (E/H): "  << endl;;
cin >> devamEt;
}while(devamEt == 'E' || devamEt == 'e');
cout << "Gule Gule!" << endl;
return 0;

}