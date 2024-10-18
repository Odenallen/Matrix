****# Inquiry
# What did you learn from this assignment?
## Answers
I learned about templates, how different version of consts work, move operators and
memory allocation

# What was hardest to implement in this assignment?
## Answers
The most time consuming part for me was implementing column operations

# How many methods/functions have you implemented?
## Answers
around 30 methods/functions

# How many methods/functions have you tested?
## Answers
All of them

# Describe and motivate how your implementation of operator= works
## Answers
I implemented the move operator=, which is a special case of the assignment operator. It is used to move the resources of one object to another object. It is used when the resources of an object are no longer needed and we want to transfer the resources to another object. First, I check if the object is the same as the one being assigned to, if it is, I return the object. Then I delete the resources of the object and transfer the resources of the other object to the object.


# When do you need to resize in your code?
## Answers
When you want to add or remove rows or columns

# When you resize your matrix, are you able to move the elements?
## Answers
Yes, I can move elements within the matrix when I insert remove rows or columns. My code doesn't have a dedicated function for reshaping, so simply changing the dimensions won't automatically rearrange the elements. ****

# Why do you need to implement a const-version of the accessor operator?
## Answers
To be able to access the elements of a const matrix

# Is it possible to call std::sort() to sort your matrix using begin() and end()?
## Answers

Yes, it is possible, since sort requires two iterators, that define the begining and the end of the array, this makes them a good fit for the sort function. However, the sort function will sort the array in a row-major order, which is not the most efficient way to sort a matrix and is not always the desired way to sort a matrix.








# What other kind of iterators, besides random access iterators, are there in C++?
## Answers
Input, output, forward and bidirectional. 




