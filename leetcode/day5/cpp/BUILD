load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")


cc_library(
    name = "so",
    srcs = ["so.cpp"],
    hdrs = ["so.h"],
)

cc_binary(
    name = "day5",
    srcs = ["main.cpp"],
    deps = [
	":so"
    ],
)