#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int number; //����� ��������� � ����������
	int reverse = 0; //�������� ����� ���������� � �������� �������
	cout << "������� �����: "; cin >> number;
	int buffer = number;//�������� ��������� ����� ����� ������ ��������� ������������� �� ���������
	while (buffer)
	{
		reverse *= 10;
		reverse += buffer % 10; 
			buffer /= 10;
	}
	cout << number << endl;
	cout << buffer << endl;
	cout << reverse << endl;
	if (reverse==number)
	{
		cout << "��������� " << endl;
	}
	else
	{
		cout << "May be the next time " << endl;
	}

}