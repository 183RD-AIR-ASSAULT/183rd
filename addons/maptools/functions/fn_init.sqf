
call oeta_maptools_fnc_straight_lines;
call oeta_maptools_fnc_mapmeasure;

player createDiarySubject ["oeta_maptools","Maptools"];
player createDiaryRecord ["oeta_maptools", ["mapmeasurer", "If you are playing with ACE3 and you have the maptools, distance of a free drawn line will shown."]];
player createDiaryRecord ["oeta_maptools", ["straight lines", "While hold the alt key and left mouse button straight line will be drawn.<br /> If you releas alt key before left mouse button drawing will interupted. <br />If you are playing with ACE3, and you have the maptool, distance and  angel will shown."]];
