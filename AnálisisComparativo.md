# Parte 1 - Análisis Comparativo del Strings en Lenguajes de Programación

Lenguaje elegido: TypeScript (JavaScript con tipado)
1. ¿El tipo es parte del lenguaje en algún nivel?
C: No, los strings no son parte del lenguaje en ningún nivel. En su lugar se utiliza "char*" o "char[]", o sea, arrays de "char".
TypeScript: Si, en JavaScript existe como tipo primitivo y en TypeScript se utiliza la palabra "string".

2. ¿El tipo es parte de la biblioteca?
C: No, las bibliotecas de strings de C no incluyen al tipo, solo definen funciones y tipos relacionados a los strings.
TypeScript: No, "string" es un tipo primitivo, no viene de una biblioteca, pero en la biblioteca de tipos define las interfaces y métodos asociados al tipo "string".

3. ¿Qué alfabeto usa?
C: Todo lo que el compiladores procesa tiene que estar definido sobre ASCII.
TypeScript: El compilador soporta todos los carácteres Unicode (esto incluye acentos o carácteres de otros alfabetos).

4. ¿Cómo se resuelve la alocación de memoria?
C: Los char* son punteros al primer carácter de esa cadena y la alocación es de manera manual. Utilizando la notación con "[]" se declara en el stack, lo cuál se libera cuando sale del scope. Por otro lado, lo que se declare con malloc va al heap y se libera con free.
TypeScript: No pedís ni liberás memoria manualmente. Simplemente declaras el "string", y luego el garbage collector de JavaScript lo libera.

5. ¿El tipo tiene mutabilidad o es inmutable?
C: Es mutable. Si tenes un char s[] = "hola", podes modificarlo haciendo por ejemplo s[0] = 'H'.
TypeScript: Es inmutable. Cualquier operación de strings devuelve uno nuevo.

6. ¿El tipo es un first class citizen? (first class citizen: entidad que soporta todas las operaciones generalmente disponibles para todas las otras entidades)
C: No. Son arrays de char, y un array no es un first class citizen.
TypeScript: Si, los strings soportan todas las operaciones disponibles para todos los otros tipos primitivos.

7. ¿Cuál es la mecánica para ese tipo cuando se los pasa como argumentos?
C: Como son arrays de "char", lo que se pasa es un puntero, o sea una referencia.
TypeScript: Los "string" son primtiivos, asi que se copia el valor, no se pasan por referencia.

8. ¿Y cuando son retornados por una función?
C: Se retorna un puntero "char*". Si se utiliza la notación con [] para declararlo y se devuelve, cuando la función se termina sale del scope, entonces esa memoria no es válida y por lo tanto es undefined behavior.
TypeScript: Se retorna por valor y el garbage collector limpia la memoria.

9. ¿Qué nivel de soporte tiene para ASCII, Unicode, y UTF-8?
C: Soporta ASCII completa y naturalmente. No tiene soporte nativo de Unicode ni UTF-8, tendrías que hacerlo vos o utilizar una biblioteca externa.
TypeScript: Soporta nativamente Unicode (ya que los string son UTF-16 internamente) y por lo tanto ASCII, ya que es un subconjunto de Unicode. UTF-8 no es la representación interna, pero se puede trabajar con UTF-8 a través de APIs.