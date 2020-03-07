cmake_minimum_required(VERSION 3.2)

set(TARGET_NAME vect_editor_prototype)

set(COMMANDS_SOURCES_PATH   ${CMAKE_CURRENT_SOURCE_DIR}/commands)
set(CONTROLLER_SOURCES_PATH ${CMAKE_CURRENT_SOURCE_DIR}/controller)
set(DOCUMENT_SOURCES_PATH   ${CMAKE_CURRENT_SOURCE_DIR}/document)
set(SHAPES_SOURCES_PATH     ${CMAKE_CURRENT_SOURCE_DIR}/shapes)
set(UI_SOURCES_PATH         ${CMAKE_CURRENT_SOURCE_DIR}/ui)

file(GLOB_RECURSE COMMANDS_HEADERS  ${COMMANDS_SOURCES_PATH}/*.h)
file(GLOB_RECURSE COMMANDS_SRC      ${COMMANDS_SOURCES_PATH}/*.cpp)

file(GLOB_RECURSE CONTROLLER_HEADERS    ${CONTROLLER_SOURCES_PATH}/*.h)
file(GLOB_RECURSE CONTROLLER_SRC        ${CONTROLLER_SOURCES_PATH}/*.cpp)

file(GLOB_RECURSE DOCUMENT_HEADERS  ${DOCUMENT_SOURCES_PATH}/*.h)
file(GLOB_RECURSE DOCUMENT_SRC      ${DOCUMENT_SOURCES_PATH}/*.cpp)

file(GLOB_RECURSE SHAPES_HEADERS    ${SHAPES_SOURCES_PATH}/*.h)
file(GLOB_RECURSE SHAPES_SRC        ${SHAPES_SOURCES_PATH}/*.cpp)

file(GLOB_RECURSE UI_HEADERS    ${UI_SOURCES_PATH}/*.h)
file(GLOB_RECURSE UI_SRC        ${UI_SOURCES_PATH}/*.cpp)

add_executable(${TARGET_NAME}
    main.cpp
    ${COMMANDS_HEADERS}     ${COMMANDS_SRC}
    ${CONTROLLER_HEADERS}   ${CONTROLLER_SRC}
    ${DOCUMENT_HEADERS}     ${DOCUMENT_SRC}
    ${SHAPES_HEADERS}       ${SHAPES_SRC}
    ${UI_HEADERS}           ${UI_SRC})

target_include_directories(${TARGET_NAME} PUBLIC
    ${COMMANDS_SOURCES_PATH}
    ${CONTROLLER_SOURCES_PATH}
    ${DOCUMENT_SOURCES_PATH}
    ${SHAPES_SOURCES_PATH}
    ${UI_SOURCES_PATH})


set_target_properties(${TARGET_NAME} PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)

# максимально строгие настройки компилятора
if (MSVC)
    target_compile_options(${TARGET_NAME} PRIVATE
        /W4
    )
    target_compile_options(${TARGET_NAME} PRIVATE
        /W4
    )
else ()
    target_compile_options(${TARGET_NAME} PRIVATE
        -Wall -Wextra -pedantic -Werror
    )
    target_compile_options(${TARGET_NAME} PRIVATE
        -Wall -Wextra -pedantic -Werror
    )
endif()

# бинарник кладем в каталог bin
install(TARGETS ${TARGET} RUNTIME DESTINATION bin)

# генерить будем deb пакет
set(CPACK_GENERATOR DEB)

# конфигурируем deb пакет
set(CPACK_PACKAGE_VERSION "${PROJECT_VERSION}")
set(CPACK_PACKAGE_NAME ${PROJECT_NAME})
set(CPACK_PACKAGE_CONTACT oshuev.valery@yandex.ru)

# подключем генератор пакетов
include(CPack)
