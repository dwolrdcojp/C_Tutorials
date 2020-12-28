#include <stddef.h>
#include <stdio.h>

int get_average(const int *marks, size_t count);

int main()
{
	const int marks[] = {2, 5, 6, 9};
	int n = get_average(marks, 4);
	printf("The average is %d\n", n); 
	return 0;
}

int get_average(const int *marks, size_t count)
{
	int avg = 0;
	for (int i = 0; i < count; i++)
	{
		avg += marks[i];
	}
	return avg/count;
}
