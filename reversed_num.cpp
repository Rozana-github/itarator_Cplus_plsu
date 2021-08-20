//THIS PROGRAM WILL REVERSED THE NUMBER with while loop

#include <iostream>
using namespace std;
int main()
{
	int num;
	int reversed_num = 0;
	cout << "number:";
	cin >> num;
	while (num != 0)
	{
		reversed_num *= 10;
		//int lastDigit = num % 10;
		//reversed_num + = lastDigit;

		reversed_num += num % 10;
		num /= 10;
	}
	cout << "reversed : " << reversed_num;
	system("pause>0");
}