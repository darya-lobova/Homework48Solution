#include "logic.h"

void init_random(int array[], int length, int a, int b) {
	if (a > b) {
		int t = a;
		a = b;
		b = t;
	}
	for (int i = 0; i < length; i++)
	{
		array[i] = rand() % (b - a + 1) + a;
	}
}

void init_user(int array[], int length) {
	cout << "Input array elements: ";
	for (int i = 0; i < length; i++)
	{
		cout << "array[" << i + 1 << "]: ";
		cin >> array[i];
	}
}

void sort_insertion(int array[], int length)
{
	for (int i = 1; i < length; ++i) {
		int key = array[i];
		int j = i - 1;

		
		while (j >= 0 && array[j] > key) {
			array[j + 1] = array[j];
			j = j - 1;
		}
		array[j + 1] = key;
	}
}


void print(string s) {
	cout << s;
}


string convert(int array[], int length) {
	string s = to_string(array[0]);

	for (int i = 1; i < length; i++)
	{
		s += " " + to_string(array[i]);
	}

	return s;
}
