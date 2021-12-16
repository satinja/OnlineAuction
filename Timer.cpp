#include "Timer.h"

int Timer::timeLimitInSeconds;

bool Timer::startTimer()
{
	Timer();

	//std::cout << "Timer started\n";
	if (Timer::timeLimitInSeconds <= 0)
	{
		Timer::timeLimitInSeconds = 60;
	}
	while (Timer::timeLimitInSeconds > 0)
	{
		//std::cout << "current time = " << Timer::timeLimitInSeconds<<"\n";
		Timer::timeLimitInSeconds--;
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}

	return true;
}
