#include "block.h"
#include "board.h"
#include "game.h"
#include "parser.h"
#include "directoryLoader.h"
#include "featureFile.h"

#include <stdio.h>

int main(int argc, char *argv[])
{
    char buffer[100];
    int i = 0;

    DirectoryIterator itt("reformatedGames");
    DirectoryIterator end = DirectoryIterator::end();

    for( ; itt != end; ++itt)
    {
        sprintf(buffer, "reformatedGames/%s", *itt);

        Game game;

        if(!parseFile(&game, buffer))
        {
            printf("Couldn't parse %s\n", buffer);

            return 1;
        }

        Board finalBoard = game.playGame();

        sprintf(buffer, "gameFeatures/%sf", *itt);

        if(!writeFeaturesToFile(finalBoard, buffer))
        {
            printf("Couldn't write the features of %s to a file\n", buffer);

            return 1;
        }

        if(i % 100 == 0)
        {
            printf(".");
            fflush(stdout);
        }

        ++i;
    }

    printf("\n");

//    std::vector<Game> games;
//
//    loadDirectory(games, "reformatedGames");
//
//    int i = 0;
//
//    std::vector<Game>::iterator itt = games.begin();
//    std::vector<Game>::iterator end = games.end();
//
//    for( ; itt != end; ++itt)
//    {
//        itt->generateFeatureVectors();
//
//        if(i % 100 == 0)
//        {
//            printf(".");
//            fflush(stdout);
//        }
//
//        ++i;
//    }
//
//    printf("\n");

    return 0;
}
