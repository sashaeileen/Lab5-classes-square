#include <iostream>
#include <locale.h>
#include <conio.h>
using namespace std;
class Square 
{	int a, b;

public: Square (int l, int r) {
			a = l;
			b = r;
		}
		int getS() { return a*b; };
		int getP() { return 2*(a+b);}
};

class Circle 
{	int p;
public: Circle (int e) {
			p = e;
		}
		int getS() {return 3.14*p*p;};
		int getP() {return 2*3.14*p;};
};
void main() {
	setlocale(LC_ALL, "RUS"); 
	int c, d, m;
	cout << "������� ������� �: ";
	cin >> c;
	cout << "������� ������� B: ";
	cin >> d;
	Square a(c, d);
	cout << "������� ��������������: " << a.getS() << endl;
	cout << "�������� ��������������: " << a.getP() << endl;
	cout << "������� ������ �����: ";
	cin >> m;
	Circle p(m);
	cout << "������� �����: " << p.getS() << endl;
	cout << "�������� �����: " << p.getP() << endl;
	system ("pause");
}