#ifndef _FEATURES_H_
#define _FEATURES_H_

#define NUMBER_OF_FEATURES 24

class BlockFinalFeatures
{
  public:
    // Local Features
    int size;
    int perimeter;
    int opponents;
    int liberties;
    int protectedLiberties;
    int autoAtariLiberties;
    int secondOrderLiberties;
    int thirdOrderLiberties;
    int numberOfAdjacentOpponentBlocks;
    int localMajority;
    float centerOfMass;
    int boundingBoxSize;
    // Optimistic Chain Features
    int OCNumberOfBlocks;
    int OCSize;
    int OCPerimeter;
    // Weakest Adjacent Enemy Features
    int WAEPerimeter;
    int WAELiberties;
    int WAESharedLiberties;
    // Second Weakest Adjacent Enemy Features
    int SWAEPerimeter;
    int SWAELiberties;
    int SWAESharedLiberties;
    // Weakest Adjacent Chained Enemy Features
    int WACEPerimeter;
    int WACELiberties;
    int WACESharedLiberties;

    void print(void) const;
    float* getFeatureVector(void) const;
};

#endif