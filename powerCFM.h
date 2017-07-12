clc; clear all;vel = 24;
hts = 1;wts = 1;
lts = 4;density = 1.225;
number_fan = 36;
%Test Section Pressure Loss
dts = 2*sqrt(hts*wts/pi);
fts = 0.0099;
Kts = fts*lts/dts;
Pts = Kts*0.5*density*((vel)^2);
%Contraction Nozzle Pressure Loss
fnozzle = fts/2;
Lnozzle = 1;
dnozzle = dts;
Knozzle = 0.32*fnozzle*1 / dnozzle;
Pnozzle = Knozzle*0.5*density*((vel/2)^2);
Honeycomb Pressure Loss
Khc = 0.20;												 Phc = 0.20*0.5*density*vel*vel;
%Calculation of flow-rate, Power required
Ptot = Phc + Pnozzle + Pts;
Q = vel * hts * wts;
eff = 0.9;
power = Ptot * Q / eff;
power = vpa(power);
disp('Power(Watts)');
disp(power);
disp('Power (Hp)');
disp(power*0.00134102209)
disp(' Q(CFM)/Fan ')
aaa = [vpa(Q*2118.88)/number_fan];
disp(aaa);
