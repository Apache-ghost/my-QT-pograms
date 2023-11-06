# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "Adding_a_window_autogen"
  "CMakeFiles\\Adding_a_window_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Adding_a_window_autogen.dir\\ParseCache.txt"
  )
endif()
