
There is a makefile that executes the following command:
	python3 cxxtest-4.4/bin/cxxtestgen --error-printer -o myrunner.cpp mytest.h && g++ -c -o Matrix.o Matrix.cpp && g++ -o mytest_runner myrunner.cpp -I$HOME/cxxtest-4.4 Matrix.o && valgrind ./mytest_runner

