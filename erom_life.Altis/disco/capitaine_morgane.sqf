			"colorCorrections" ppEffectEnable true; 			
			"colorCorrections" ppEffectAdjust [1, 2, 0, [0.8,0.9,1,-0.1], [1,2,1,2], [1,0,-1,5]]; 
			"colorCorrections" ppEffectCommit 10;	
			"radialBlur" ppEffectEnable true;					
			"radialBlur" ppEffectAdjust [0.02,0.02,0.15,0.15]; 
			"radialBlur" ppEffectCommit 10;	
			
			sleep (10); 
			5 fadeSound 0.1; // fades the sound to 10% in 5 seconds
			player setFatigue 1; // sets the fatigue to 100%
			addCamShake [75, 40, 0.3];	
			sleep (4); 			
			addCamShake [62, 50, 0.2];	
			sleep (5); 					
			addCamShake [23, 60, 0.1];
			sleep (6); 			
			"colorCorrections" ppEffectAdjust [1, 1, 0, [0,0,0,0], [1,1,1,1], [1,1,1,1]]; 
			"colorCorrections" ppEffectCommit 10;

			"chromAberration" ppEffectAdjust [0,0,true]; 
			"chromAberration" ppEffectCommit 10;	

			"radialBlur" ppEffectAdjust [0,0,0.15,0.15]; 
			"radialBlur" ppEffectCommit 10;
			
			sleep (10); 
            resetCamShake;			
			"colorCorrections" ppEffectEnable false; 
			"chromAberration" ppEffectEnable false; 
			"radialBlur" ppEffectEnable false;			

