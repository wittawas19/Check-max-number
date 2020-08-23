#include <stdio.h>

int main() 
{
	int n = 3 , mx = -1e9;
	for ( int i = 0; i < n; i++)
	{
		int input ;
		scanf_s("%d",&input);
		if (input > mx)
		{
			mx = input;
		}
	}
	printf("%d", mx);
	
}