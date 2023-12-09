# Define compiler
CXX = g++ 

# Compiler flags
CXXFLAGS = -std=gnu++14 -g 

# Define the target executable
TARGET = cpp_hw2

# Define source files
SOURCES = HW2main.cpp pi_approx.cpp approximations.cpp

# Define object files
OBJECTS = $(SOURCES:.cpp=.o)

# Default target
all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# To generate object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up
clean:
	del $(OBJECTS) $(TARGET)
