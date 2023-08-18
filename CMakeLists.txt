cmake_minimum_required(VERSION 3.23)
project(covv_gme)

set(CMAKE_CXX_STANDARD 23)

add_executable(covv_gme main.cpp charr/creature.hpp charr/player.hpp charr/monster.hpp charr/postion.hpp env.hpp input.hpp randomg.hpp)
