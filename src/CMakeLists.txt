FIND_PACKAGE (OpenCV 3.0 REQUIRED)
IF (NOT OpenCV_FOUND)
    FIND_PACKAGE (OpenCV 2.4.3 REQUIRED)
    if (NOT OpenCV_FOUND)
        message(FATAL_ERROR "OpenCV > 2.4.3 not found.")
    endif()
endif()
INCLUDE_DIRECTORIES (${PROJECT_SOURCE_DIR}
                     ${PROJECT_SOURCE_DIR}/include
                     )

ADD_EXECUTABLE (readIMG readIMG.cpp)
TARGET_LINK_LIBRARIES (readIMG ${OpenCV_LIBS})
