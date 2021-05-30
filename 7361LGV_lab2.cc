#include <iostream>
using namespace std;
int main  ()
{
	short a[12] = {-12643, -243, 13, 1359, -8, -184, 26548, 429, -81, -2931, 2249,58};
	int i = 0;
	long b = 0;
	for (i=0; i<12; ++i)
	{
		if (a[i]<0)	
		{
													a[i] *= -1;
		}	
		b += a[i];
	}
	cout << b << endl;
	return 0;
}

