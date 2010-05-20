
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D___LIBRARY")
SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -D___LIBRARY")

FIND_PATH(GAMBIT_INCLUDE_DIR gambit.h /usr/include /usr/local/include)

INCLUDE_DIRECTORIES(${GAMBIT_INCLUDE_DIR})


# Create the extension library
ADD_LIBRARY(Extensions_GambitScheme
  Scripting/GambitScheme.h
  Scripting/GambitScheme.cpp
  Scripting/init.c
  Scripting/init_.c
)


FIND_LIBRARY(GAMBIT_LIB gambc /opt/local/lib/gambit-c )

TARGET_LINK_LIBRARIES(Extensions_GambitScheme
  ${GAMBIT_LIB}

)