/*
Read number X then read 6 numbers s1, e1, s2, e2, s3, e3 (s < e)
○ These 6 numbers are for 3 interval
○ Each Interval is a range [start, end]
○ Number X in a range if start <= X <= end
○ E.g 7 in range [5, 12] but not in range [10, 20]
Print how many intervals that
X is part of
*/

#include <iostream>
using namespace std;

int main()
{
	int x, s1, e1, s2, e2, s3, e3;

	cin >> x >> s1 >> e1 >> s2 >> e2 >> s3 >> e3;
	int count = 0;
	if (x >= s1 && x <= e1)
		count += 1;
	if (x >= s2 && x <= e2)
		count += 1;
	if (x >= s3 && x <= e3)
		count += 1;

	cout << count << endl;
	return 0;
}
