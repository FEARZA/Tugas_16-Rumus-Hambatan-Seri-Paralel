#include <iostream>
using namespace std;
int hambatanSeri (int a, int b, int c){return a + b + c;}
float hambatanParalel (float i, float j, float k){
int z = i * j * k; float satu, dua, tiga, done, hasil;
satu = (z / i) * 1;dua  = (z / j) * 1; tiga = (z / k) * 1; hasil = (satu + dua + tiga); done = hasil / z;
cout << "\n\nparalel >> "; cout << hasil << "/" << z;
return done;}
int main(){
int in1,in2,in3;
cout << "masukan hambatan pertama\t>> ";cin >> in1;
cout << "masukan hambatan kedua\t\t>> ";cin >> in2;
cout << "masukan hambatan ketiga\t\t>> ";cin >> in3;
cout << "\nSeri "<< hambatanSeri (in1, in2, in3);
cout << "\n\nParalel " << hambatanParalel (in1, in2, in3);
return 0;}
