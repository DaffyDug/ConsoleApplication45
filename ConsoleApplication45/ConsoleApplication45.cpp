#include <iostream>
using namespace std;

//void RandArray_SumArray__OneToOne_Array()
//{
//	int a, b;
//	cin >> a >> b;
//	int* arr = new int[a];
//	int* arr2 = new int[b];
//	int* arr3 = new int[a + b + 1];
//
//	for (int i = 0; i < a; i++)
//	{
//		arr[i] = rand() % 10;
//		arr2[i] = rand() % 10;
//		arr3[i] = arr[i];
//	}
//
//	for (int i = a; i < a + b; i++)
//	{
//		arr3[i] = arr2[i - a];
//	}
//
//	for (int i = 0; i < a + b; i++)
//	{
//		cout << arr3[i] << "\t";
//	}
//
//	for (int i = 0; i < a; i++)
//	{
//		for (int j = 0; j < b; j++)
//		{
//			if (arr[i] == arr2[j])
//			{
//				int* arr4 = new int[i + 1];
//				arr4[i] == arr[i];
//				cout << arr4[i] << '\t';
//			}
//		}
//	}
//}

void sum(int** a, int** b, int** c)
{
	**c = **a + **b;
}

int main()
{
	srand(time(0));

	int a1 = 25;
	int b1 = 400;
	int result;
	int* pa = &a1;
	int* pb = &b1;
	int* presult = &result;
	sum(&pa, &pb, &presult);
	cout << result;



	/*int* arr = new int[200];
	int* P_arr;

	for (int i = 0; i < 200; i++)
	{
		arr[i] = rand() % 8 + 56;
		cout << arr[i] << '\n';
	}
	delete[]arr;*/
}
