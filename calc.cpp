#include <iostream>


using namespace std;

int kali(int a, int b);
int tambah(int a, int b);
int kurang(int a, int b);


int main(){

int a = 10;
int b = 0;


int d = kali(a,b);
int e = tambah(a,b);
int f = kurang(a,b);


cout << "Hasil kali : " << d << endl;
cout << "Hasil tambah : " << e << endl;
cout << "Hasil kurang : " << f << endl;
	

return 0;
}

int kali(int a, int b){
return a*b;
}

int tambah(int a, int b){
return a+b;
}

int kurang(int a, int b){
return a-b;
}
