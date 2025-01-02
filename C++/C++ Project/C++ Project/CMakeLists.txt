# CMakeList.txt : CMake project for C++ Project, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (CMakeTarget "String.cpp" )
add_executable (UniquePtr "UniquePtr.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeTarget PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
