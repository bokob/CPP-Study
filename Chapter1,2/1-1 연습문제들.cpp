#include <iostream>

void number_1(void)
{
	int num1[5];
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		std::cout << i+1 << "��° ���� �Է�: ";
		std::cin >> num1[i];
		sum += num1[i];
	}

	std::cout << "�հ�: " << sum;
}

void number_2(void)
{
	char name[10];
	char phone[20];

	std::cout << "�̸��� �����Դϱ�? ";
	std::cin >> name;
	std::cout << "��ȭ��ȣ�� �����Դϱ�? ";
	std::cin >> phone;
	std::cout << "\n\n";
	std::cout << "�̸�: " << name << " ��ȭ��ȣ: " << phone;

}

void number_3(void)
{
	int n;
	std::cout << "�� ���� ����� ���Դϱ�? ";
	std::cin >> n;

	for (int i = 1; i <= 9; i++)
	{
		std::cout << n << " X " << i << " = " << 5 * i << std::endl;
	}
}

void number_4(void)
{
	int before, after;

	while (1)
	{

		std::cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		std::cin >> before;

		if (before == -1)
			break;
		
		after = 50 + before * 0.12;
		std::cout << "�̹� �� �޿�: " << after << "����" << std::endl;
	}
	std::cout << "���α׷��� �����մϴ�.";
}

int main(void)
{
	//number_1();
	//number_2();
	//number_3();
	//number_4();
}