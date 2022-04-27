cmake_minimum_required(VERSION 3.14)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(cpp-builder-pattern)

SET(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static")

add_executable(${PROJECT_NAME}
    "src/main.cpp"

    "include/email/builder.hpp"
    "src/email/builder.cpp"

    "include/email/email.hpp"
    "src/email/email.cpp"
    
    )


target_include_directories( ${PROJECT_NAME}
PUBLIC ${PROJECT_SOURCE_DIR}/include
)

# target_link_libraries(${PROJECT_NAME} 
#     sds)