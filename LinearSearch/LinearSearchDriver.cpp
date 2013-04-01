#include <iostream>
#include <vector>
#include "LinearSearch.h"
#include "LinearSearch.cpp"

using namespace std;

int main()
{
	const int ARRAY_SIZE = 10;
	double testArray[ARRAY_SIZE] = {1,2,3,4,5,6,7,8,9.3,10};
	vector<double> testVect(testArray, testArray + ARRAY_SIZE);

	LinearSearch<double> linSearchObj;
	int position = linSearchObj.linearSearch(testVect, 12);

	if (position == -1)
	{
		cout << "That value does not exist in the array." << endl;
	}
	else
	{
		cout << "That value exists at postion " << position << endl;
	}

	cin.get();
	return 0;
}