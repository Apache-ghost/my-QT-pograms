# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\firstapp_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\firstapp_autogen.dir\\ParseCache.txt"
  "firstapp_autogen"
  )
endif()
