#include <iostream>
#include <string>
using namespace std;

int main() {
	int alpha[26] = {0,};
	int n,cnt=0;
	bool flag = true;
	cin >> n;
	while (n--) {
		string str; cin >> str;
		//��� �˻� false�Ǹ� �ٷ� break;
		for (int i = 0;i<str.size();i++) {
			char ch = str[i];//�Է°�
			char bch=NULL;			
			//alpha ����
			//�ٵ�, ���� ch�� �����ϸ� ���� X
			if (i > 0) {
				bch = str[i - 1];
				if (bch != ch) { alpha[ch - 'a']++; }
				if (alpha[ch - 'a'] > 1) {
					flag = false;
					break;
				}
			}else{ alpha[ch - 'a']++; }
		}
		if (flag)
			cnt++;
		//�ʱ�ȭ
		flag = true;
		for (int i = 0; i < 26; i++)
			alpha[i] = 0;
	}
	cout << cnt << endl;
	return 0;
}