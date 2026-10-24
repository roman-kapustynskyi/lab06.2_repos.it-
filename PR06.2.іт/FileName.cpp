#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>

using namespace std;

void create(int mas[], int n) {
	for (int i = 0; i < n; i++) {
		mas[i] = (rand() % 101) - 50;
	}
}
void print(int mas[], int n) {
	for (int i = 0; i < n;i++){
		cout << setw(4) << mas[i];

	}
}

int findMax(int mas[], int n) {
	int max_odd = -1000;
	int max_odd_index = -1;
	for (int i = 0; i < n;i++) {
		if (mas[i] % 2 != 0 && mas[i] > max_odd) {
			max_odd = mas[i];
			max_odd_index = i;
		}
		
	}
	return   max_odd_index;
}
void swapLastWithMax(int mas[], int n, int max_odd_index) {
		if (max_odd_index != -1) {

			int temp = mas[n - 1];
			mas[n - 1] = mas[max_odd_index];
			mas[max_odd_index] = temp;
		
	}
}



int main() {
	srand((unsigned)time(0));

	const int n = 10;
	int a[n];

	create(a, n);
	cout << "Start mas: "; print(a, n);
	cout << endl;
	int index = findMax(a, n);


	if (index != -1) {
		swapLastWithMax(a, n, index);
		cout << "Change mas: "; print(a, n); cout << endl;
	
	}
	else
	cout << "No odd numbers found!";  cout << endl;
			return 0;
		}	
	
