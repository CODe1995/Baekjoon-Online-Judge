//���� ���� �����ϴ� �� ���� ����ϱ�
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <stdio.h>
#pragma warning(disable:4996)
#define MAX 100001
using namespace std;

int cnt[MAX * 10];
pair<int, int>* query;
pair <pair< int, int >, int >* sqrtQuery;
int answer[MAX];
//pair<int,int>* val = new pair<int,int>[MAX];
int val = 0;
int table[MAX] = { 0, };

void Qsub(int numb) {
	table[cnt[numb]]--;
	//�ڱ� �ڽ��� ���� ū ���̹Ƿ�
	if (cnt[numb] != 0 && cnt[numb] == val&&table[cnt[numb]]==0)val--;
	--cnt[numb];
	table[cnt[numb]]++;//�� �ϳ� ��� ������Ʈ
}
void Qsum(int numb) {
	if (cnt[numb]!=0)table[cnt[numb]]--;
	++cnt[numb];
	table[cnt[numb]]++;//������Ű�� ������Ʈ
	if (val < cnt[numb]) {
		val = cnt[numb];
	}
}

int main() {
	int N, M;
	scanf("%d", &N);
	//������ 1���� ���۵Ǳ� ������ 1�� �̸� ��������(����ϱ� ���ϰԲ�)
	int* arr = new int[N + 1];
	for (int i = 1; i < N + 1; i++) {
		scanf("%d", &arr[i]);
	}
	scanf("%d", &M);
	query = new pair<int, int>[M + 1];
	sqrtQuery = new pair<pair<int, int>, int>[M + 1];
	for (int i = 1; i < M + 1; i++) {
		scanf("%d %d", &query[i].first, &query[i].second);
		sqrtQuery[i].first = pair<int, int>(query[i].first / sqrt(N), query[i].second);
		sqrtQuery[i].second = i;//������ �ٲ� i�� ������ ����� �������
	}
	sort(sqrtQuery + 1, sqrtQuery + M + 1);

	int s, e, bs, be;
	s = query[sqrtQuery[1].second].first;
	e = query[sqrtQuery[1].second].second;
	//ù��° �������� �̸� ���� �ľ��صα�
	for (int i = s; i <= e; i++) {
		if (table[cnt[arr[i]]] != 0){ table[cnt[arr[i]]]--; }
		cnt[arr[i]]++;
		table[cnt[arr[i]]]++;
		if (val < cnt[arr[i]]){
			val = cnt[arr[i]];
		}
	}
	//val ������ �ִ밪�� �����صд�
	answer[sqrtQuery[1].second] = val;

	for (int i = 2; i < M + 1; i++) {
		val = answer[sqrtQuery[i - 1].second];
		int qi = sqrtQuery[i].second;
		s = query[qi].first;
		e = query[qi].second;
		bs = query[sqrtQuery[i - 1].second].first;
		be = query[sqrtQuery[i - 1].second].second;
		while (s > bs) Qsub(arr[bs++]);
		while (s < bs) Qsum(arr[--bs]);
		while (e > be) Qsum(arr[++be]);
		while (e < be) Qsub(arr[be--]);
		answer[qi] = val;
	}
	for (int i = 1; i < M + 1; i++) {
		printf("%d\n", answer[i]);
	}
	return 0;
}