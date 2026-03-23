//Worst case: O(N^2)
//Best case: O(N)

#include "logic.h"

int main() {
	srand(time(NULL));

	int array[DEFAULT_SIZE];
	int size;

	cout << "Input size of array: ";
	cin >> size;

	init_random(array, size, 0, 100);

	print("Before sorting:\n");
	print(convert(array, size));

	sort_insertion(array, size);

	print("\n\nAfter sorting:\n");
	print(convert(array, size));

	return 0;
}