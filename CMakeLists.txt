cmake_minimum_required(VERSION 3.2)

# устанавливаем имя проекта и его версию
if(DEFINED ENV{TRAVIS_BUILD_NUMBER})
    message("TRAVIS_BUILD_NUMBER IS DEFINED:" $ENV{TRAVIS_BUILD_NUMBER})
    project(vect_editor_prototype VERSION 0.0.$ENV{TRAVIS_BUILD_NUMBER})
else()
    message("TRAVIS_BUILD_NUMBER IS NOT DEFINED")
    project(vect_editor_prototype VERSION 0.0.1)
endif()

add_subdirectory(src)
