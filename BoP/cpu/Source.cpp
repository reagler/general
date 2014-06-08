#include <stdio.h>
#include <Windows.h>

void main()
{
	const DWORD busyTime = 10; // 10ms
	const DWORD idleTime = busyTime; // same ratio will lead to 50% cpu usage

	_int64 startTime = 0;
	while (true)
	{
		DWORD startTime = GetTickCount();
		//busy loop
		while ((GetTickCount() - startTime) <= busyTime);

		Sleep(idleTime);
	}
}