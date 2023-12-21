cmake_minimum_required(VERSION 3.17)
project(retrocrossR)

set(CMAKE_CXX_STANDARD 14)

# Recherche de SFML
find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)

add_executable(retrocrossR main.cpp)

# Liaison avec les bibliothèques SFML
target_link_libraries(retrocrossR sfml-system sfml-window sfml-graphics sfml-network sfml-audio)

include_directories("/home/pepito/Documents/font/Roboto-MediumItalic.ttf")