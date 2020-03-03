cmake_minimum_required(VERSION 3.2)

add_executable(vect_editor_prototype
    main.cpp
    shapes/base/IShape.h shapes/base/IIdCreator.h
    shapes/Circle.h shapes/Circle.cpp
    shapes/Line.h   shapes/Line.cpp
    shapes/ShapesCreator.h shapes/ShapesCreator.cpp

    documents/base/IDocument.h
    documents/Document.h documents/Document.cpp
    )

# включаем 14 стандарт для наших целей
set_target_properties(vect_editor_prototype PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)

# максимально строгие настройки компилятора
if (MSVC)
    target_compile_options(vect_editor_prototype PRIVATE
        /W4
    )
    target_compile_options(vect_editor_prototype PRIVATE
        /W4
    )
else ()
    target_compile_options(vect_editor_prototype PRIVATE
        -Wall -Wextra -pedantic -Werror
    )
    target_compile_options(vect_editor_prototype PRIVATE
        -Wall -Wextra -pedantic -Werror
    )
endif()

# бинарник кладем в каталог bin
install(TARGETS vect_editor_prototype RUNTIME DESTINATION bin)

# генерить будем deb пакет
set(CPACK_GENERATOR DEB)

# конфигурируем deb пакет
set(CPACK_PACKAGE_VERSION "${PROJECT_VERSION}")
set(CPACK_PACKAGE_NAME ${PROJECT_NAME})
set(CPACK_PACKAGE_CONTACT oshuev.valery@yandex.ru)

# подключем генератор пакетов
include(CPack)
