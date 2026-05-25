all: enlineas.exe longitudes.exe mayorlongitud.exe todosiguales.exe suma.exe

enlineas.exe: enlineas.o Strings.o
	gcc -o enlineas.exe enlineas.o Strings.o

longitudes.exe: longitudes.o Strings.o
	gcc -o longitudes.exe longitudes.o Strings.o

mayorlongitud.exe: mayorlongitud.o Strings.o
	gcc -o mayorlongitud.exe mayorlongitud.o Strings.o

todosiguales.exe: todosiguales.o Strings.o
	gcc -o todosiguales.exe todosiguales.o Strings.o

suma.exe: suma.o Strings.o Conversion.o
	gcc -o suma.exe suma.o Strings.o Conversion.o


# Si no se aclara que hacer en la linea de abajo de estas, ejecuta automaticamente: gcc -c archivo.c, ej:
# enlineas.o ejecuta: gcc -c enlineas.c
enlineas.o: enlineas.c Strings.h
longitudes.o: longitudes.c Strings.h
mayorlongitud.o: mayorlongitud.c Strings.h
todosiguales.o: todosiguales.c Strings.h
suma.o: suma.c Strings.h Conversion.h

Strings.o: Strings.c Strings.h
Conversion.o: Conversion.c Conversion.h

test.o: test.c StringsTest.h ConversionTest.h
StringsTest.o: StringsTest.c StringsTest.h Strings.h
ConversionTest.o: ConversionTest.c ConversionTest.h Conversion.h

test: StringsTest.o ConversionTest.o test.o Strings.o Conversion.o
	gcc -o test.exe test.o StringsTest.o ConversionTest.o Strings.o Conversion.o
	test.exe
	del test.o StringsTest.o ConversionTest.o test.exe

clean:
	del /Q *.o 
	del /Q *.exe

# En Linux y Mac, cambiar test.exe por ./test.exe y del /Q por rm -f