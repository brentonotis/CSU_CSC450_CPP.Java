/*
 * MemMgt1.cpp
 *
 *  Created on: Jan 20, 2019
 *  Author: Brenton Otis
 *  
 * Program demonstrating array management, iteration, pointer, and memory mgmt (cleanup) in C++
 */
#include <iostream>
using namespace std;

int main () {
	int numItems;
	cout << "how many items? ";
	cin >> numItems;
	int *arr = new int[numItems];
	for (int i = 0; i < numItems; ++i) {
		cout << "enter item " << i << ": ";
		cin >> arr[i];
	}
	for (int i = 0; i < numItems; ++i) {
		cout << arr[i] << endl;
	}
	delete[] arr;
}



