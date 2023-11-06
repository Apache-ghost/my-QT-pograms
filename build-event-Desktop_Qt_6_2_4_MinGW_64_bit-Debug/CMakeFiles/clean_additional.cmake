# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\event_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\event_autogen.dir\\ParseCache.txt"
  "event_autogen"
  )
endif()
