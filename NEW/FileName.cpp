#include<iostream>

using namespace std;

#define SIZE 10

void IntArray(int* arr)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter array [" << i << "] ", cin >> arr[i];
	}
}

void PrintArray(int* arr)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << ", ";
	}
}

void Zamina(int* arr, int* new_arr)
{
	int index = arr[5];
	int j = 0;

	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] != index)
		{
			new_arr[j] = arr[i];
			j++;
		}
	}
}

int main()
{
	int* arr = new int[SIZE];
	int* new_arr = new int[SIZE - 1];
	IntArray(arr);
	PrintArray(arr);
	cout << endl;
	Zamina(arr, new_arr);
	for (int i = 0; i < SIZE - 1; i++)
	{
		cout << new_arr[i] << ", ";
	}

	return 0;

}