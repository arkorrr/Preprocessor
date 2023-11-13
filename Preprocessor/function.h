#pragma once
#include <iostream>
#include <time.h>
using namespace std;
#define size 5


#define INTEGER 
//#define DOUBLE
/*#define CHAR*/	

#ifdef INTEGER

void RandomValueArray(int* arr)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand();
	}
}
void PrintValueArray(int* arr)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}
void MinValueArray(int* arr)
{
	int min = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	cout << "Minimum value in array: " << min << endl;
}
void MaxValueArray(int* arr)
{
	int max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	cout << "Maximum value in array: " << max << endl;
}
void SortArray(int* arr)
{
	int value = 0;
	for (int i = 0;i < size;i++)
	{
		for (int j = 0;j < size - 1;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				value = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = value;
			}
		}
	}
}
void EditArray(int* arr)
{
	int num = 0;
	int index;
	int newValue;
	do
	{
		cout << "Enter (1),If you want to change value in array: " << endl;
		cout << "Enter (0),If you dont want to change value in array: ";
		cin >> num;
		switch (num)
		{
		case 1:
			cout << "Enter index of value, which you want to change(from 0 to 4): ";
			cin >> index;
			cout << "Enter a newValue: ";
			cin >> newValue;
			arr[index] = newValue;
			PrintValueArray(arr);
			break;
		}
	} while (num != 0);
}

#define RandomValueArrayInt RandomValueArray
#define PrintValueArrayInt PrintValueArray
#define PrintMinValueArrayInt MinValueArray
#define PrintMaxValueArrayInt MaxValueArray
#define PrintSortArrayInt SortArray
#define EditArrayInt EditArray

#endif

#ifdef DOUBLE

void RandomValueArray(double* arr)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand();
	}
}
void PrintValueArray(double* arr)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}
void MinValueArray(double* arr)
{
	int min = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	cout << "Minimum value in array: " << min << endl;
}
void MaxValueArray(double* arr)
{
	int max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	cout << "Maximum value in array: " << max << endl;
}
void SortArray(double* arr)
{
	int value = 0;
	for (int i = 0;i < size;i++)
	{
		for (int j = 0;j < size - 1;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				value = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = value;
			}
		}
	}
}
void EditArray(double* arr)
{
	int num = 0;
	int index;
	int newValue;
	do
	{
		cout << "Enter (1),If you want to change value in array: " << endl;
		cout << "Enter (0),If you dont want to change value in array: ";
		cin >> num;
		switch (num)
		{
		case 1:
			cout << "Enter index of value, which you want to change(from 0 to 4): ";
			cin >> index;
			cout << "Enter a newValue: ";
			cin >> newValue;
			arr[index] = newValue;
			PrintValueArray(arr);
			break;
		}
	} while (num != 0);
}

#define RandomValueArrayDouble RandomValueArray
#define PrintValueArrayDouble PrintValueArray
#define PrintMinValueArrayDouble MinValueArray
#define PrintMaxValueArrayDouble MaxValueArray
#define PrintSortArrayDouble SortArray
#define EditArrayDouble EditArray

#endif

#ifdef CHAR

void RandomValueArray(char* arr)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand();
	}
}
void PrintValueArray(char* arr)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}
void MinValueArray(char* arr)
{
	int min = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	cout << "Minimum value in array: " << min << endl;
}
void MaxValueArray(char* arr)
{
	int max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	cout << "Maximum value in array: " << max << endl;
}
void SortArray(char* arr)
{
	int value = 0;
	for (int i = 0;i < size;i++)
	{
		for (int j = 0;j < size - 1;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				value = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = value;
			}
		}
	}
}
void EditArray(char* arr)
{
	int num = 0;
	int index;
	int newValue;
	do
	{
		cout << "Enter (1),If you want to change value in array: " << endl;
		cout << "Enter (0),If you dont want to change value in array: ";
		cin >> num;
		switch (num)
		{
		case 1:
			cout << "Enter index of value, which you want to change(from 0 to 4): ";
			cin >> index;
			cout << "Enter a newValue: ";
			cin >> newValue;
			arr[index] = newValue;
			PrintValueArray(arr);
			break;
		}
	} while (num != 0);
}


#define RandomValueArrayChar RandomValueArray
#define PrintValueArrayChar PrintValueArray
#define PrintMinValueArrayChar MinValueArray
#define PrintMaxValueArrayChar MaxValueArray
#define PrintSortArrayChar SortArray
#define EditArrayChar EditArray

#endif



