#include <iostream>
#include <algorithm>
using namespace std;

//int* my_find(int* start, int* end, int value)
template<typename T1, typename T2>

int* my_find(T1 start, T1 end, T2 value) //T1은 이후 int *p로 치환된다.
{
	for (; start != end; start++) { //start는 배열의 주소를 가지고 있다.
		if (*start == value) 
			return start;
	} //for문 이후 start의 값은 end와 같다.
}

void exam1() {
	int arr[5] = { 12.123, 14, 13, 21 };

	//구간 1st -> 2nd
	//반환 타입: 구간 타입과 동일 
	int* p = my_find(arr, arr + 5, 13);

	if (p == arr + 5)
		cout << "없다." << endl;
	else
		cout << *p << endl;
}

/*
void exam2() {
	char arr[5] = { 'a', 'b', 'c', 'd'. 'e' };

	char* p = my_find(arr, arr + 5, 'e');

	if (p == arr + 5)
		cout << "없다." << endl;
	else
		cout << *p << endl;
}
*/


void exam3() {
	int arr[5] = { 12.123, 14, 13, 21 };

	//구간 1st -> 2nd
	//반환 타입: 구간 타입과 동일 
	int* p = find<int*, int>(arr, arr + 5, 13);

	if (p == arr + 5)
		cout << "없다." << endl;
	else
		cout << *p << endl;


	sort(arr, arr + 5); //시험에 나올수 있다-> 구간 나누기 

	for (int i = 0; i < 5; i++) {
		cout << arr[i] << endl;
	}
}


int main() {

	exam3();

	return 0;
}