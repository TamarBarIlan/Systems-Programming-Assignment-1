
all: libclassloops.a libclassrec.a libclassloops.so libclassrec.so mains maindloop maindrec

mains: main.o libclassrec.a 
	gcc -Wall -g -o mains main.o libclassrec.a -lm

maindloop: main.o libclassloops.so
	gcc -Wall -g -o maindloop main.o ./libclassloops.so -lm

maindrec: main.o libclassrec.so
	gcc -Wall -g -o maindrec main.o ./libclassrec.so -lm

libclassloops.a: advancedClassificationLoop.o basicClassification.o 
	ar -rcs libclassloops.a advancedClassificationLoop.o basicClassification.o

libclassrec.a: advancedClassificationRecursion.o basicClassification.o 
	ar -rcs libclassrec.a advancedClassificationRecursion.o basicClassification.o

libclassloops.so: advancedClassificationLoop.o basicClassification.o 
	gcc -shared -fPIC -o libclassloops.so advancedClassificationLoop.o basicClassification.o 

libclassrec.so: advancedClassificationRecursion.o basicClassification.o 
	gcc -shared -fPIC -o libclassrec.so advancedClassificationRecursion.o basicClassification.o 

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

