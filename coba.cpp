#include <iostream>


using namespace std;

void kali(int* a, int* b, int* c)
{
	*c = *a * (*b);
}


void bagi(float* a, float* b, float* c)
{
	*c = *a/(*b);
}

int main()
{
	int a = 10;
	int b = 12;
	int c;
	float d;
	
	kali(&a,&b,&c);
	
	
	float ax = (float)a;
	float bx = (float)b;
	bagi(&bx, &ax, &d);
	
	cout << "hasil kali adalah " << c << endl;
	cout << "hasil bagi adalah " << d << endl;
}
