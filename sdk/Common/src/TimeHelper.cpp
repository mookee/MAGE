#include "stdafx.h"
#include "CTimeCheckPoint.h"

namespace MAGE
{
	static CTimeCheckPoint s_process_time;
	
	void SetProcessBeginTime(uint64 time)
	{
		s_process_time.SetProcessBeginTime(time);
	}

	uint64 GetProcessTime()
	{
		return s_process_time.GetElapse();
	}

	uint64 GetHDProcessTime()
	{
		return s_process_time.GetHDElapse();
	}

	uint64 GetProcessBeginTime()
	{
		return s_process_time.GetProcessBeginTime();
	}
}