main: ./bin/main.o ./bin/StrBlob.o ./bin/StrBlobPtr.o 
	g++ $^ -o $@

12_20: ./bin/12_20.o ./bin/StrBlob.o ./bin/StrBlobPtr.o 
	g++ $^ -o $@

12_22: ./bin/12_22.o ./bin/StrBlob.o ./bin/StrBlobPtr.o 
	g++ $^ -o $@

./bin/%.o:./%.cpp
	g++ -c $< -o $@

.PYTHON:clear
clear:
	rm -f ./bin/*.o ./main
