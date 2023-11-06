# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\larry_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\larry_autogen.dir\\ParseCache.txt"
  "larry_autogen"
  )
endif()
