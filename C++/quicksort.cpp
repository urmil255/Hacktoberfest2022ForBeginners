#include <iostream>
using namespace std;

void quickSort(int[], int, int);
void printArray(int[], int);

int main() {
	int size = 51;
	int array[] = {88,47,85,70,92,17,58,21,84,10,61,20,45,1,9,93,16,
			41,77,42,8,36,95,86,39,87,51,52,28,57,3,40,72,11,53,
			13,80,49,62,32,73,14,33,79,66,90,15,81,94,59,88};
	cout << "Array:\n";
	printArray(array, size);
	cout << "\nSorted Array:\n";
	quickSort(array, 0, size-1);
	printArray(array, size);
	return 0;
}

void quickSort(int array[], int a, int b) {
	if (b <= a) return;
	int i = a+1;
	int j = b;
	int temp = 0;
	while (i < j) {
		if (array[i] > array[a] && array[j] <= array[a]) {
			temp = array[j];
			array[j] = array[i];
			array[i] = temp;
			i++;
			j--;
		} else if (array[i] <= array[a]) {
			i++;
		} else {
			j--;
		}
	}
	if (array[i] > array[a]) {
		i--;
	}
	temp = array[i];
	array[i] = array[a];
	array[a] = temp;
	quickSort(array, a, i-1);
	quickSort(array, i+1, b);
}

void printArray(int array[], int length) {
	for (int i = 0; i < length; i++) {
		cout << array[i];
		if (i < length-1)
			cout << " - ";
	}
}
