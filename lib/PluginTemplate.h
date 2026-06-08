#pragma once
#include <JuceHeader.h>
class FleetMidiProcessor : public juce::AudioProcessor {
public:
    FleetMidiProcessor() : AudioProcessor(BusesProperties().withOutput("Output", juce::AudioChannelSet::stereo())) {}
    void processBlock(juce::AudioBuffer<float>& b, juce::MidiBuffer& m) override {
        for(auto i=getTotalNumInputChannels();i<getTotalNumOutputChannels();++i) b.clear(i,0,b.getNumSamples());
    }
    juce::AudioProcessorEditor* createEditor() override { return nullptr; }
    const juce::String getName() const override { return "Fleet MIDI"; }
    bool acceptsMidi() const override { return true; }
    bool producesMidi() const override { return false; }
    double getTailLengthSeconds() const override { return 0.0; }
    int getNumPrograms() override { return 1; }
    int getCurrentProgram() override { return 0; }
    void setCurrentProgram(int) override {}
    const juce::String getProgramName(int) override { return {}; }
    void changeProgramName(int, const juce::String&) override {}
    void getStateInformation(juce::MemoryBlock&) override {}
    void setStateInformation(const void*, int) override {}
};
