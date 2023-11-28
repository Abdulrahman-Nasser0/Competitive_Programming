// C++ program for Merge Sort
#include <bits/stdc++.h>
using namespace std;

// Merges two subarrays of array[].
// First subarray is arr[begin..mid]
// Second subarray is arr[mid+1..end]
void merge(int array[], int const left, int const mid, int const right)
{
	int const subArrayOne = mid - left + 1;
	int const subArrayTwo = right - mid;

	auto *leftArray = new int[subArrayOne],
		*rightArray = new int[subArrayTwo];

	for (auto i = 0; i < subArrayOne; i++)
		leftArray[i] = array[left + i];
	for (auto j = 0; j < subArrayTwo; j++)
		rightArray[j] = array[mid + 1 + j];

	auto l = 0, r = 0;
	int i = left;

	while (l < subArrayOne && r < subArrayTwo) {
		if (leftArray[l] <= rightArray[r]) {
			array[i] = leftArray[l];
			l++;
		}
		else {
			array[i] = rightArray[r];
			r++;
		}
		i++;
	}

	while (l < subArrayOne) {
		array[i] = leftArray[l];
		l++;
		i++;
	}

	while (r < subArrayTwo) {
		array[i]
			= rightArray[r];
		r++;
		i++;
	}
	delete[] leftArray;
	delete[] rightArray;
}

void mergeSort(int array[], int const begin, int const end)
{
	if (begin >= end)
		return;

	int mid = begin + (end - begin) / 2;
	mergeSort(array, begin, mid);
	mergeSort(array, mid + 1, end);
	merge(array, begin, mid, end);
}

int main()
{
	int arr[] = { 12, 11, 13, 5, 6, 7, 0 , 1 , 2 ,2  };
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	mergeSort(arr, 0, arr_size - 1);
    for (int i = 0; i < arr_size; i++)
    {
        cout << arr[i] << " ";
    }
    
}
