# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Qmessagebox_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Qmessagebox_autogen.dir\\ParseCache.txt"
  "Qmessagebox_autogen"
  )
endif()
