/* 

1) Show the output produced by each of the following program fragments. Assume that i, j,
and k are int variables.
(a) i = 5; j = 3;
printf("%d %d", i / j, i % j);

1 2

(b) i = 2; j = 3;
printf("%d", (i + 10) % j);

0

(c) i = 7; j = 8; k = 9;
printf("%d", (i + 10) % k / j);

1


(d) i = 1; j = 2; k = 3;
printf("%d", (i + 5) % (j + 2) / k);

0

2)
If i and j are positive integers, does (-i)/j always have the same value as -(i/j)? Jus-
tify your answer.
no porque el (-i) solo afecta al entero i sin embargo el -(i/j) afecta al resultado final


3)
What is the value of each of the following expressions in C89? (Give all possible values if
an expression may have more than one value.)

(a) 8 / 5
1
(b) -8 / 5

-1 o -2
(c) 8 / -5

-1 o -2
(d) -8 / -5

1 o 2

4)Repeat Exercise 3 for C99  (EN C99 TRUNCA HACIA 0 )

(a) 8 / 5
1
(b) -8 / 5

-1

(c) 8 / -5

-1

(d) -8 / -5

1


5)What is the value of each of the following expressions in C89? (Give all possible values if
an expression may have more than one value.)
C89 Varia segun compilador
(a) 8 % 5
3
(b) -8 % 5
-8%5
-8 = 5*(-1) + (-3)
-8 = 5*(-2) + 2
-3 o 2 
(c) 8 % -5
8 = -5*(-2) - 2
8 = -5*(-1) + 3
-2 o 3

(d) -8 % -5
6. Repeat Exercise 5 for C99.
C99 a% b tiene el mismo signo que el dividendo , la division truca hacia 0
(a) 8 % 5
3
(b) -8 % 5
-8=5*(-1) -3

-3

(c) 8 % -5
8 = -5*(-1) + 3
3 
(d) -8 % -5

-8=-5*(1) - 3
-3

7. The algorithm for computing the UPC check digit ends with the following steps:
Subtract 1 from the total.
Compute the remainder when the adjusted total is divided by 10.
Subtract the remainder from 9.
It’s tempting to try to simplify the algorithm by using these steps instead:
Compute the remainder when the total is divided by 10.
Subtract the remainder from 10.
Why doesn’t this technique work?

Porque ambos algoritmos no son matematicamente equivalentes para todos los casos, en especial cuando total % 10 == 0

8. Would the upc.c program still work if the expression 9 - ((total - 1) % 10) were
replaced by (10 - (total % 10)) % 10?
Si, el programa seguiria funcionando correctamente, la expresion (10 - (total % 10)) % 10 evita el caso invalido del valor 10 y es matematicamente 
equivalente al calculo original del digito de verificacion del UPC.


/* 
9) Show the output produced by each of the following program fragments.
Assume that i, j, and k are int variables.

(a)
i = 7; j = 8;
i *= j + 1;
printf("%d %d", i, j);

63 8


(b)
i = j = k = 1;
i += j += k;
printf("%d %d %d", i, j, k);

3 2 1


(c)
i = 1; j = 2; k = 3;
i -= j -= k;
printf("%d %d %d", i, j, k);

2 -1 3


(d)
i = 2; j = 1; k = 0;
i *= j *= k;
printf("%d %d %d", i, j, k);

0 0 0


10) Show the output produced by each of the following program fragments.
Assume that i, j, and k are int variables.

(a)
i = 1;
printf("%d ", i++ - 1);
printf("%d", i);

0 2


(b)
i = 10; j = 5;
printf("%d ", i++ - ++j);
printf("%d %d", i, j);

4 11 6


(c)
i = 7; j = 8;
printf("%d ", i++ - --j);
printf("%d %d", i, j);

0 8 7


(d)
i = 3; j = 4; k = 5;
printf("%d ", i++ - j++ + --k);
printf("%d %d %d", i, j, k);

3 4 5 4


11) Show the output produced by each of the following program fragments.
Assume that i and j are int variables.

(a)
i = 5;
j = ++i * 3 - 2;
printf("%d %d", i, j);

6 16


(b)
i = 5;
j = 3 - 2 * i++;
printf("%d %d", i, j);

6 -7


(c)
i = 7;
j = 3 * i-- + 2;
printf("%d %d", i, j);

6 23


(d)
i = 7;
j = 3 + --i * 2;
printf("%d %d", i, j);

6 15


12) Show the output produced by each of the following program fragments.
Assume that i and j are int variables.

(a)
i = 1;
printf("%d ", i++ - 1);
printf("%d", i);

0 2


(b)
i = 10; j = 5;
printf("%d ", i++ - ++j);
printf("%d %d", i, j);

4 11 6


(c)
i = 7; j = 8;
printf("%d ", i++ - --j);
printf("%d %d", i, j);

0 8 7


(d)
i = 3; j = 4; k = 5;
printf("%d ", i++ - j++ + --k);
printf("%d %d %d", i, j, k);

3 4 5 4


13)
Only one of the expressions ++i and i++ is exactly the same as (i += 1).

Respuesta:
++i

Porque ++i y (i += 1) devuelven el nuevo valor de i.
i++ devuelve el valor antiguo.


14) Supply parentheses to show how a C compiler would interpret each expression.

(a)
a * b - c * d + e

((a * b) - (c * d)) + e


(b)
a / b % c / d

(((a / b) % c) / d)


(c)
- a - b + c - + d

((((-a) - b) + c) - (+d))


(d)
a * - b / c - d

(((a * (-b)) / c) - d)


15) Give the values of i and j after each expression statement.
Assume i = 1, j = 2 initially.

(a)
i += j;

i = 3
j = 2


(b)
i--;

i = 0
j = 2


(c)
i * j / i;

i = 1
j = 2


(d)
i % ++j;

i = 1
j = 3
*/



*/