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

void sort_selection(int array[], int length) {
	for (int i = 0; i < length - 1; i++) {
		int min_index = i;
		for (int j = i + 1; j < length; j++) {
			if (array[j] < array[min_index]) {
				min_index = j;
			}
		}

		int t = array[min_index];
		array[min_index] = array[i];
		array[i] = t;
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
