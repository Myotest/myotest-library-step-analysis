
# use the target_link_libraries command to instruct CMake to add our custom
# library as a dependency of this module's library (which always has the same
# name as the module itself)
target_link_libraries(myotest-step-analysis-library "${CMAKE_CURRENT_LIST_DIR}/myotest-step-analysis-library.a")

