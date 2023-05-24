# tutorials
# https://www.youtube.com/watch?v=rKBdoMzY3cA
# https://www.youtube.com/watch?v=J23ZW-b9s9c
# https://www.youtube.com/watch?v=cOQy8l68Yyk
# https://www.youtube.com/watch?v=mBjRjZcRTA0

cmake_minimum_required(VERSION 3.20.0)
project(04-scripting-with-cmake VERSION 1.0.0)

# Create variables
set(MY_VERIABLE_1 "Red Apple")
set(MY_VERIABLE_2 banana)

# Print on console
message(STATUS "This is ${MY_VERIABLE_1}")
message(STATUS "Monkey like ${MY_VERIABLE_2}s")

# Print default variable
message(STATUS "This Project Name is : ${PROJECT_NAME}")
message(STATUS "This Project Version is : ${PROJECT_VERSION}")

# If condition
if(TRUE)
    message(STATUS "Condition was met")
else()
    message(STATUS "Condition failed")
endif()
