# TODO

* Put code files in this catalogue

* Write your answers to the lab questions [markdown-format](https://www.markdowntutorial.com/) in the file [inquiry.md](inquiry.md). Do copy relevant code to your answers into [inquiry.md](inquiry.md) so that both questions and answers are in context. Do not forget to push [inquiry.md](inquiry.md) after answering a question.

Run the testcode by executing the following command in your terminal:

make

There is a makefile that executes the following command:
	python3 cxxtest-4.4/bin/cxxtestgen --error-printer -o myrunner.cpp mytest.h && g++ -c -o Matrix.o Matrix.cpp && g++ -o mytest_runner myrunner.cpp -I$HOME/cxxtest-4.4 Matrix.o && valgrind ./mytest_runner

This part will also show my memory leaks and errors.(None in my case)