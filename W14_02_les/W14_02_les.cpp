#include <iostream>
#include <string>

using namespace std;
template<typename T>
T getArraySum(const T arr[], int n) {
	T sum = arr[0];
	for (int i = 1; i < n; i++) {
		sum += arr[i];
	}
	return sum;
}
int main()
{
	int arr[] = { 1,2,3,4,5 };
	float farr[] = { 1.1,2.2,3.3,4.4,5.5 };
	double darr[] = { 1.2,3.4,5.6,7.8,9.0 };
	string sarr[] = { "abc","hello","hi" };

	cout << getArraySum<int>(arr, 5) << endl;
	cout << getArraySum<float>(farr, 5) << endl;
	cout << getArraySum<double>(darr, 5) << endl;
	cout << getArraySum<string>(sarr, 3) << endl;
}
