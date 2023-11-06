# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\ggg_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\ggg_autogen.dir\\ParseCache.txt"
  "ggg_autogen"
  )
endif()
