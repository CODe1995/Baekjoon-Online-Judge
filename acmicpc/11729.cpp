//#include <iostream>
//using namespace std;
//int A[20], B[20], C[20];
//
//int main() {
//	int N; cin >> N;
//	for (int i = 0; i < N; i++) {//초기화, 가장 큰녀석을 맨 앞에
//		A[i] = N - i;
//	}
//	int posA=N-1, posB=0, posC=0;//최대 꼭대기층을 가리킨다
//
//	for (int i = 0;; i++) {
//		/*
//		1. A블럭 -> B, C에 올릴 수 있는지 확인한다. (A가 빌 떄 까지)
//		2. C가 우선시되며 안되면 B로 간다.
//		3. 만약 B와 C 둘 다 안된다면?
//		4. B 최상단과 C 최상단을 비교해서 더 작은값을 더 큰 값으로 옮긴다.
//		5. 반복
//		*/
//		//종료조건
//		if (C[0] == N && C[N - 1] == 1) {
//			//C 테이블의 맨 아래층이 최대값, 맨 위층이 최소값이니 종료!!!!
//		}
//		else {
//			if (A[posA] < C[posB]) {//C로 이동하는게 우선
//
//			}
//
//		}
//
//	}
//	return 0;
//}