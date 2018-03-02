# Example Google benchmark on Linux

A simple example using regular Makefiles to build a Google benchmark on
Linux.

The file basic.cc is from https://github.com/google/benchmark#basic-usage
And lib/Makefile based on: https://codereview.stackexchange.com/questions/138328/gnu-makefile-for-google-benchmark

# Prerequisites

Required to be installed for building: git, clang, ar and probably other stuff.

Required to be installed for run: cpupower.

# Example on Arch Linux system

## Building:
```
$ make
make -C lib
make[1]: Entering directory '/home/wink/prgs/test-gbenchmark/basic/lib'
mkdir -p obj
git clone https://github.com/google/benchmark.git benchmark
Cloning into 'benchmark'...
remote: Counting objects: 4263, done.
remote: Compressing objects: 100% (29/29), done.
remote: Total 4263 (delta 14), reused 17 (delta 8), pack-reused 4222
Receiving objects: 100% (4263/4263), 1.31 MiB | 10.94 MiB/s, done.
Resolving deltas: 100% (2766/2766), done.
git clone https://github.com/google/googletest.git benchmark/googletest
Cloning into 'benchmark/googletest'...
remote: Counting objects: 10573, done.
remote: Compressing objects: 100% (8/8), done.
remote: Total 10573 (delta 1), reused 5 (delta 1), pack-reused 10564
Receiving objects: 100% (10573/10573), 3.15 MiB | 13.34 MiB/s, done.
Resolving deltas: 100% (7794/7794), done.
clang -Ibenchmark/include -Ibenchmark/src -std=c++11 -O3 -Wall -Wextra -Wshadow -Werror -pedantic -pedantic-errors -Wfloat-equal -fstrict-aliasing -Wstrict-aliasing -Wno-invalid-offsetof -DNDEBUG -DHAVE_POSIX_REGEX -DHAVE_STD_REGEX -DHAVE_STEADY_CLOCK -c -o obj/benchmark.o benchmark/src/benchmark.cc
clang -Ibenchmark/include -Ibenchmark/src -std=c++11 -O3 -Wall -Wextra -Wshadow -Werror -pedantic -pedantic-errors -Wfloat-equal -fstrict-aliasing -Wstrict-aliasing -Wno-invalid-offsetof -DNDEBUG -DHAVE_POSIX_REGEX -DHAVE_STD_REGEX -DHAVE_STEADY_CLOCK -c -o obj/benchmark_register.o benchmark/src/benchmark_register.cc
clang -Ibenchmark/include -Ibenchmark/src -std=c++11 -O3 -Wall -Wextra -Wshadow -Werror -pedantic -pedantic-errors -Wfloat-equal -fstrict-aliasing -Wstrict-aliasing -Wno-invalid-offsetof -DNDEBUG -DHAVE_POSIX_REGEX -DHAVE_STD_REGEX -DHAVE_STEADY_CLOCK -c -o obj/colorprint.o benchmark/src/colorprint.cc
clang -Ibenchmark/include -Ibenchmark/src -std=c++11 -O3 -Wall -Wextra -Wshadow -Werror -pedantic -pedantic-errors -Wfloat-equal -fstrict-aliasing -Wstrict-aliasing -Wno-invalid-offsetof -DNDEBUG -DHAVE_POSIX_REGEX -DHAVE_STD_REGEX -DHAVE_STEADY_CLOCK -c -o obj/commandlineflags.o benchmark/src/commandlineflags.cc
clang -Ibenchmark/include -Ibenchmark/src -std=c++11 -O3 -Wall -Wextra -Wshadow -Werror -pedantic -pedantic-errors -Wfloat-equal -fstrict-aliasing -Wstrict-aliasing -Wno-invalid-offsetof -DNDEBUG -DHAVE_POSIX_REGEX -DHAVE_STD_REGEX -DHAVE_STEADY_CLOCK -c -o obj/complexity.o benchmark/src/complexity.cc
clang -Ibenchmark/include -Ibenchmark/src -std=c++11 -O3 -Wall -Wextra -Wshadow -Werror -pedantic -pedantic-errors -Wfloat-equal -fstrict-aliasing -Wstrict-aliasing -Wno-invalid-offsetof -DNDEBUG -DHAVE_POSIX_REGEX -DHAVE_STD_REGEX -DHAVE_STEADY_CLOCK -c -o obj/console_reporter.o benchmark/src/console_reporter.cc
clang -Ibenchmark/include -Ibenchmark/src -std=c++11 -O3 -Wall -Wextra -Wshadow -Werror -pedantic -pedantic-errors -Wfloat-equal -fstrict-aliasing -Wstrict-aliasing -Wno-invalid-offsetof -DNDEBUG -DHAVE_POSIX_REGEX -DHAVE_STD_REGEX -DHAVE_STEADY_CLOCK -c -o obj/counter.o benchmark/src/counter.cc
clang -Ibenchmark/include -Ibenchmark/src -std=c++11 -O3 -Wall -Wextra -Wshadow -Werror -pedantic -pedantic-errors -Wfloat-equal -fstrict-aliasing -Wstrict-aliasing -Wno-invalid-offsetof -DNDEBUG -DHAVE_POSIX_REGEX -DHAVE_STD_REGEX -DHAVE_STEADY_CLOCK -c -o obj/csv_reporter.o benchmark/src/csv_reporter.cc
clang -Ibenchmark/include -Ibenchmark/src -std=c++11 -O3 -Wall -Wextra -Wshadow -Werror -pedantic -pedantic-errors -Wfloat-equal -fstrict-aliasing -Wstrict-aliasing -Wno-invalid-offsetof -DNDEBUG -DHAVE_POSIX_REGEX -DHAVE_STD_REGEX -DHAVE_STEADY_CLOCK -c -o obj/json_reporter.o benchmark/src/json_reporter.cc
clang -Ibenchmark/include -Ibenchmark/src -std=c++11 -O3 -Wall -Wextra -Wshadow -Werror -pedantic -pedantic-errors -Wfloat-equal -fstrict-aliasing -Wstrict-aliasing -Wno-invalid-offsetof -DNDEBUG -DHAVE_POSIX_REGEX -DHAVE_STD_REGEX -DHAVE_STEADY_CLOCK -c -o obj/reporter.o benchmark/src/reporter.cc
clang -Ibenchmark/include -Ibenchmark/src -std=c++11 -O3 -Wall -Wextra -Wshadow -Werror -pedantic -pedantic-errors -Wfloat-equal -fstrict-aliasing -Wstrict-aliasing -Wno-invalid-offsetof -DNDEBUG -DHAVE_POSIX_REGEX -DHAVE_STD_REGEX -DHAVE_STEADY_CLOCK -c -o obj/sleep.o benchmark/src/sleep.cc
clang -Ibenchmark/include -Ibenchmark/src -std=c++11 -O3 -Wall -Wextra -Wshadow -Werror -pedantic -pedantic-errors -Wfloat-equal -fstrict-aliasing -Wstrict-aliasing -Wno-invalid-offsetof -DNDEBUG -DHAVE_POSIX_REGEX -DHAVE_STD_REGEX -DHAVE_STEADY_CLOCK -c -o obj/statistics.o benchmark/src/statistics.cc
clang -Ibenchmark/include -Ibenchmark/src -std=c++11 -O3 -Wall -Wextra -Wshadow -Werror -pedantic -pedantic-errors -Wfloat-equal -fstrict-aliasing -Wstrict-aliasing -Wno-invalid-offsetof -DNDEBUG -DHAVE_POSIX_REGEX -DHAVE_STD_REGEX -DHAVE_STEADY_CLOCK -c -o obj/string_util.o benchmark/src/string_util.cc
clang -Ibenchmark/include -Ibenchmark/src -std=c++11 -O3 -Wall -Wextra -Wshadow -Werror -pedantic -pedantic-errors -Wfloat-equal -fstrict-aliasing -Wstrict-aliasing -Wno-invalid-offsetof -DNDEBUG -DHAVE_POSIX_REGEX -DHAVE_STD_REGEX -DHAVE_STEADY_CLOCK -c -o obj/sysinfo.o benchmark/src/sysinfo.cc
clang -Ibenchmark/include -Ibenchmark/src -std=c++11 -O3 -Wall -Wextra -Wshadow -Werror -pedantic -pedantic-errors -Wfloat-equal -fstrict-aliasing -Wstrict-aliasing -Wno-invalid-offsetof -DNDEBUG -DHAVE_POSIX_REGEX -DHAVE_STD_REGEX -DHAVE_STEADY_CLOCK -c -o obj/timers.o benchmark/src/timers.cc
ar rcs libbenchmark.a obj/benchmark.o obj/benchmark_register.o obj/colorprint.o obj/commandlineflags.o obj/complexity.o obj/console_reporter.o obj/counter.o obj/csv_reporter.o obj/json_reporter.o obj/reporter.o obj/sleep.o obj/statistics.o obj/string_util.o obj/sysinfo.o obj/timers.o
make[1]: Leaving directory '/home/wink/prgs/test-gbenchmark/basic/lib'
clang -std=c++11 -pthread -c basic.cc -o basic.o
clang basic.o ./lib/libbenchmark.a -lstdc++ -lm -pthread -o basic
```

## Run
```
$ make run
sudo cpupower frequency-set --governor performance
[sudo] password for wink:
Setting cpu: 0
Setting cpu: 1
Setting cpu: 2
Setting cpu: 3
Setting cpu: 4
Setting cpu: 5
Setting cpu: 6
Setting cpu: 7
Setting cpu: 8
Setting cpu: 9
Setting cpu: 10
Setting cpu: 11
./basic
2018-03-02 12:37:07
Running ./basic
Run on (12 X 3600 MHz CPU s)
CPU Caches:
  L1 Data 32K (x6)
  L1 Instruction 32K (x6)
  L2 Unified 256K (x6)
  L3 Unified 15360K (x1)
---------------------------------------------------------
Benchmark                  Time           CPU Iterations
---------------------------------------------------------
BM_StringCreation          5 ns          5 ns  128899697
BM_StringCopy             12 ns         12 ns   57043156
sudo cpupower frequency-set --governor powersave
Setting cpu: 0
Setting cpu: 1
Setting cpu: 2
Setting cpu: 3
Setting cpu: 4
Setting cpu: 5
Setting cpu: 6
Setting cpu: 7
Setting cpu: 8
Setting cpu: 9
Setting cpu: 10
Setting cpu: 11
```

## Distribution clean
```
$ make distclean
rm -f basic.o basic
make -C lib distclean
make[1]: Entering directory '/home/wink/prgs/test-gbenchmark/basic/lib'
rm -f obj/benchmark.o obj/benchmark_register.o obj/colorprint.o obj/commandlineflags.o obj/complexity.o obj/console_reporter.o obj/counter.o obj/csv_reporter.o obj/json_reporter.o obj/reporter.o obj/sleep.o obj/statistics.o obj/string_util.o obj/sysinfo.o obj/timers.o libbenchmark.a
rm -rf benchmark obj
make[1]: Leaving directory '/home/wink/prgs/test-gbenchmark/basic/lib'
```
