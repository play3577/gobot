CC = g++
CFLAGS = -c -g

INCL = -Isrc

FILES = \
    definitions.o \
    space.o \
    block.o \
    board.o \
    game.o \
    parser.o \
    directoryLoader.o \
    features.o \
    featureFile.o \
    board.features.o

main: main.o $(FILES)
	$(CC) -o main $^

generateFeatureFiles: generateFeatureFiles.o $(FILES)
	$(CC) -o generateFeatureFiles $^

reformat: reformat.hs
	ghc $^

clean:
	rm -f *.o *.hi

%.o: src/%.cpp
	$(CC) $(CFLAGS) $^ $(INCL)
