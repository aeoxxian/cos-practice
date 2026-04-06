#include <iostream>
#define BUFLEN 10
using namespace std;
int main(int argc, char *argv[]){
	int arr[BUFLEN];
	int *p;
	char *q;
	short *r;
	int a, i;

	for (i = 0; i<BUFLEN;i++)
		arr[i] = 10-i;

	p = arr + 2;

	cout << "arr[2] = " << arr[2] << endl;
	cout << "arr + 2 = " << arr+2 << endl;
	cout << "*(arr + 2) = " << *(arr + 2) << endl;
	cout << "p = " << p << endl;
	cout << "*p = " << *p << endl;

	return 0;
}
