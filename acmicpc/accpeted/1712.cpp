#include <iostream>
#include <string>
using namespace std;

int main() {
	//�������� A, ���� �Ѵ�� B �������, ��Ʈ�� ������ C
	int A, B, C, n=0;
	cin >> A >> B >> C;
	int profit = C - B; // ������
	if (profit <= 0) {	//�������� 0�������̸� ����X
		cout << -1;
		return 0;
	}

	n = A / profit;

	cout << ++n<<endl;
	return 0;
}