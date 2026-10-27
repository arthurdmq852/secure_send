qt_add_executable(secure_send
  MainWindow.h MainWindow.cpp
  main.cpp
)

target_link_libraries(secure_send PRIVATE Qt6::Widgets)

set_target_properties(secure_send PROPERTIES
  WIN32_EXECUTABLE ON
  MACOSX_BUNDLE ON
)
