#include<iostream>
#include<cmath>
using namespace std;

float quarter_of(float month) {

	return ceil(month/3);     // return month %3 ==0? month/3 : month/3 +1; // with integer data type
}

int main()
{
	cout << "we are in the quarter: "<<quarter_of(10);
	return 0;
}