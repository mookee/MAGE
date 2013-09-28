#pragma once

// recode a time and calc the elapse time

namespace MAGE
{
	class CTimeCheckPoint
	{
	public:
		CTimeCheckPoint();

		uint64 GetElapse() const;		// msec
		uint64 GetHDElapse() const;		// usec

		void SetProcessBeginTime(uint64 time);
		uint64 GetProcessBeginTime() const;

	private:
		uint64	m_basetime;
	};
}