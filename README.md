# Stopwatch
A lightweight header only stopwatch class to use for time measurements

# Usage

```c++
#include <iostream>
#include <vector>
#include "StopWatch.h"

#define NUM_ITERATIONS 1000000

int main() {

	Stopwatch sw;
	std::vector<int> numbers;

	sw.start();
	for (int i = 0; i < NUM_ITERATIONS; i++) {
		numbers.push_back(i);
	}
	sw.stop();

	std::cout << "Elapsed: " << sw.elapsed() << " seconds." << std::endl;
	std::cout << "Elapsed: " << sw.elapsedNanoseconds() << "ns" << std::endl;
	std::cout << "Elapsed: " << sw.elapsedMicroseconds() << "mus" << std::endl;
	std::cout << "Elapsed: " << sw.elapsedMilliseconds() << "ms" << std::endl;
	std::cout << "Elapsed: " << sw.elapsedSeconds() << "s" << std::endl;

	return 0; 
}
```
