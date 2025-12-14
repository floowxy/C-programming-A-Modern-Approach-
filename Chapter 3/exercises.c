/*
1
What output do the following calls of printf produce?

(a) printf("%6d,%4d", 86, 1040);
|    86|
|1040|
(b) printf("%12.5e", 30.253);
| 3.02530e+01|
(c) printf("%.4f", 83.162);
|83.1620|
(d) printf("%-6.2g", .0000009979)
|9.98e-07|

Write calls of printf that display a float variable x in the following formats.
printf("%-8.1e", x);
Exponential notation; right-justified in a field of size 10; six digits after the decimal point.
printf("%10.6e", x);
Fixed decimal notation; left-justified in a field of size 8; three digits after the decimal point.
printf("%-8.3f", x);
Fixed decimal notation; right-justified in a field of size 6; no digits after the decimal point.
printf("%6.0f", x);

3. For each of the following pairs of scanf format strings, indicate whether or not the two strings are equivalent. If they’re not, show how they can be distinguished.

(a)
"%d" versus " %d"

Answer:
Not equivalent.

(b)
"%d-%d-%d" versus "%d -%d -%d"

Answer:
Not equivalent.

(c)
"%f" versus "%f "

Answer:
Not equivalent.

(d)
"%f,%f" versus "%f, %f"

Answer:
Not equivalent.


4. Suppose that we call scanf as follows:
scanf("%d%f%d", &i, &x, &j);
If the user enters
10.3 5 6
what will be the values of i, x, and j after the call? (Assume that i and j are int variables
and x is a float variable.)

i = 10
x = 0.3
j = 5


5.Suppose that we call scanf as follows:
scanf("%f%d%f", &x, &i, &y);
If the user enters
12.3 45.6 789
what will be the values of x, i, and y after the call? (Assume that x and y are float vari-
ables and i is an int variable.)

x = 12.3
i = 45
y = 0.6


6. Show how to modify the addfrac.c program of Section 3.2 so that the user is allowed to
enter fractions that contain spaces before and after each / character.

scanf("%d / %d", &num, &denom);




*/