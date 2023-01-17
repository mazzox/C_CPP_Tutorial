#include <stdio.h>
#include <stdint.h>

struct AccumulateData
{
	int64_t sum;
	int64_t num;
};

void NewAccumulateData(struct AccumulateData* data)
{
	data->sum = 0;
	data->num = 0;
}

void Accumulate(struct AccumulateData* data, int64_t value)
{
	data->sum += value;
	data->num++;
}

int64_t accumulateResult(struct AccumulateData* data)
{
	return data->sum / data->num;
}

int main()
{
	struct AccumulateData data;
	NewAccumulateData(&data);

	Accumulate(&data, 10);
	Accumulate(&data, 20);
	Accumulate(&data, 30);
	

	int64_t avg = accumulateResult(&data);
	printf("The average is: %lli", avg);
}
