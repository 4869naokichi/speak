add_library(speak SHARED)
target_sources(speak PRIVATE speak.cpp)
target_include_directories(speak PUBLIC ${PROJECT_SOURCE_DIR}/include)