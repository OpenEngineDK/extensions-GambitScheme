
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D___LIBRARY")
SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -D___LIBRARY")

# Create the extension library
ADD_LIBRARY(Extensions_GambitScheme
  Scripting/GambitScheme.h
  Scripting/GambitScheme.cpp
  Scripting/init.c
  Scripting/init_.c
)

FIND_LIBRARY(GAMBIT_LIB gambc)

TARGET_LINK_LIBRARIES(Extensions_GambitScheme
  ${GAMBIT_LIB}

)