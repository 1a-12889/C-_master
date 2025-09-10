# 创建静态工具库
add_library(utils STATIC
    add.cpp
)

# 设置头文件搜索路径，告诉编译器去这找头文件
target_include_directories(utils PUBLIC
    ${CMAKE_SOURCE_DIR}/include
)

# 设置库的属性
set_target_properties(utils PROPERTIES
    ARCHIVE_OUTPUT_NAME "utils"  # 库文件输出名为libutils.a
)