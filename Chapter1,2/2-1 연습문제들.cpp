#include <iostream>

using namespace std;

// 1번
//int plus_1(int& ref)
//{
//	return ref + 1;
//}
//
//int reversed_sign(int& ref)
//{
//	if (ref > 0)
//		return -ref;
//	if (ref < 0)
//		return (-1) * ref;
//}

//3번
void SwapPointer(int*ptr1, int*ptr2)
{
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int main(void)
{
	//1번
	/*int n = 1;
	int& ref1 = n;
	cout << plus_1(ref1) << endl;
	cout << reversed_sign(ref1) << endl;*/

	//3번
	/*int num1 = 5;
	int* ptr1 = &num1;

	int num2 = 10;
	int* ptr2 = &num2;

	cout << num1 << " " << num2 << endl;
	SwapPointer(ptr1, ptr2);
	cout << num1 << " " << num2 << endl;*/
}