/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class Bib_EQ3AudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    Bib_EQ3AudioProcessorEditor (Bib_EQ3AudioProcessor&);
    ~Bib_EQ3AudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    Bib_EQ3AudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Bib_EQ3AudioProcessorEditor)
};
