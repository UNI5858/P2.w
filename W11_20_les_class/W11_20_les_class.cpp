#include <iostream>
using namespace std;

struct TV {
	bool poweron; //bool 참 거짓
	int channel;
	int volume;
	void on() {
		poweron = true;
	}
	void off() {
		poweron = false;
	}
	void set_chan(int n){
		channel = n;
	}
	void set_vol(int n) {
		volume = n;
	}
	int get_chan() {
		return channel;
	}
	int get_vol() {
		return volume;
	}
};

int main()
{
	TV myTV;
	myTV.on();
	myTV.set_chan(10);
	myTV.set_vol(50);
	
	cout << "현재 채널은 " << myTV.get_chan() << endl;
	cout << "볼륨은 " << myTV.get_vol() << endl;
}
