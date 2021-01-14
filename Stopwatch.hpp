#pragma once
#include <chrono>

class Stopwatch 
{

private:
	using sw_clock = std::chrono::steady_clock;
	std::chrono::time_point<sw_clock> startTime, endTime;

public:
	Stopwatch() : startTime(sw_clock::now()), endTime(sw_clock::now()) { }

	~Stopwatch() { }

	void start()
	{
		startTime = sw_clock::now();
	}

	void stop()
	{
		endTime = sw_clock::now();
	}

	void restart() 
	{
		startTime = sw_clock::now();
		endTime = sw_clock::now();
	}

	double elapsed() const 
	{ 
		return std::chrono::duration<double>(endTime - startTime).count(); 
	}

	uint64_t elapsedNanoseconds() const 
	{ 
		return std::chrono::duration_cast<std::chrono::nanoseconds>(endTime - startTime).count(); 
	}

	uint64_t elapsedMicroseconds() const 
	{ 
		return std::chrono::duration_cast<std::chrono::microseconds>(endTime - startTime).count(); 
	}

	uint64_t elapsedMilliseconds() const 
	{ 
		return std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime).count(); \
	}

	uint64_t elapsedSeconds() const 
	{ 
		return std::chrono::duration_cast<std::chrono::seconds>(endTime - startTime).count(); 
	}

};

