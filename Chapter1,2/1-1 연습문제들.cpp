#include <iostream>

void number_1(void)
{
	int num1[5];
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		std::cout << i+1 << "번째 정수 입력: ";
		std::cin >> num1[i];
		sum += num1[i];
	}

	std::cout << "합계: " << sum;
}

void number_2(void)
{
	char name[10];
	char phone[20];

	std::cout << "이름이 무엇입니까? ";
	std::cin >> name;
	std::cout << "전화번호가 무엇입니까? ";
	std::cin >> phone;
	std::cout << "\n\n";
	std::cout << "이름: " << name << " 전화번호: " << phone;

}

void number_3(void)
{
	int n;
	std::cout << "몇 단을 출력할 것입니까? ";
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

		std::cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
		std::cin >> before;

		if (before == -1)
			break;
		
		after = 50 + before * 0.12;
		std::cout << "이번 달 급여: " << after << "만원" << std::endl;
	}
	std::cout << "프로그램을 종료합니다.";
}

int main(void)
{
	//number_1();
	//number_2();
	//number_3();
	//number_4();
}