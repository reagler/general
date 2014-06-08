#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

// 把正弦曲线0-2pi之间的弧度等分成200份进行抽样，计算每个抽样点的振幅
// 然后每隔300ms的时间取下一个抽样点，并让cpu工作对应振幅的时间

const int SAMPLING_COUNT = 200;
const double PI = 3.14159265358;
const int TOTAL_AMPLITUDE = 300; //每个抽样点对应的时间片

int main(int argc, char* argv[])
{
	DWORD busySpan[SAMPLING_COUNT];
	int amplitude = TOTAL_AMPLITUDE / 2;
	double radian = 0.0;
	double radianIncrement = 2.0 / (double)SAMPLING_COUNT; //抽样弧度的增量
	for (int i = 0; i < SAMPLING_COUNT; i++)
	{
		busySpan[i] = (DWORD)(amplitude + (sin(PI * radian) * amplitude));
		radian += radianIncrement;
		printf("%d\t%d\n", busySpan[i], TOTAL_AMPLITUDE - busySpan[i]);
	}

	DWORD startTime = 0;

	for (int j = 0;; j = (j + 1) % SAMPLING_COUNT)
	{
		startTime = GetTickCount();
		while ((GetTickCount() - startTime) <= busySpan[j])
		{
		}
		Sleep(TOTAL_AMPLITUDE - busySpan[j]);
	}
	return 0;
}
