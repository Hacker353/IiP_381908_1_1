#pragma once

class Rational
{
	int n;
	int m;
public:
	Rational();                 // ����������� �� ���������
	Rational(const Rational& c);// ����������� �����������
	Rational(int _num, int _dem);// ����������� �������������
	Rational(int _n);             // ����������� �������������� ����
	~Rational();                  // ����������
	void output(const char* name);// ����� �����
	void check(int _n, int _m);

};
