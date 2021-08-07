#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	unsigned long long int a, h = 0, m = 0, s = 0;
	while (cin >> a)
	{
		h = a / 3600;
		a %= 3600;
		m = a / 60;
		a %= 60;
		s = a;
		cout << h << " hours " << m << " minutes and " << s << " seconds";
		if (cin.eof())
			break;
		cout << "\n";
	}
}