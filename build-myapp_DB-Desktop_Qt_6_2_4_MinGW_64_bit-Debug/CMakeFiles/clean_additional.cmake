# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\myapp_DB_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\myapp_DB_autogen.dir\\ParseCache.txt"
  "myapp_DB_autogen"
  )
endif()
