// Include protection
#pragma once
#ifndef ZILCH_CUSTOM_PLUGIN_HPP
#define ZILCH_CUSTOM_PLUGIN_HPP

// For more information on binding and using Zilch APIs, visit: http://zilch.digipen.edu/
// For auto binding specifically, visit: http://zilch.digipen.edu/AutomaticBinding.html

// Includes
#define ZeroImportDll
#include "Zilch.hpp"

//***************************************************************************
ZilchDeclareStaticLibraryAndPlugin(pp);

//***************************************************************************
class ppExample
{
public:
  ZilchDeclareBaseType(ppExample, Zilch::TypeCopyMode::ReferenceType);

  Zilch::String HelloWorld();
};

// End header protection
#endif
