# CS2013 Systems Programming Final Exam

## Information
* Venue: A01-109, Computer Lab, First Floor, Academic Building
* Time: 2.00 PM -- 5.00 PM (3 hours)
* No of questions: 5
* Points per question: 15
* Total points: 75

## Instructions (READ THIS CAREFULLY)

* Search in the C files for "TODO". You are expected to appropriately answer them
  as mentioned in the questions below.

* Portions of the code enclosed in "DO NOT EDIT" should not be
  modified in any way.

* For each of the question, the makefile is already written for you. 

* Use `make` to compile the code. You must remove all compile errors as well as
  warnings before you can test your code.

* For each of the question, test using `make tests` for test cases supplied 
  and `make ltests` to test for memory leaks. For each of the questions, you
  can see the results of tests in `run.log` and results of leak tests in
  `leaks.log`.

* Each test case passed will fetch 1 point and each leak case passed will fetch
  0.5 points. If your code does not compile, you do not get any points. 

* One test case is provided for each of the questions. These are given only
  for you to test your programs and will not be used for evaluation.

  Instead, the evaluations will be based on 10 test cases (all hidden) which
  will be released after the exam. You are encouraged to write more
  test cases to test if your program is behaving as expected. 

  You can create more test cases by appropriately writing shell scripts that
  generate them. These scripts or the generated test cases, however, will not
  be part of the evaluation.

# Exam Questions

1. Answer this question in 1/1.c

   In this question, you will write a program to count the number of two
   length strings in a given string. 

   The input consists of a single line where the first two characters is the
   two length sequence to be searched, followed by the length of the string,
   followed by the string itself. These three parts are separated by one or
   more white spaces. 

   The string is guaranteed to be at least as long as the length. The pattern
   needs to be checked within the first `length` many characters of the string.

   Sample input 1:
   an 13 analytical-ananya

   Sample output 1:
   2

   Sample input 2:
   aa 4 aaaa

   Sample output 2:
   3

2. Answer this question in 2/2.c

   In this question, you will create a tesseract product of two square integer
   matrices.

   The tesseract product of two square matrices M of size a x a and N of size b x
   b is given by a 4-tensor of order a x b x a x b denoted by Z given by

   for each i,j from {1,...,a} and for each p,q from {1,...,b}

	    Z_{i,p,j,q} = M_{i,j} * N_{p,q}
   
   The input consists of two square matrices with first line being the number
   of rows of the matrix followed by the matrix in the row major format. The
   expected output is to print the entire 4-tensor as a single row.

   Sample input:
   2
   1 2
   4 5
   1
   2 

   Sample output:
   2 4 8 10

   Note: The code to print the resulting 4-tensor is already written. You must
   not edit this code.

3. Answer this question is 3/3.c

   In this question, you will write a program to simplify fractions.
  
   You are given a list of fractions (expressed as a/b), each one in a new
   line. For each of the fractions, check if it is valid (that is, denominator
   is not zero) and if valid, express the fraction in lowest terms. If the
   fraction is invalid, you should print "Invalid". The number of lines in
   the test cases is not known to you.

   Sample input:
   -6/12
   12/-18
   -3/0
   -2/-4
   0/3

   Sample output:
   -1/2
   2/-3
   Invalid
   -1/-2
   0/1



   Hint: GCD !

4. Answer this question in 4/4.c

   In this question, you will write a program to check if two words (given in
   lower case) are anagrams. Anagrams are permutations of a set of lower case
   English letters. For example: stop, post are anagrams of {o,p,s,t}. 

   Each test case starts with the number of lines followed by lines having
   a pair of strings, each of length maximum 100 characters. Output "Yes" if they
   are anagrams and "No" otherwise. 

   Sample input:
   2
   smartest mattress
   test sets

   Sample output:
   Yes
   No

5. Answer this question in 5/5.c

   In this question, you will write a program to compute the (approximate)
   square root of a positive integer.

   The method for computing the square root is as follows:

   Say x is the number entered. Start with an initial guess of y = 1.0 as the
   square root of x. We find successive guesses by taking the average of y and
   x/y. This is repeated with the average computed as the new y.

   The values of y get progressively closer to the true square root of x.
   Terminate the repetition when the *absolute value* of the difference between
   the old value of y and the new value of y is less than the product of
   0.0001 and the old value of y. 

   An illustration of the above for x = 3 is as follows. All values are printed
   only to 11 places of accuracy.

   |x   | y                | x/y               | Average           |
   |----|------------------|-------------------|-------------------|
   |3.0 | 1.0              | 3.0               | 2.0               |
   |3.0 | 2.0              | 1.5               | 1.75              |
   |3.0 | 1.75             | 1.71428571429     | 1.73214285714     |
   |3.0 | 1.73214285714    | 1.73195876289     | 1.73205081001     |

   Upon termination, the final y needs to be printed accurate to 11 decimal
   places rounded appropriately. Note that this will not be exactly equal to
   the square root of x.

   The test cases start with an integer which is the number of test cases. This
   is followed by a list of integers. The output must print the square roots
   of the numbers in the *reverse* order of the inputs.

   Sample input and output is as follows.

   Sample input:
   2
   5
   3

   Sample output:
   1.73205081001
   2.23606797750

   Hint: (1) Use double type (2) You may check the manual page for `fabs()` function ! 
