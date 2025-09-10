# 自动查找所有课程目录（智能发现机制）
file(GLOB lesson_dirs LIST_DIRECTORIES true "*")
foreach(lesson_dir ${lesson_dirs})
    if(IS_DIRECTORY ${lesson_dir} AND EXISTS "${lesson_dir}/CMakeLists.txt")
        message(STATUS "发现课程: ${lesson_dir}")
        add_subdirectory(${lesson_dir})  # 进入每个课程目录处理
    endif()
endforeach()

# 如果没有自动找到，可以手动指定（备用方案）
if(NOT lesson_dirs)
    add_subdirectory(lesson01_base)
    add_subdirectory(lesson02_oop)
    add_subdirectory(lesson03_stl)
endif()