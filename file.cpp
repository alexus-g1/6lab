#include <stdio.h>
#include <iosream.h>
#include <math.h>
void main()
{
	//1st comment
	int a[20] = { 1, 2, 4, 5, 7, 5, 8, 4, 3, 2, 9, 5, 4, 6, 2, 7, 4, 5, 1, 3 };
	int i, s1, s2;
	for (i = 0, s1 = 0, s2 = 0; i < 20; ++i)
	{
		s1 += a[i] / 20;
		s2 += a[i];
	}


	//2nd comment
	int b[20] = { 1, 2, 4, 5, 7, 5, 8, 4, 3, 2, 9, 5, 4, 6, 2, 7, 4, 5, 1, 3 };
	int i, s3, s4;
	for (i = 0, s3 = 0, s4 = 0; i < 20; ++i)
	{
		s3 += b[i] / 20;
		s4 += b[i];
	}


	//3rd comment
	s2 /= a[20];
	s4 /= b[20];
	std::cout << "s1=" << s1 << ", s2=" << s2 << endl;
	return 0;
}