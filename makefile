Main: Main.o Numero.o Binario.o Hexadecimal.o Octal.o
	g++ Main.o Numero.o Binario.o Hexadecimal.o Octal.o -o a

Main.o: Main.cpp Numero.h Binario.h Hexadecimal.h Octal.h
	g++ -c Main.cpp Numero.cpp Binario.cpp Hexadecimal.cpp Octal.cpp

Numero.o: Numero.cpp Numero.h
	g++ -c Numero.cpp

Binario.o: Binario.cpp Binario.h
	g++ -c Binario.cpp

Hexadecimal.o: Hexadecimal.cpp Hexadecimal.h
	g++ -c Hexadecimal.cpp

Octal.o: Octal.cpp Octal.h
	g++ -c Octal.cpp

clean:
	rm *.o Main
