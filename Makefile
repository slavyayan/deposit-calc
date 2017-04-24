CC = g++
MO = ./build/main.o
DO = ./build/deposit.o
MC = ./src/main.c
DC = ./src/deposit.c
MT = ./test/main.c
DT = ./test/deposit_test.c
VT = ./test/validation_test.c
MTO = ./build/main_test.o
DTO = ./build/deposit_test.o
VTO = ./build/validation_test.o


all: dc test

dc: $(DO) $(MO)
	$(CC) $(MO) $(DO) -o ./bin/deposit-calc

test: $(MTO) $(DTO) $(VTO)
	$(CC) $(MTO) $(DTO) $(VTO) -o ./bin/deposit-calc_test

$(DO): $(DC)
	$(CC) -c $(DC) -o $(DO)

$(MO): $(MC)
	$(CC) -c $(MC) -o $(MO) 

$(MTO): $(MT)
	$(CC) -c $(MT) -o $(MTO) 

$(DTO): $(DT)
	$(CC) -c $(DT) -o $(DTO) 

$(VTO): $(VT)
	$(CC) -c $(VT) -o $(VTO)

clean:
	rm ./build/*.o
         
