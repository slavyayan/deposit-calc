CC = g++
MO = ./build/main.o
DO = ./build/deposit.o
MC = ./src/main.c
DC = ./src/deposit.c
MT = ./test/main.c
DT = ./test/deposit_test.c
MTO =./build/main_test.o
DTO =./build/deposit_test.o


all: dc test

dc: $(DO) $(MO)
	$(CC) $(MO) $(DO) -o./bin/deposit-calc

dc: $(MT0) $(DT0)
	$(CC) $(MTO) $(DTO) -o./bin/deposit-calc_test

$(DO): $(DC)
	$(CC) -c $(DC) $(DO)

$(MO): $(MC)
	$(CC) -c $(MT) $(MTO) 

$(MTO): $(MT)
	$(CC) -c $(MT) $(MTO) 

$(DTO): $(DT)
	$(CC) -c $(DT) $(DTO) 

clean:
	rm ./build/*.o
         
