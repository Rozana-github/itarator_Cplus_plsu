//count digital a number

#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "number:";
	cin >> num;
	if (num == 0)
		cout << "you have entered 0";
	else if (num < 0)
		num = -1 * num;
	// 1325
	//counter = 4
	// last digit remove and increase counter
	int counter = 0;
	while (num > 0)
	{
		num /= 10;
		counter++;
	}
	cout << " number contains" << counter << "digitals";
}
