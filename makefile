
all: loops recursives recursived loopd mains maindloop maindrec

loops: libclassloops.a 

libclassloops.a: advancedClassificationLoop.o basicClassification.o 
	ar -rcs libclassloops.a advancedClassificationLoop.o basicClassification.o

recursives: libclassrec.a

libclassrec.a: advancedClassificationRecursion.o basicClassification.o 
	ar -rcs libclassrec.a advancedClassificationRecursion.o basicClassification.o

recursived: libclassrec.so

libclassrec.so: advancedClassificationRecursion.o basicClassification.o 
	gcc -shared -fPIC -o libclassrec.so advancedClassificationRecursion.o basicClassification.o 

loopd: libclassloops.so

libclassloops.so: advancedClassificationLoop.o basicClassification.o 
	gcc -shared -fPIC -o libclassloops.so advancedClassificationLoop.o basicClassification.o 

mains: main.o 
	gcc -Wall -g -o mains main.o libclassrec.a -lm

maindloop: main.o
	gcc -Wall -g -o maindloop main.o ./libclassloops.so -lm

maindrec: main.o
	gcc -Wall -g -o maindrec main.o ./libclassrec.so -lm

main.o: main.c NumClass.h
	gcc -Wall -g -c main.c -lm

basicClassification.o: basicClassification.c NumClass.h
	gcc -Wall -g -c basicClassification.c -lm

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	gcc -Wall -g -c advancedClassificationLoop.c -lm

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	gcc -Wall -g -c advancedClassificationRecursion.c -lm

.PHONY: clean all 

clean:
	rm -f *.o *.a *.so mains maindloop maindrec

