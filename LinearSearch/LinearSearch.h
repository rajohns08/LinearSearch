#ifndef LINEARSEARCH_H
#define LINEARSEARCH_H

#include <vector>

using namespace std;

// Class for searching through an array or vector with a linear search
template <class T>
class LinearSearch
{
public:
	// One function for array, and another overloaded for vector
	int linearSearch(T arr[], int arrSize, T value);
	int linearSearch(vector<T> arr, T value);
};

#endif