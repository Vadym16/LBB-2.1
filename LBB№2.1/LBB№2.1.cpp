#include <iostream>

using namespace std;


int main()
{

	setlocale(LC_ALL, "ukr");

	int a, b, c, d, res;
	cout << "Введіть значення a, b ,c ,d: "; 
	cin >> a; cin >> b; cin >> c; cin >> d;
	int del, mno;
	del = (((d << 4) + (d << 2) + d + (a << 3) + (a << 2)) >> 10);
	mno = ((c << 12) + (c << 10) + (c << 8) + (c << 4) + (c << 2) + (c << 1));
	res = ((b << 5) + (b << 1)) + del + mno + (d << 3) + (d << 2) + (d << 1);
	cout << "Ввідповідь: " << res;


}


