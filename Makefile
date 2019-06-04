Payments: Person.o Item.o Store.o Payment.o main.o
	g++ -Wall -pedantic -g -o Payments Person.o Item.o Store.o Payment.o main.o

main.o: Store/Item/Item.h Store/Store.h Payment/Payment.cpp main.cpp
	g++ -Wall -pedantic -g -std=c++11 -c main.cpp

Payment.o: Store/Item/Item.h Store/Store.h Payment/Payment.cpp
	g++ -Wall -pedantic -g -std=c++11 -c Payment/Payment.cpp

Store.o: Store/Item/Item.h Store/Store.h Store/Store.cpp
	g++ -Wall -pedantic -g -std=c++11 -c Store/Store.cpp

Item.o: Store/Item/Item.h Store/Item/Item.cpp
	g++ -Wall -pedantic -g -std=c++11 -c Store/Item/Item.cpp

Person.o: Person/Person.h Person/Person.cpp
	g++ -Wall -pedantic -g -std=c++11 -c Person/Person.cpp

clean:
	rm -f Payments Payments.exe Person.o Item.o Store.o Payment.o