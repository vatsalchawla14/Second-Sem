#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> arr) {
	for (int val : arr) {
		cout << val << ' ';
	}
	cout << endl;
}

void reverse(vector<int>& arr) {
	int size = arr.size();
	if (size < 2) return;

	for (int i = 0; i < size / 2; i++) {
		int temp = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = temp;
	}
}

void find(vector<int> arr) {
	int size = arr.size();

	if (size < 2) { 
		cout << "Not enough elements to Find!\n"; 
		return; 
	}

	int max = INT_MIN, min = INT_MAX;
	int secMax = max, secMin = min;

	for (int val : arr) {
		if (val > max) max = val;
		if (val < min) min = val;
	}

	for (int val : arr) {
		if (val > secMax && val < max) secMax = val;
		if (val < secMin && val > min) secMin = val;
	}

	cout << "Second Largest value: " << secMax << endl;
	cout << "Second Smallest value: " << secMin << endl;
}

int main() {
	int size;

	cout << "Enter size of array: ";
    cin >> size;
	vector<int> arr(size);

	for (int i = 0; i < size; i++) {
		cout << "Enter " << i + 1 <<" element: ";
		cin >> arr[i];
	}

	cout << "Original array: "; print(arr);
	reverse(arr); 
	cout << "Reversed array: "; print(arr);

	find(arr);
	return 0;
}
