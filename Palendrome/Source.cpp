#include <iostream>

//#define task_1
//#define task_2

void main()
{
	setlocale(LC_ALL, "Rus");
#if defined task_1
#define CONST_1 1
	do {
		std::cout << "������� 6 ����� ��� �������� ������: ";
		char one, two, three, four, five, six, summ_1, summ_2;
		std::cin >> one >> two >> three >> four >> five >> six;
		summ_1 = one + two + three;
		summ_2 = four + five + six;
		switch (summ_1 == summ_2)
		{
		case CONST_1: std::cout << "����� ���������� \n\n"; break;
		default: std::cout << "����� �� ����������\n\n"; break;
		}
	} while (1);
#endif //task_1

#if defined task_2

#define W 1
	do
	{
		std::cout << "������� 5 ������� ����� ��� ��������: ";
		char one, two, three, four, five;
		std::cin >> one >> two >> three >> four >> five;
		switch (one == five && two == four)
		{
		case W:std::cout << "���������\n\n"; break;
		default:std::cout << " �� ���������\n\n"; break;
		}
	} while (1);
#endif //task_2
}