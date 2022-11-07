load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")


cc_library(
    name = "ac",
    srcs = ["AmbiguousCoordinates.cpp"],
    hdrs = ["AmbiguousCoordinates.h"],
)

cc_binary(
    name = "day1",
    srcs = ["main.cpp"],
    deps = [
	":ac"
    ],
)