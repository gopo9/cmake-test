#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
    : button("Button", juce::DrawableButton::ButtonStyle::ImageFitted)

{
    addAndMakeVisible(testGui);

    //get access to binary data ?!?
    std::unique_ptr<juce::Drawable> drawable(juce::Drawable::createFromImageData(
        BinaryData::drawing_svg, BinaryData::drawing_svgSize));
    button.setImages(drawable.get());
    addAndMakeVisible(button);

    setSize(600, 400);
}

void MainComponent::paint(juce::Graphics& g)
{
    g.fillAll(getLookAndFeel().findColour(juce::ResizableWindow::backgroundColourId));
}

void MainComponent::resized()
{
    testGui.setBounds(getLocalBounds().reduced(20));
    button.setBounds(getLocalBounds().reduced(50));
}