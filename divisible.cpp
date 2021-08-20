// write all numbers between 100-500 divied by 3 and 5
// loop when you want to execute a block of code multiple times and condition is there.

#include <iostream>
using namespace std;
int main()
{

	int counter = 100;
	while (counter <= 500)
	{
		if (counter % 3 == 0 && counter % 5 == 0)
			cout << counter << "divisible " << endl;
		counter++;
	}
	system("pause> 0");
}
