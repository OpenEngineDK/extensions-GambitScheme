
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D___LIBRARY")
SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -D___LIBRARY")

FIND_PATH(GAMBIT_INCLUDE_DIR gambit.h ${OE_LIB_DIR}/gambit/include)
FIND_PATH(GAMBIT_LIB_DIR _gambc.c ${OE_LIB_DIR}/gambit/lib)

INCLUDE_DIRECTORIES(${GAMBIT_INCLUDE_DIR})


# Create the extension library
ADD_LIBRARY(Extensions_GambitScheme
  Scripting/GambitScheme.h
  Scripting/GambitScheme.cpp
  Scripting/init.c
  Scripting/init_.c
)

FIND_LIBRARY(GAMBIT_LIB gambc
  ${OE_LIB_DIR}/gambit/lib
  NO_DEFAULT_PATH
)

TARGET_LINK_LIBRARIES(Extensions_GambitScheme
  ${GAMBIT_LIB}
  util # <- cross platform?
)
