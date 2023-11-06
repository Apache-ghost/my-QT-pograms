# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\LayoutDemo_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\LayoutDemo_autogen.dir\\ParseCache.txt"
  "LayoutDemo_autogen"
  )
endif()
