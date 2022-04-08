#include "my_gui.h"

TestGui::TestGui()
{
}

TestGui::~TestGui()
{
}

void TestGui::paint(juce::Graphics& g)
{
    g.fillAll(juce::Colours::black);

    g.setFont(juce::Font(16.0f));
    g.setColour(juce::Colours::white);
    g.drawText("TestGui", getLocalBounds(), juce::Justification::centred, true);
}