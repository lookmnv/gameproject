project(Игра LANGUAGES CXX)

include_directories("${PROJECT_SOURCE_DIR}/SFML/include")
add_subdirectory(SFML)


add_executable(Test test_funcs.cpp test.cpp)
add_executable(Game Игра.cpp)
target_link_libraries(Game PUBLIC sfml-graphics sfml-audio)
