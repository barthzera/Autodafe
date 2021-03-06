#include "Autodafe.hpp"
#include <math.h>
#include "dsp/digital.hpp"
#include "dsp/decimator.hpp"
#include "dsp/fft.hpp"
#include "dsp/filter.hpp"
#include "dsp/fir.hpp"
#include "dsp/frame.hpp"
#include "dsp/minblep.hpp"
#include "dsp/ode.hpp"
#include "dsp/ringbuffer.hpp"
#include "dsp/samplerate.hpp"



<<<<<<< HEAD




=======
>>>>>>> b21f5674d48ade4815d1098f8437472628d31254
Plugin *plugin;

void init(rack::Plugin *p) {
	plugin = p;
	plugin->slug = "Autodafe";
<<<<<<< HEAD
	
	#ifdef VERSION
	p->version = TOSTRING(VERSION);
	#endif


  

		p->addModel(createModel<Multiple18Widget>("Autodafe",  "Multiple 1x8", "Multiple 1x8", UTILITY_TAG));
		p->addModel(createModel<Multiple28Widget>("Autodafe",  "Multiple 2x8", "Multiple 2x8", UTILITY_TAG));

		p->addModel(createModel<LFOWidget>("Autodafe", "LFO", "LFO", LFO_TAG));
		p->addModel(createModel<KeyboardModelWidget>("Autodafe",  "Keyboard", "Keyboard", UTILITY_TAG));
		p->addModel(createModel<BPMClockWidget>("Autodafe", "BPM Clock", "BPM Clock", UTILITY_TAG, CLOCK_TAG));
		p->addModel(createModel<ClockDividerWidget>("Autodafe",  "Clock Divider", "Clock Divider", UTILITY_TAG));
	
		p->addModel(createModel<SEQ8Widget>("Autodafe",  "8-Steps Sequencer", "8-Steps Sequencer", SEQUENCER_TAG));
		p->addModel(createModel<SEQ16Widget>("Autodafe", "16-Steps Sequencer", "16-Steps Sequencer", SEQUENCER_TAG));
		p->addModel(createModel<TriggerSeqWidget>("Autodafe","8x16 Trigger Sequencer", "8x16 Trigger Sequencer", SEQUENCER_TAG));
=======
	plugin->name = "Autodafe";
	plugin->homepageUrl = "https://www.autodafe.net";
		createModel<LFOWidget>(plugin, "LFO", "LFO");
		createModel<ClockDividerWidget>(plugin, "Clock Divider", "Clock Divider");
		createModel<Multiple18Widget>(plugin, "Multiple 1x8", "Multiple 1x8");
		createModel<Multiple28Widget>(plugin, "Multiple 2x8", "Multiple 2x8");
		createModel<SEQ8Widget>(plugin, "8-Steps Sequencer", "8-Steps Sequencer");
		createModel<SEQ16Widget>(plugin, "16-Steps Sequencer", "16-Steps Sequencer");
		createModel<TriggerSeqWidget>(plugin, "8x16 Trigger Sequencer", "8x16 Trigger Sequencer");
		createModel<FixedFilterWidget>(plugin, "Fixed Filter Bank", "Fixed Filter Bank");
		createModel<MultiModeFilterWidget>(plugin, "MultiMode Filter", "MultiMode Filter ");
		createModel<FormantFilterWidget>(plugin, "Formant Filter", "Formant Filter");
		createModel<FoldBackWidget>(plugin, "Foldback Distortion", "Foldback Distortion");
		createModel<BitCrusherWidget>(plugin, "BitCrusher", "BitCrusher");
		createModel<PhaserFxWidget>(plugin, "Phaser", "Phaser");
	
		
		
>>>>>>> b21f5674d48ade4815d1098f8437472628d31254
		

		p->addModel(createModel<FixedFilterWidget>("Autodafe", "Fixed Filter Bank", "Fixed Filter Bank", FILTER_TAG));
		p->addModel(createModel<MultiModeFilterWidget>("Autodafe", "MultiMode Filter", "MultiMode Filter", FILTER_TAG));
		p->addModel(createModel<FormantFilterWidget>("Autodafe", "Formant Filter", "Formant Filter", FILTER_TAG));
		
<<<<<<< HEAD

		p->addModel(createModel<FoldBackWidget>("Autodafe",  "Foldback Distortion", "Foldback Distortion", EFFECT_TAG, WAVESHAPER_TAG, DISTORTION_TAG));
		p->addModel(createModel<BitCrusherWidget>("Autodafe", "BitCrusher", "BitCrusher", EFFECT_TAG));
		p->addModel(createModel<PhaserFxWidget>("Autodafe",  "Phaser", "Phaser", EFFECT_TAG));
		p->addModel(createModel<ChorusFxWidget>("Autodafe",  "Chorus", "Chorus", EFFECT_TAG));
=======
		//printf("%p %p\n", plugin, &plugin);
>>>>>>> b21f5674d48ade4815d1098f8437472628d31254
		
		p->addModel(createModel<ReverbFxWidget>("Autodafe", "Reverb", "Reverb", EFFECT_TAG, REVERB_TAG));
	
	

		
	

	}


