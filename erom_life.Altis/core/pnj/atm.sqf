_this enableSimulation false;
_this allowDamage false;
_this addAction["<t color='#ADFF2F'>ATM</t>",life_fnc_atmMenu]; 
_this addAction["Voler ATM",life_fnc_robATM,"",0,FALSE,FALSE,"",' vehicle player == player && player distance _target < 2.5 '];
_this addAction["Assurance Bancaire (1,000€)",{if(life_atmcash > 1000) then {life_has_insurance = true; life_atmcash = life_atmcash - 1000};},"",0,false,false,"",'!life_has_insurance'];