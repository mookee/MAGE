#pragma once

// encapsulate time related function

namespace MAGE
{
	void SetProcessBeginTime(uint64 time);
	uint64 GetProcessTime();
	uint64 GetHDProcessTime();
	uint64 GetProcessBeginTime();
};