cmake_minimum_required(VERSION 3.10) # Set the minimum required CMake version

project(StellarWeave               # Name of your project
    VERSION 0.1.0                     # Initial version number
    LANGUAGES CXX C                   # Languages used in your project (e.g., CXX for C++, C for C)
)

# Optional: Set common build settings
# set(CMAKE_CXX_STANDARD 20)
# set(CMAKE_CXX_STANDARD_REQUIRED ON)
# set(CMAKE_EXPORT_COMPILE_COMMANDS ON) # For tools like Clangd

# --- Source Files and Targets ---
# add_executable(MyExecutableName src/main.cpp) # Example: For an executable
# add_library(MyLibraryName STATIC src/mylib.cpp) # Example: For a static library
# add_library(MySharedLibraryName SHARED src/mysharedlib.cpp) # Example: For a shared library

# --- Include Directories ---
# target_include_directories(MyExecutableName PUBLIC include) # Example: Add include path for an executable

# --- Link Libraries ---
# target_link_libraries(MyExecutableName PRIVATE MyLibraryName) # Example: Link a library to an executable

# --- Install Rules (Optional) ---
# install(TARGETS MyExecutableName DESTINATION bin)
# install(TARGETS MyLibraryName DESTINATION lib)
# install(DIRECTORY include/ DESTINATION include)

# --- Testing (Optional, requires find_package(Catch2) or similar) ---
# enable_testing()
# add_test(NAME MyTest COMMAND MyExecutableName)
