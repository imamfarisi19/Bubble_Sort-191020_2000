#include <iostream>
#include <stdio.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int hitungJumlah(int arr[], int size){
	int jumlah = 0;
	for(int i = 0; i < size; i++){
		jumlah = jumlah + arr[i];
	}
	return jumlah;
}

int findMax(int arr[], int size ){
	int max = arr[0];
	for(int i = 1; i < size; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	return max;
}

int findMin(int arr[], int size){
	int min = arr[0];
	for(int i = 1; i < size; i++){
		if(arr[i] < min){
			min = arr[i];
		}
	}
	return min;
}

void bubbleSort(int arr[], dint size){
	int i, j, tmp;
	for(i = 0; i < size; i++){
		for(j = 0; j < size - i - 1; j++){
			if(arr[j] > arr[j + 1]){
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}	
}

void printArray(int arr[], int size){
		for(int i = 0; i < size; i++){
		cout << arr[i] << " ";
 	}
}

int main(int argc, char** argv) {
	int A[]={29,32,22,28,31,25,30,27,24,29,
			23,26,33,30,28,26,34,27,30,24,
			28,23,32,22,28,25,27,29,26,31};
	int size = sizeof(A)/sizeof(A[0]);
	int jumlah, min, max, average;
	
	cout << "Jumlah Nilai: " << hitungJumlah(A,size) << endl;
	cout << "Nilai Maximum : " << findMax(A,size) << endl;
	cout << "Nilai Minimum : " << findMin(A,size) << endl;
	bubbleSort(A, size);
	cout << "Sorted Array : \n";
	printArray(A, size);
	return 0;
}
