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

void Zamina(int* arr)
{
	int temp = arr[0];
	arr[0] = arr[4];
	arr[4] = temp;
}

void DeleteElement(int* arr, int* new_arr)
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
	new_arr += arr[SIZE-1];
}

void Menu()
{
	int* arr = new int[SIZE];
	int* new_arr = new int[SIZE - 1];
	IntArray(arr);
	int num = 0;
	do {
		cout << "1. Виконати заміну елементів\n2. Виконати видалення елемента\n3. Виконати 1 та 2\n4. Вивести масив\n5. Вийти\n", cin >> num;
		switch (num)
		{
		case(1):
			Zamina(arr);
			break;
		case(2):
			DeleteElement(arr, new_arr);
			for (int i = 0; i < SIZE - 1; i++)
			{
				cout << new_arr[i] << ", ";
			}
			break;
		case(3):
			Zamina(arr);
			DeleteElement(arr, new_arr);
			break;
		case(4):
			PrintArray(arr);
			cout << endl;
			break;
		case(5):
			cout << "До побачення!" << endl;
			break;
		default:
			cout << "Невiрний вибiр, спробуйте ще раз." << endl;
			break;
		}
	} while (num != 5);

}

int main()
{
	setlocale(LC_ALL, "");
	Menu();

	return 0;

}
