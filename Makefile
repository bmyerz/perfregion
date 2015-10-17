test: test.exe
	./test.exe

test.exe: test.c perfregion.h
	g++ test.c -o test.exe

	
