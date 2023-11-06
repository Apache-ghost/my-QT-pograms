# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\SplitterDemo_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\SplitterDemo_autogen.dir\\ParseCache.txt"
  "SplitterDemo_autogen"
  )
endif()
