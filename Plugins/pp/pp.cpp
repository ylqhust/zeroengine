
#include "pp.hpp"

//***************************************************************************
ZilchDefineStaticLibraryAndPlugin(pp)
{
  ZilchInitializeType(ppExample);
}

//***************************************************************************
ZilchDefineType(ppExample, "ppExample", pp, builder, type)
{
  ZilchBindConstructor(builder, type, ppExample, ZilchNoNames);
  ZilchBindDestructor(builder, type, ppExample);

  ZilchBindMethod(builder, type, &ppExample::HelloWorld, ZilchNoOverload, "HelloWorld", ZilchNoNames);
}

//***************************************************************************
Zilch::String ppExample::HelloWorld()
{
  return "Hello world!";
}
