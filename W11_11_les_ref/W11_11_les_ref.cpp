
#include <iostream>
using namespace std;
void swap(int &a, int &b) { //참조 변수 (참조에 의한 호출)
	int tmp = a;            //Call-by-Reference - p.178
	a = b;
	b = tmp;
}
int main()
{
	int a, b;

	cout << "두 숫자 입력: ";
	cin >> a >> b;

	swap(a, b);
	cout << "a = " << a << ", b= " << b << endl;
}
