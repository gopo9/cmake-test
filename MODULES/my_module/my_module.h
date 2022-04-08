/*******************************************************************************
 BEGIN_JUCE_MODULE_DECLARATION

  ID:               my_module
  vendor:           MYCOMPANY
  version:          0.0.1
  name:             Test
  description:      Test modules

  dependencies:		juce_gui_basics, juce_events

 END_JUCE_MODULE_DECLARATION

*******************************************************************************/

#pragma once

#include <juce_gui_basics/juce_gui_basics.h>
#include <juce_events/juce_events.h>


namespace mymod
{
#include "myclasses/my_dsp.h"
#include "myclasses/my_gui.h"
}