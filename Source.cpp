#include <iostream>
#include <cstdlib>
#pragma warning( disable : 4996 )
using namespace std;

int main()
{
	freopen("Input.txt", "rt", stdin);
	freopen("Output.txt", "w+t", stdout);
	int n;
	while (cin>>n)
	{
		long long a, last, ans;
		a = (n + 1) / 2;
		last = a*a * 2 - 1;
		ans = (last - 2) * 3;
		cout << ans << endl;
	}
	return 0;
}