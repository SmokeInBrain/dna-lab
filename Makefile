#
# DNA
# by Miguel Cárcamo

INC_DIRS = -Iinclude

CFLAGS = -c



main: build/main.o build/getOptions.o build/buffer.o build/productor.o build/recognizer.o build/writer.o
	@ u++ build/*.o -o bin/dna.run
	@ echo "The compilation has been completed successfully"

build/main.o: src/main.cpp
	@ echo "src/main.cpp"
	@ u++  $(CFLAGS) $(INC_DIRS) src/main.cpp -o build/main.o
build/getOptions.o: src/getOptions.cpp
	@ echo "src/getOptions.cpp"
	@ u++  $(CFLAGS) $(INC_DIRS) src/getOptions.cpp -o build/getOptions.o
build/buffer.o: src/buffer.cpp
	@ echo "src/buffer1.cpp"
	@ u++  $(CFLAGS) $(INC_DIRS) src/buffer.cpp -o build/buffer.o
build/productor.o: src/productor.cpp
	@ echo "src/productor.cpp"
	@ u++  $(CFLAGS) $(INC_DIRS) src/productor.cpp -o build/productor.o
build/recognizer.o: src/recognizer.cpp
	@ echo "src/recognizer.cpp"
	@ u++ $(CFLAGS) $(INC_DIRS) src/recognizer.cpp -o build/recognizer.o
build/writer.o: src/writer.cpp
	@ echo "src/writer.cpp"
	@ u++ $(CFLAGS) $(INC_DIRS) src/writer.cpp -o build/writer.o

clean:
	@ clear
	@ echo "Cleaning folders.."
	@ rm -rf build/*
	@ rm -rf bin/*
	@ rm -rf output/*

run:
	@ clear
	@ echo "DNA"
	@ ./bin/dna.run -i ./input/smalldna.txt -o ./output/output.txt -t 3

dna: clean main run
