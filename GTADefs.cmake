set(GTADEFS_SOURCES_DIR "${CMAKE_CURRENT_LIST_DIR}/src")

message(STATUS "Building GTADefs...")

file(GLOB_RECURSE GTADEFS_SOURCES
	"${GTADEFS_SOURCES_DIR}/GTA/**.h"
	"${GTADEFS_SOURCES_DIR}/GTA/**.cpp"
)

foreach(FILE ${GTADEFS_SOURCES})
  message(STATUS "Including file: ${FILE}")
endforeach()

include(${CMAKE_CURRENT_LIST_DIR}/RageDefs/RageDefs.cmake)

add_library(GTADefs STATIC ${GTADEFS_SOURCES})
set_property(TARGET GTADefs PROPERTY CXX_STANDARD 23)
target_include_directories(GTADefs PUBLIC ${GTADEFS_SOURCES_DIR} ${RAGEDEFS_SOURCES_DIR})
set_target_properties(GTADefs PROPERTIES LINKER_LANGUAGE CXX)
