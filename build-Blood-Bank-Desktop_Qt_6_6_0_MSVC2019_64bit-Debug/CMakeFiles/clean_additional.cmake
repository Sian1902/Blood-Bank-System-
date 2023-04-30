# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "Blood-Bank_autogen"
  "CMakeFiles\\Blood-Bank_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Blood-Bank_autogen.dir\\ParseCache.txt"
  )
endif()
