# 创建本课程的可执行文件
add_executable(lesson01_base 
    main.cpp
    #test.cpp                       
)

# 链接需要的工具库（让本课程可以使用utils库的功能）
target_link_libraries(lesson01_base utils)

# 设置可执行文件属性
set_target_properties(lesson01_base PROPERTIES
    OUTPUT_NAME "lesson01"  # 输出文件名为lesson01（而不是lesson01_base）
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin/lessons  # 输出到bin/lessons/
)

# 如果有额外的编译选项
target_compile_options(lesson01_base PRIVATE
    -Wall -Wextra  # 开启警告提示
)