# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Calender-Date_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Calender-Date_autogen.dir\\ParseCache.txt"
  "Calender-Date_autogen"
  )
endif()
