# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/TodoAPP_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/TodoAPP_autogen.dir/ParseCache.txt"
  "TodoAPP_autogen"
  )
endif()
