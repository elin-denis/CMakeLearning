# Common options
set(PROJECT_NAME MathLib)

# Sources
set(MATH_SOURCES Math.cpp)
set(MATH_INCLUDES Math.h)

# Targets
add_library(MathLib STATIC ${MATH_SOURCES} ${MATH_INCLUDES})