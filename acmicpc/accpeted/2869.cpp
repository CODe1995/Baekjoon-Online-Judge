#include <iostream>
#include <string>
using namespace std;
int main() {
	int V, A, B,res=0,i;
	cin >> A >> B >> V;
	//A �ö� B �̲����� V������ǥ

	cout << (V - B) - 1 / (A - B) + 1 << endl;
	return 0;
}