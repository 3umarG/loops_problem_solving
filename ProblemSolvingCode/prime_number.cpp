

#include <iostream>
using namespace std;

int main()
{
	int num  , i;
	cin >> num;
	if (num == 1) {
		cout << "NO" << endl;
	}
	else if (num==2)
	{
		cout << "YES" << endl;
	}
	else
	{
		for (i = 2; i < num; i++) {
			if (num % i == 0) {
				break;
			}
		}
		if (i == num) {
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}

	}
	
	return 0;

}
