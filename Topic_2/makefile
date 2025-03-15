#compiler to use
CXX = g++

#compiler flags
CXXFLAGS = -Wall -g -std=c++11

#target executible
TARGET = OptionPricer01

#source files
SRCS = Binomial_Tree_Model.cpp Option01.cpp OptionPricer01.cpp

#object files
OBJS = $(SRCS:.cpp=.o)

#rules to build the target
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

#rules to compile the source files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

#clean up
clean:
	rm -f $(OBJS) $(TARGET)


