# Test scaffolding for xr-voice-sdk
#
# The upstream repository currently does not enable a unit test framework (CTest/GTest/CMocka)
# in its main build. This directory is added as a stub so test wiring can be introduced
# without impacting existing builds.
#
# To enable in the future:
#  - call enable_testing() in the top-level CMakeLists.txt
#  - add_subdirectory(tests)
#  - choose a framework (e.g., CMocka or GTest) and link against the xr-voice-sdk target

# Intentionally empty for now.
