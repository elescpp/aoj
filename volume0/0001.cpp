#include <iostream>

using namespace std;

int main(void)
{
	int input[10];

	for(int i = 3; i < 10; i++){
		for(int j = 0; j < 3; j++){
			if(input[i] > input[j]){
				swap(input[i], input[j]);
				break;
			}
		}
	}

	for(int i = 0; i < 3; i++){
		cout << input[i] << endl;
	}


	return 0;
}
