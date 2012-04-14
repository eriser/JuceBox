/*
  ==============================================================================

    This file was auto-generated by the Introjucer!

    It contains the basic startup code for a Juce application.

  ==============================================================================
*/

#ifndef __PLUGINEDITOR_H_AD6CC46__
#define __PLUGINEDITOR_H_AD6CC46__

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"


//==============================================================================
/**
*/
class JuceBoxAudioProcessorEditor :
	public AudioProcessorEditor, public ButtonListener, public Timer
{
public:
    JuceBoxAudioProcessorEditor (JuceBoxAudioProcessor* ownerFilter);
    ~JuceBoxAudioProcessorEditor();

    void	paint(Graphics& g);
		void	resized();
		void	buttonClicked(Button* button);
		void	timerCallback();

protected:
		TextButton	button;
		Label 	pathLabel;
		Label 	infoLabel;
		MidiKeyboardComponent	midiKeyboard;

		JuceBoxAudioProcessor* getProcessor() const {
			return static_cast<JuceBoxAudioProcessor*> (getAudioProcessor());
			}
};


#endif  // __PLUGINEDITOR_H_AD6CC46__
