#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

int main(void)
{
	array<int, 10> input;

	for(int i = 0; i < 10; i++){
		cin >> input[i];
	}

	for(int i = 0; i < 3; i++){
		for(int j = i; j < 10; j++){
			if(input[j] > input[i]){
				swap(input[j], input[i]);
			}
		}
	}


	for(int i = 0; i < 3; i++){
		cout << input[i] << endl;
	}


	return 0;
}

