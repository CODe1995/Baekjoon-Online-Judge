#include <iostream>
#include <string>
using namespace std;

int main() {	
	int X,N;	cin >> X;
	int mo, ja;
	//X�� ���� ������ N�� ���� ������
	for(N=1;X>0;)
		X -= N++;	
	N--;
	//����+�и� = N+1
	//N�� Ȧ���� ���ڰ��� �и�����
	//N�� ¦���� �������� �и𰨼�
	if (N % 2) {//¦�����
		ja = 1-X;
		mo = N+X;
	}
	else {
		ja = N+X;
		mo = 1-X;
	}



	cout << ja<<"/"<<mo << endl;

	return 0;
}