#pragma once
#include <thread>
#include <iostream>

class Timer
{
private:
	static int timeLimitInSeconds;
public:
	Timer()
	{
		timeLimitInSeconds = 60;
	}
	static void setTimeLimitInSeconds(int limit);
	static bool startTimer();
	
};

