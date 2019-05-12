#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>

#include <stdio.h>
#include <iostream>

using namespace std;

void testStack(int x, int y) {
	int a = 1;
	int b = 2;

	printf("&x=%p &y=%p\n", &x, &y);
	printf("&a=%p &b=%p\n", &a, &b);
}



int main() {
	//testStack(2, 4);

	/*int a = 5;
	printf("a %d\n", a);

	int * p_a = &a;
	printf("p_a %d\n", p_a);*/
	//{

		/*int b = 50;
		int *a = new int();
		*a = 50;
		cout << a << endl;*/

		/*int *a = new int();
		*a = 50;
		delete(a);

		_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
		*/

	const unsigned int A_SIZE = 6;
	int numbers[A_SIZE] = { -1, 3, 4, 5, 6, 7 };

	int * p_start = numbers;
	int * p_cursor = p_start;
	int * p_end = numbers + A_SIZE;

	int sum = 0;
	int min = INT_MAX;
	int	max = INT_MIN;
	float avg;

	while (p_cursor < p_end)
	{
		if (min > *p_cursor)
		{
			min = *p_cursor;
		}

		if (max < *p_cursor)
		{
			max = *p_cursor;
		}

		sum += *p_cursor;
		p_cursor += 1;
	}
	
	avg = static_cast<float>(sum) / static_cast<float>(A_SIZE);

	cout << "sum = " << sum << endl;
	cout << "avg = " << avg << endl;
	cout << "min = " << min << endl;
	cout << "max = " << max << endl;

	getchar();
	//}
	//cout << a << endl;
}