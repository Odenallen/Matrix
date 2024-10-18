#create a makefile with the following terminal lines: python3 cxxtest-4.4/bin/cxxtestgen --error-printer -o myrunner.cpp mytest.h && g++ -c -o Matrix.o Matrix.cpp && g++ -o mytest_runner myrunner.cpp -I$HOME/cxxtest-4.4 Matrix.o && valgrind./mytest_runner
all:
	python3 cxxtest-4.4/bin/cxxtestgen --error-printer -o myrunner.cpp mytest.h && g++ -c -o Matrix.o Matrix.cpp && g++ -o mytest_runner myrunner.cpp -I$HOME/cxxtest-4.4 Matrix.o && valgrind ./mytest_runner

clean:
	rm -f *.o mytest_runner myrunner.cpp

#	python3 cxxtest-4.4/bin/cxxtestgen --error-printer -o myrunner.cpp mytest.h && g++ -c -o Matrix.o Matrix.cpp && g++ -o mytest_runner myrunner.cpp -I$HOME/cxxtest-4.4 Matrix.o && valgrind ./mytest_runner

#CXXTEST_HOME = cxxtest-4.4
#CXXTEST_GEN = $(CXXTEST_HOME)/bin/cxxtestgen
#CXXTEST_FLAGS = --error-printer
#TEST = mytest.h
#TEST_RUNNER = mytest_runner
#TEST_RUNNER_SRC = myrunner.cpp
#TEST_RUNNER_OBJ = $(TEST_RUNNER_SRC:.cpp=.o)
#MATRIX = Matrix
#MATRIX_SRC = $(MATRIX).cpp
#MATRIX_OBJ = $(MATRIX_SRC:.cpp=.o)
#CXX = g++
#CXXFLAGS = -c -o $@ -I$(CXXTEST_HOME)
#LDFLAGS = -o $@ -I$(CXXTEST_HOME) $(MATRIX_OBJ)
#
#all: $(TEST_RUNNER)
#
#$(TEST_RUNNER): $(TEST_RUNNER_OBJ) $(MATRIX_OBJ)
#	$(CXX) $(LDFLAGS) $(TEST_RUNNER_OBJ) $(MATRIX_OBJ) && ./$(TEST_RUNNER)
#
#$(TEST_RUNNER_OBJ): $(TEST_RUNNER_SRC)
#	$(CXX) $(CXXFLAGS) $<
#
#$(MATRIX_OBJ): $(MATRIX_SRC)
#	$(CXX) $(CXXFLAGS) $<
#
#$(TEST_RUNNER_SRC): $(TEST)
#	$(CXXTEST_GEN) $(CXXTEST_FLAGS) -o $@ $<
#
#clean:
#	rm -f $(TEST_RUNNER) $(TEST_RUNNER_OBJ) $(TEST_RUNNER_SRC) $(MATRIX_OBJ)