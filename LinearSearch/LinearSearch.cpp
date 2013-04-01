#include "LinearSearch.h"
#include <vector>

using namespace std;

template <class T>
int LinearSearch<T>::linearSearch(T arr[], int arrSize, T value)
{
	// Set position to -1 initially, so we know that if it is still -1 on return, the value wasn't found
	int position = -1;

	// Loop through every element of the array, and check to see if each element is equal to value.
	// If the current element of the array is equal to value, then return the position.
	for (int i = 0; i < arrSize; i++)
	{
		if (arr[i] == value)
		{
			position = i;
			return position;
		}
	}

	// This is where the function returns if the value was never found. it is still -1
	return position;
}

// Exact same function as above, but tailored to work for vectors
template <class T>
int LinearSearch<T>::linearSearch(vector<T> arr, T value)
{
	int position = -1;

	for (size_t i = 0; i < arr.size(); i++)
	{
		if (arr[i] == value)
		{
			position = i;
			return position;
		}
	}

	return position;
}