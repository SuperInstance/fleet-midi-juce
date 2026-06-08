// JUCE VST Plugin Template — fleet MIDI receiver
// This is a header stub. Full JUCE plugin requires Projucer project file.
// Build: Projucer -> export Xcode/VS -> compile as VST3/AU
#pragma once
#include <JuceHeader.h>

class FleetMidiProcessor : public juce::AudioProcessor {
public:
    FleetMidiProcessor() : AudioProcessor(BusesProperties().withOutput("Output", juce::AudioChannelSet::stereo())) {}
    void processBlock(juce::AudioBuffer<float>&, juce::MidiBuffer&) override {}
    juce::AudioProcessorEditor* createEditor() override { return nullptr; }
    const juce::String getName() const override { return "Fleet MIDI"; }
};
