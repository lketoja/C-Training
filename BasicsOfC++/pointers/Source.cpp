#include <iostream>

using namespace std;

void print(const int *const, size_t);
int *combine_arrays(const int[], size_t, const int[], size_t);

int main() {
	const size_t array1_size{ 5 };
	const size_t array2_size{ 3 };

	int array1[]{ 1,2,3,4,5 };
	int array2[]{ 10,20,30 };

	cout << "Array 1: ";
	print(array1, array1_size);

	cout << "Array 2: ";
	print(array2, array2_size);

	int *combined_array = combine_arrays(array1, array1_size, array2, array2_size);
	constexpr size_t combined_array_size{ array1_size * array2_size };

	cout << "Result: ";
	print(combined_array, combined_array_size);

	delete[] combined_array;

	return 0;
}

void print(const int *const array, size_t size) {
	cout << "[";
	for (size_t i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	cout << "]" << endl;

}

int *combine_arrays(const int array1[], size_t array1_size, const int array2[], size_t array2_size){

	int *new_array_ptr;
	new_array_ptr = new int[array1_size * array2_size];

	int k = 0;
	for (size_t i = 0; i < array2_size; i++) {
		for (size_t j = 0; j < array1_size; j++) {
			new_array_ptr[k] = array2[i] * array1[j];
			k++;
		}
	}

	return new_array_ptr;
}