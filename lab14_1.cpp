#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){

	for(int m = 1 ; m < N;m++){
		for(int j = m ;j > 0 ; j--){
			if(d[j] > d[j-1]){
				T temp = d[j];
				d[j] = d[j-1];
				d[j-1] = temp;
			}
		}
		cout << "Pass " << m << ":";
		for(int o = 0; o < 10; o++) cout << d[o] << " ";	
		cout << endl;

	}

}