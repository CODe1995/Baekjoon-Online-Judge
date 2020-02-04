#include <iostream>
using namespace std;
char map[2188][2188]; //N�� �ִ�ũ��

void recursive(int y, int x, int n) {
	if (n == 1) {//���� ���ڶ�
		map[y][x] = '*';
		return;
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == 1 && j == 1) {/*�������εд�.*/}
			else
				recursive(i*n/3+y, j*n/3+x, n/3);
		}
	}

}

int main() {//�ټ���°(���)�� ����
	int n; cin >> n;
	for (int i = 0; i < n; i++) {//�ʱ�ȭ
		for (int j = 0; j < n; j++) {
			map[i][j] = ' ';
		}
	}
	
	recursive(0,0,n);
	
	for (int i = 0; i < n; i++) {//���
		for (int j = 0; j < n; j++) {
			cout << map[i][j];
		}
		cout << endl;
	}
	return 0;
}