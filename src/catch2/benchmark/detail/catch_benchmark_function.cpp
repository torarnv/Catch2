/*
 *  Distributed under the Boost Software License, Version 1.0. (See accompanying
 *  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

#include <catch2/benchmark/detail/catch_benchmark_function.hpp>

namespace Catch {
    namespace Benchmark {
        namespace Detail {
            BenchmarkFunction::callable::~callable() = default;
            } // namespace Detail
    } // namespace Benchmark
} // namespace Catch
