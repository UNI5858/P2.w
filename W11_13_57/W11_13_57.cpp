#include <iostream>
using namespace std;
enum week {
	일,
	월,
	화,
	수,
	목,
	금,
	토
};
int main() {
	int x;
	cout << "요일을 숫자로 입력하세요: ";
	cin >> x;
	switch (x) {
	case 일:
		cout << "일요일입니다\n";
		break;
	case 월:
		cout << "월요일입니다\n";
		break;
	case 화:
		cout << "화요일입니다\n";
		break;
	case 수:
		cout << "수요일입니다\n";
		break;
	case 목:
		cout << "목요일입니다\n";
		break;
	case 금:
		cout << "금요일입니다\n";
		break;
	case 토:
		cout << "토요일입니다\n";
		break;
	default:
		cout << "잘못된 입력입니다.\n\n";
		main();

	}
	
	
}