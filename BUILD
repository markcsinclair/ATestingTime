cc_library(
    name = "split_str_1_lib",
    srcs = ["split_str_1_lib.cpp"],
    hdrs = ["split_str_1_lib.h"],
)

cc_binary(
    name = "split_str_1",
    srcs = ["split_str_1.cpp"],
    deps = [":split_str_1_lib"],
)

cc_library(
    name = "split_str_2_lib",
    srcs = ["split_str_2_lib.cpp"],
    hdrs = ["split_str_2_lib.h"],
)

cc_binary(
    name = "split_str_2",
    srcs = ["split_str_2.cpp"],
    deps = [":split_str_2_lib"],
)

cc_library(
    name = "split_str_3_lib",
    srcs = ["split_str_3_lib.cpp"],
    hdrs = ["split_str_3_lib.h"],
)

cc_binary(
    name = "split_str_3",
    srcs = ["split_str_3.cpp"],
    deps = [":split_str_3_lib"],
)

cc_test(
    name = "split_str_1_test",
    size = "small",
    srcs = ["split_str_1_test.cpp"],
    deps = [
    	":split_str_1_lib",
        "@googletest//:gtest",
        "@googletest//:gtest_main",
    ],
)

cc_test(
    name = "split_str_2_test",
    size = "small",
    srcs = ["split_str_2_test.cpp"],
    deps = [
    	":split_str_2_lib",
        "@googletest//:gtest",
        "@googletest//:gtest_main",
    ],
)

cc_test(
    name = "split_str_3_test",
    size = "small",
    srcs = ["split_str_3_test.cpp"],
    deps = [
    	":split_str_3_lib",
        "@googletest//:gtest",
        "@googletest//:gtest_main",
    ],
)
