// team 1

#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	int bat;
	string s;
	int n,m;
	int good[6] = {1, 2, 3, 3, 4, 10};
	int evil[7] = {1, 2, 2, 2, 3, 5, 11};
	cin >> n;
	for (int N = 1; N <= n; N++)
	{
		int gt = 0;
		int et = 0;
		int t;

		for (int i = 0; i < 6 && cin >> t; i++)
			gt += good[i] * t;
		for (int i = 0; i < 7 && cin >> t; i++)
			et += evil[i] * t;
					
		cout << "Battle " << N << ": ";
		if (et > gt)
			cout << "Evil eradicates all trace of Good\n";
		else if (gt > et)
			cout << "Good triumphs over Evil\n";
		else
			cout << "No victor on this battle field\n";
	}

	return 0;
}
