all: enlineas.exe longitudes.exe mayorlongitud.exe todosiguales.exe suma.exe

enlineas.exe: enlineas.o String.o
	gcc -o enlineas.exe enlineas.o String.o

longitudes.exe: longitudes.o String.o
	gcc -o longitudes.exe longitudes.o String.o

mayorlongitud.exe: mayorlongitud.o String.o
	gcc -o mayorlongitud.exe mayorlongitud.o String.o

todosiguales.exe: todosiguales.o String.o
	gcc -o todosiguales.exe todosiguales.o String.o

suma.exe: suma.o String.o Conversion.o
	gcc -o suma.exe suma.o String.o Conversion.o


# Si no se aclara que hacer en la linea de abajo de estas, ejecuta automaticamente: gcc -c archivo.c, ej:
# enlineas.o ejecuta: gcc -c enlineas.c
enlineas.o: enlineas.c String.h
longitudes.o: longitudes.c String.h
mayorlongitud.o: mayorlongitud.c String.h
todosiguales.o: todosiguales.c String.h
suma.o: suma.c String.h Conversion.h

String.o: String.c String.h
Conversion.o: Conversion.c Conversion.h

test.o: test.c StringTest.h ConversionTest.h
StringTest.o: StringTest.c StringTest.h String.h
ConversionTest.o: ConversionTest.c ConversionTest.h Conversion.h

test: StringTest.o ConversionTest.o test.o String.o Conversion.o
	gcc -o test.exe test.o StringTest.o ConversionTest.o String.o Conversion.o
	test.exe
	del test.o StringTest.o ConversionTest.o test.exe

clean:
	del /Q *.o 
	del /Q *.exe
