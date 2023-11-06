# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\calender_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\calender_autogen.dir\\ParseCache.txt"
  "calender_autogen"
  )
endif()
