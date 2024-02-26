#include <iostream>
using namespace std;
int main() {
	int so1, so2, hieu;
	cout << "CHUONG TRiNH TINH HIEU\n";
	cout << "Nhap so thu nhat:";
	cin >> so1;
	cout << "nhap so thu hai:";
	cin >> so2;
	hieu = so1 - so2;
	cout << so1 << "-" << so2 << "="
		<< hieu
		<< endl;
	return 0;
}
