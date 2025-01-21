#include <iostream>
#include <algorithm>
using namespace std;

//int* my_find(int* start, int* end, int value)
template<typename T1, typename T2>

int* my_find(T1 start, T1 end, T2 value) //T1�� ���� int *p�� ġȯ�ȴ�.
{
	for (; start != end; start++) { //start�� �迭�� �ּҸ� ������ �ִ�.
		if (*start == value) 
			return start;
	} //for�� ���� start�� ���� end�� ����.
}

void exam1() {
	int arr[5] = { 12.123, 14, 13, 21 };

	//���� 1st -> 2nd
	//��ȯ Ÿ��: ���� Ÿ�԰� ���� 
	int* p = my_find(arr, arr + 5, 13);

	if (p == arr + 5)
		cout << "����." << endl;
	else
		cout << *p << endl;
}

/*
void exam2() {
	char arr[5] = { 'a', 'b', 'c', 'd'. 'e' };

	char* p = my_find(arr, arr + 5, 'e');

	if (p == arr + 5)
		cout << "����." << endl;
	else
		cout << *p << endl;
}
*/


void exam3() {
	int arr[5] = { 12.123, 14, 13, 21 };

	//���� 1st -> 2nd
	//��ȯ Ÿ��: ���� Ÿ�԰� ���� 
	int* p = find<int*, int>(arr, arr + 5, 13);

	if (p == arr + 5)
		cout << "����." << endl;
	else
		cout << *p << endl;


	sort(arr, arr + 5); //���迡 ���ü� �ִ�-> ���� ������ 

	for (int i = 0; i < 5; i++) {
		cout << arr[i] << endl;
	}
}


int main() {

	exam3();

	return 0;
}