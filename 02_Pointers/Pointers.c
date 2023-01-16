#include <stdio.h>
#include <stdint.h>

void Accumulate(int64_t* sum, int64_t* num, int64_t value)
{
	*sum += value;
	(*num)++;
}

int main()
{
	int64_t sum = 0;
	int64_t num = 0;

	Accumulate(&sum, &num, 10);
	Accumulate(&sum, &num, 20);
	

	int64_t avg = sum / num;
	printf("The average is: %lli", avg);
}
