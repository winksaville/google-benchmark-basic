/**
 * From https://github.com/google/benchmark#basic-usage
 */
#include "benchmark/benchmark.h"

static void BM_StringCreation(benchmark::State& state) {
  for (auto _ : state)
    std::string empty_string;
}
// Register the function as a benchmark
BENCHMARK(BM_StringCreation);

// Define another benchmark
static void BM_StringCopy(benchmark::State& state) {
  std::string x = "hello";
  for (auto _ : state)
    std::string copy(x);
}
BENCHMARK(BM_StringCopy);
BENCHMARK(BM_StringCopy)->Threads(6);
BENCHMARK(BM_StringCopy)->ThreadRange(1, 1024);

BENCHMARK_MAIN();
