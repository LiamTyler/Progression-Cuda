if (NOT PROGRESSION_DIR)
    set(PROGRESSION_DIR ${CMAKE_CURRENT_SOURCE_DIR}/ext/Progression)
endif()

set(PROGRESSION_INCLUDE_DIRS
    ${PROGRESSION_DIR}/ext
    ${PROGRESSION_DIR}/ext/glfw/include
    ${PROGRESSION_DIR}/progression
    ${PROGRESSION_DIR}/progression/src
)

set(SYSTEM_LIBS "")
if (UNIX AND NOT APPLE)
    set(SYSTEM_LIBS
        dl
    )
endif()

set(PROGRESSION_LIBS
    glfw
    ${SYSTEM_LIBS}
)

if (PROGRESSION_AUDIO)
    set(PROGRESSION_LIBS ${PROGRESSION_LIBS} openal sndfile)
endif()

if (NOT PROGRESSION_LIB_DIR)
    set(PROGRESSION_LIB_DIR ${CMAKE_BINARY_DIR}/lib)
endif()

if (NOT PROGRESSION_BIN_DIR)
    set(PROGRESSION_BIN_DIR ${CMAKE_BINARY_DIR}/bin)
endif()

link_directories(${PROGRESSION_LIB_DIR})
include_directories(${PROGRESSION_INCLUDE_DIRS})
