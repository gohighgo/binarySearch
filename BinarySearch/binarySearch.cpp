#include <iostream>
using namespace std;

const int n = 10;

void print(int *arr, int n)
{
	/*
	Function prints arrays.
	arr[] - array
	n - length of the array
	*/
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int binarySearch(int *arr, int el, int start, int end) {
	int mid = (end - start) / 2;
	if ((el < arr[0])||(el > arr[end]))
		return -1;
	else if (arr[mid] < el)
		return binarySearch(arr, el, mid + 1, end);
	else if (arr[mid] > el)
		return binarySearch(arr, el, start, mid - 1);
	else
		return mid;
}

int main() {
	int *arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = i+2;
	}


	print(arr, n);
	int choice = 0;

	cout << "Enter your number: "; cin >> choice;

	cout << binarySearch(arr, choice, 0, n) << endl;
	system("pause");
	return 0;
}
