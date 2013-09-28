#include "stdafx.h"
#include "CTimeCheckPoint.h"
#include "BaseTime.h"

namespace MAGE
{

	CTimeCheckPoint::CTimeCheckPoint()
	{
		SetProcessBeginTime(GetHDTime());
	}

	void CTimeCheckPoint::SetProcessBeginTime(uint64 time)
	{
		m_basetime = time;
	}

	uint64 CTimeCheckPoint::GetProcessBeginTime() const
	{
		return m_basetime;
	}

	uint64 CTimeCheckPoint::GetElapse() const
	{
		return GetHDElapse() / 1000;
	}

	uint64 CTimeCheckPoint::GetHDElapse() const
	{
		return GetHDTime() - m_basetime;
	}

}