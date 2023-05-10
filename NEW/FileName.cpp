#include<iostream>

using namespace std;

void IntArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Enter array [" << i << "] ", cin >> arr[i];
	}
}

void PrintArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ", ";
	}
}

int main()
{
	int size; 
	cout << "Enter size: ", cin >> size;

	int* arr = new int[size];
	cout << endl;
	IntArray(arr, size);
	PrintArray(arr, size);
	
	return 0;

}