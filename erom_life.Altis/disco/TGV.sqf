			"colorCorrections" ppEffectEnable true;
			"colorCorrections" ppEffectAdjust [1, 1, 0, [0,0,0,0.5], [random 5 - random 5,random 5 - random 5,random 5 - random 5,random 1], [random 5 - random 5,random 5 - random 5,random 5 - random 5, random 1]];
			"colorCorrections" ppEffectCommit 1;
			"radialBlur" ppEffectEnable true;					
			"radialBlur" ppEffectAdjust [0.03,0.11,0.8,0.15]; 
			"radialBlur" ppEffectCommit 10;	
			
			sleep (10); 
			5 fadeSound 0.1; // fades the sound to 10% in 5 seconds
			player setFatigue 1; // sets the fatigue to 100%
			addCamShake [200, 80, 0.4];	
			sleep (4); 			
			addCamShake [100, 60, 0.3];	
			sleep (5); 					
			addCamShake [50, 60, 0.2];
			sleep (6); 			
			"colorCorrections" ppEffectAdjust [1, 1, 0, [0,0,0,0], [1,1,1,1], [1,1,1,1]]; 
			"colorCorrections" ppEffectCommit 10;

			"chromAberration" ppEffectAdjust [0,0,true]; 
			"chromAberration" ppEffectCommit 10;	

			"radialBlur" ppEffectAdjust [0,0,0.15,0.15]; 
			"radialBlur" ppEffectCommit 10;
			
			sleep (20); 
            resetCamShake;			
			"colorCorrections" ppEffectEnable false; 
			"chromAberration" ppEffectEnable false; 
			"radialBlur" ppEffectEnable false;			
			20 fadeSound 1; //fades the sound back to normal