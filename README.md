This repo contains example C++ files demonstrating separation of concerns and dependency injection.

`split_str_1` has both tokenisation and output mixed together.  `split_str_2` refactors this to separate tokenisation and output into separate methods.  `split_str_3` uses dependency injection to achieve similar ends.

The code can be built using `bazelisk` and `bazel` (see [here](https://github.com/bazelbuild/bazelisk)) using the supplied BUILD file, e.g. `bazel build --cxxopt=-std=c++14 //:split_str_1` and then run with `./bazel-bin/split_str_1`.

Test code is supplied using the GoogleTest framework (Bazel based quick start is [here](https://google.github.io/googletest/quickstart-bazel.html)), e.g. `bazel test --cxxopt=-std=c++14 --test_output=all //:split_str_1_test`. For `split_str_1`, there are only five tests, and it is not possible to separate tokenisation and output.  Separation in the tests is straightforward for `split_str_2`, and is achieved for `split_str_3` by using a test class
derived from `ListOutputStrategy`.

`split_str_4` is very similar to `split_str_2`, but demonstrates how the standard library can be used to shorten the code.
