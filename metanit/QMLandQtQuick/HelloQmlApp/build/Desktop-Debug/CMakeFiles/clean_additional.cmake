# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\appHelloQmlApp_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\appHelloQmlApp_autogen.dir\\ParseCache.txt"
  "appHelloQmlApp_autogen"
  )
endif()
