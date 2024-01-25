cmake_minimum_required(VERSION 3.20.0)
project(LearnECS VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_FLAGS "-Wall ${CMAKE_CXX_FLAGS}")
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

file(GLOB COMPOSOURCES ${CMAKE_SOURCE_DIR}/src/Creepy/*.cpp)
# file(GLOB ULTISSOURCES ${CMAKE_SOURCE_DIR}/src/Ultilitis/*.cpp)
# file(GLOB IMGUI ${CMAKE_SOURCE_DIR}/src/imgui/*.cpp)

# add_executable(CreepyEngineDemo main.cpp ${COMPOSOURCES} ${ULTISSOURCES} ${IMGUI})

add_executable(LearnECS main.cpp)

target_sources(LearnECS PUBLIC ${COMPOSOURCES})

target_include_directories(${PROJECT_NAME} 
    PUBLIC ${CMAKE_SOURCE_DIR}/include
)

target_link_directories(${PROJECT_NAME}
    PUBLIC ${CMAKE_SOURCE_DIR}/lib
)

target_link_libraries(${PROJECT_NAME}
    sfml-graphics sfml-window sfml-system sfml-audio openal32
)