#include <iostream>
#include<clocale>
using namespace std;



int trtype(int max, int s2, int s3)
{
	if (max > s2 + s3) return -1; // �������� �� ������������� 
	if (pow(max, 2) > pow(s2, 2) + pow(s3, 2)) // �������� �� ��������������(������� ������� ������� ������ ����� ��������� ������)
		return 0;
	else if (pow(max, 2)< pow(s2, 2) + pow(s3, 2)) // �������� �� ���������������
		return 1;
	else return 2; // ����� �������������
}


int main()
{
	setlocale(LC_CTYPE, "Russian");
	int a, b, c;
	cout<<"������� �������"<<endl;
	cin >> a >> b >> c;
	int max=a;  // ������� ���������� �������
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	int res;
	if (max == a) 
		res = trtype(a, b, c);
	else if (max == b)
		res = trtype(b, c, a);
	else res = trtype(c,b, a);
	if (res ==-1)
		cout << "����������� �� ����������";
	else if(res == 0)
		cout << "������������";
	else if (res == 1)
		cout << "�������������";
	else cout << "�������������";
	return 0;








}