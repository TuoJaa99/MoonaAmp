#include "DistrhoPlugin.hpp"

START_NAMESPACE_DISTRHO 

class MyAmp : public Plugin
{
  public: 
    MyAmp() : Plugin(kParameterCount, 0 , 0), gain(1.0){}
  private:
    float gain; 

}
