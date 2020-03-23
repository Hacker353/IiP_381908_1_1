#pragma once

enum class ExceptionType { outOfBoundsArray,UnacceptableDeg};
struct Exception
{
	ExceptionType error;
	Exception(ExceptionType _error);
};




class Polinom
{
	int deg; 
	double* cft;
public:
	Polinom();                 // ����������� �� ���������
	Polinom(const Polinom& c);// ����������� �����������
	Polinom(int _deg, double* _cft);// ����������� �������������
	Polinom(int _deg);           // ����������� �������������� ����
	~Polinom();                 // ����������



   
    double value(Polinom c, double x); // �������� � �������� �����
    void derv(Polinom& c);             // ����������� ������� ��������
    Polinom operator + (const Polinom&);   //�������� �������� ���� ���������
    Polinom operator = (const Polinom&);   //�������� ������������
	double& operator[](int ind); // �������� ���������� 
    const double& operator[](int ind) const; //�������� ���������� ��� ����������� ��������
	void OutputPolinom();   //������� ������ ��������

	friend std::ostream& operator<< (std::ostream& stream, Polinom& p); //���� � �����
	friend std::istream& operator>> (std::istream& stream, Polinom& p); // ����� �� ������
   




};
