#pragma once

//==============================================================================
class TestGui : public juce::Component
{
public:
    TestGui();
    ~TestGui();

    void paint(juce::Graphics& g) override;

private:

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(TestGui)
};
