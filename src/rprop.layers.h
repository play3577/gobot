#ifndef _RPROP_LAYERS_H_
#define _RPROP_LAYERS_H_

#include "rprop.weights.h"

class InputLayer : public Weights
{
  private:
    virtual void calculateDerivatives(RProp& model, float* features, const bool& alive);
  public:
    InputLayer(void) : Weights(0, 0) {}
    InputLayer(const int& iSize, const int& hSize) : Weights(iSize, hSize) {}
};

class InputBias : public Weights
{
  private:
    virtual void calculateDerivatives(RProp& model, float* features, const bool& alive);
  public:
    InputBias(void) : Weights(0, 0) {}
    InputBias(const int& iSize, const int& hSize) : Weights(iSize, hSize) {}
};

class HiddenLayer : public Weights
{
  private:
    virtual void calculateDerivatives(RProp& model, float* features, const bool& alive);
  public:
    HiddenLayer(void) : Weights(0, 0) {}
    HiddenLayer(const int& iSize, const int& hSize) : Weights(iSize, hSize) {}
};

class HiddenBias : public Weights
{
  private:
    virtual void calculateDerivatives(RProp& model, float* features, const bool& alive);
  public:
    HiddenBias(void) : Weights(0, 0) {}
    HiddenBias(const int& iSize, const int& hSize) : Weights(iSize, hSize) {}
};

#endif
