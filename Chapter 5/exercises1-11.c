/*
========================================================
CHAPTER 5 — SELECTION STATEMENTS
EXERCISES (1–11)
========================================================

E.1
Show the output produced by each fragment, assuming i, j, k are int variables.

(a)
i = 2; j = 3;
k = i * j == 6;

La multiplicación tiene mayor precedencia que la comparación.
i * j = 6, luego 6 == 6 es verdadero.
En C, true se representa como 1.
Salida: 1

(b)
i = 5; j = 10; k = 1;
printf("%d", k > i < j);

Los operadores relacionales son asociativos a la izquierda.
La expresión se evalúa como (k > i) < j.
k > i → false → 0
0 < 10 → true → 1
Salida: 1

(c)
i = 3; j = 2; k = 1;
printf("%d", i < j == j < k);

Los operadores < tienen mayor precedencia que ==.
Se evalúa como (i < j) == (j < k).
Ambas comparaciones producen 0, y 0 == 0 es verdadero.
Salida: 1

(d)
i = 3; j = 4; k = 5;
printf("%d", i % j + i < k);

El operador % tiene mayor precedencia que +, y ambos mayor que <.
Se evalúa como ((i % j) + i) < k.
3 % 4 = 3, 3 + 3 = 6, 6 < 5 es falso.
Salida: 0


--------------------------------------------------------

E.2
Show the output produced by each fragment illustrating logical operators.

(a)
i = 10; j = 5;
printf("%d", !i < j);

El operador ! se evalúa antes que <.
!10 = 0, luego 0 < 5 es verdadero.
Salida: 1

(b)
i = 2; j = 1;
printf("%d", !!i + !j);

!!i normaliza el valor lógico de i a 1.
!j vale 0 porque j es distinto de cero.
1 + 0 = 1
Salida: 1

(c)
i = 5; j = 0; k = -5;
printf("%d", i && j || k);

&& tiene mayor precedencia que ||.
(i && j) → false, luego false || k.
k es distinto de cero, por lo tanto true.
Salida: 1

(d)
i = 1; j = 2; k = 3;
printf("%d", i < j || k);

i < j es verdadero, por lo tanto el operador || hace short-circuit.
La segunda expresión no se evalúa.
Salida: 1


--------------------------------------------------------

E.3
Show the output produced by each fragment illustrating short-circuit behavior.

(a)
i = 3; j = 4; k = 5;
printf("%d ", i < j || ++j < k);
printf("%d %d %d", i, j, k);

i < j es verdadero, por lo que || hace short-circuit.
++j no se ejecuta.
Salida: 1 3 4 5

(b)
i = 7; j = 8; k = 9;
printf("%d ", i - 7 && j++ < k);
printf("%d %d %d", i, j, k);

i - 7 es 0, lo que hace false la primera condición.
&& hace short-circuit y j++ no se ejecuta.
Salida: 0 7 8 9

(c)
i = 7; j = 8; k = 9;
printf("%d ", (i = j) || (j = k));
printf("%d %d %d", i, j, k);

La asignación i = j produce el valor 8, que es true.
|| hace short-circuit y (j = k) no se ejecuta.
Salida: 1 8 8 9

(d)
i = 1; j = 1; k = 1;
printf("%d ", ++i || ++j && ++k);
printf("%d %d %d", i, j, k);

&& tiene mayor precedencia que ||.
La expresión se agrupa como ++i || ( ++j && ++k ).
++i produce true, por lo que || hace short-circuit.
Solo i se incrementa.
Salida: 1 2 1 1


--------------------------------------------------------

E.4
Write a single expression whose value is -1, 0, or +1 depending on whether
i is less than, equal to, or greater than j.

La expresión correcta es:
(i > j) - (i < j)

Las comparaciones producen 0 o 1, y la resta genera los tres valores posibles.


--------------------------------------------------------

E.5
Is the following if statement legal?
if (n >= 1 <= 10)

La expresión es legal en C.
Se evalúa como (n >= 1) <= 10.
Cuando n = 0, la primera comparación es false (0), y 0 <= 10 es true.
El if se ejecuta incorrectamente.


--------------------------------------------------------

E.6
Is the following if statement legal?
if (n == 1-10)

La expresión es legal en C.
El operador - tiene mayor precedencia que ==.
Se evalúa como n == -9.
Cuando n = 5, la condición es falsa y no se imprime nada.


--------------------------------------------------------

E.7
What does the following statement print if i is 17 or -17?

printf("%d\n", i >= 0 ? i : -i);

Si i es 17, la condición es verdadera y se imprime 17.
Si i es -17, la condición es falsa y se imprime -i, que es 17.
La expresión implementa el valor absoluto de i.


--------------------------------------------------------

E.8
Simplify the following if statement as much as possible.

El comportamiento del código es verdadero solo cuando
13 <= age <= 19.
Todo el if puede reemplazarse por una sola asignación:

teenager = (age >= 13 && age <= 19);


--------------------------------------------------------

E.9
Are the following if statements equivalent?

No son equivalentes.
La diferencia en el emparejamiento de los else cambia el flujo lógico.
Este es un caso del problema del "dangling else".


--------------------------------------------------------

E.10
What output does the following fragment produce?

i = 1;
switch (i % 3) {
    case 0: printf("zero");
    case 1: printf("one");
    case 2: printf("two");
}

i % 3 vale 1.
No hay break, por lo que se produce fall-through.
Salida: onetwo



E.11
Write a switch statement that prints the city corresponding to
a Georgia area code.

Se debe usar un switch(area_code) con múltiples case que compartan
código mediante fall-through y un default para códigos no reconocidos.
El objetivo es practicar el uso correcto de switch y break.

*/
