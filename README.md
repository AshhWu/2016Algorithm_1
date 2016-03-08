# 2016Algorithm_hw_01
Simple sorting problem

**Init version**
Analysis result:
|| **Status** |
|---|---|
|**OS X**         |[![Build Status](https://ci.swift.org/job/oss-swift-incremental-RA-osx/badge/icon)](https://ci.swift.org/job/oss-swift-incremental-RA-osx)|
|**Ubuntu 14.04** |[![Build Status](https://ci.swift.org/job/oss-swift-incremental-RA-linux-ubuntu-14_04/badge/icon)](https://ci.swift.org/job/oss-swift-incremental-RA-linux-ubuntu-14_04)|
|**Ubuntu 15.10** |[![Build Status](https://ci.swift.org/job/oss-swift-incremental-RA-linux-ubuntu-15_10/badge/icon)](https://ci.swift.org/job/oss-swift-incremental-RA-linux-ubuntu-15_10)|

|I_refs|=111363392|
|check |=1.000000 |
cpu_time=30162
flt=1364
gcc=0
heap_lost=0
illegal_func=0
illegal_header=0
m_error=0
m_peak=59457536
maxrss=2170880
@lang=cpp

**Final version**
Analysis result:
I_refs=94385289
check=1.000000
cpu_time=24234
flt=1108
gcc=0
heap_lost=0
illegal_func=0
illegal_header=0
m_error=0
m_peak=58478592
maxrss=1437696
@lang=cpp

#Conclusion
The first version's maximun resident size (maxrss) had much more bigger than Final version.
I did it just by discarding the stringstream and using a char to do the input.
Although it seems clumsy, it does reduce the maxrss and also the CPU time.
So, if there are a great amount of data to be inputed, it is better to avoid using stingstream.
Cause stringstream use too mush memory to do the buffer things.
But there are still pros of using it, such as reading a line of seperated ints or strings until '\n' which can simply be done by getline() and split it by ss<<str -> ss>>(int or str).
And the cons of using char and reading it digit by digit is that it is really indigenous, and it can cause many bugs.
This is just my rough conclusion.

