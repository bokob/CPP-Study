#include <iostream>
using namespace std;

// 따라친거임

int main(void)
{
	const int num = 12;
	const int* ptr = &num;
	const int* (&ref) = ptr;

	cout << *ptr << endl;
	cout << *ref << endl;
	return 0;
}