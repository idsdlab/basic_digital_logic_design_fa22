// integer2binary_conversion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>

/*
int main()
{
	std::cout << "Hello World!\n";

	printf("Hello World!\n");
}
*/

int main()
{
	//int input = 0;
	//char input = 0;
	unsigned char input = 0;
	int mask;

	while (true)
	{
		printf("Input Number(Decimal: if you input zero then exit): ");
		scanf_s("%ud", &input);

		if (input == 0)
		{
			break;
		}

		for (int i = (8-1); i >= 0; i--)
		{
			mask = 1 << i;
			printf("%d", input & mask ? 1 : 0);

			if (i % 8 == 0)
				printf(" ");
		}
		printf("\n");
	}

	return 0;
}
// 출처: https://gracefulprograming.tistory.com/112 [Peter의 우아한 프로그래밍:티스토리]


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
