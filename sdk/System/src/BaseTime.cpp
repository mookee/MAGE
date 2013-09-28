#include "stdafx.h"
#include "BaseTime.h"

#ifdef _WIN32
double _GetFreqPerMS()
{
	LARGE_INTEGER freq;
	if (!QueryPerformanceFrequency(&freq))
	{
		throw;
	}
	return 1000000.0 / freq.QuadPart;
}

double GetFreqPerMS()
{
	static double freq = _GetFreqPerMS();
	return freq;
}
#endif

#ifdef _WIN32
uint64 GetHDTime()
{
	LARGE_INTEGER counter;
	QueryPerformanceCounter(&counter);
	return uint64(counter.QuadPart * GetFreqPerMS());
}
#else
uint64 GetHDTime()
{
	timespec ts;
	if (-1 == clock_gettime(CLOCK_MONOTONIC, &ts))
	{
		throw;
	}
	return uint64(ts.tv_sec * 1000000 + ts.tv_nsec / 1000);
}
#endif