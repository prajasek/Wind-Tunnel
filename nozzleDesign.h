clc;
clear all;
close all;
x1 = -1:0.1:0;   %Initial x-value (Inlet)
x2 = 0:0.1:1;    %Nozzle shape
x2=x2'; x1 = x1';
s1 = size(x1);
y1 = 2*ones(s1(1),1);
s = size(x2);
hi =2*ones(s(1),1);   %inlet height
he= 0.5*ones(s(1),1); %Outlet height
%5th Order polynomial formula
bckt = (6*(x2.^5) - (15*(x2.^4)) + (10*(x2.^3)));
diff = hi - he;
tot = diff.*bckt;
y2 = hi - tot;
y = vertcat(y1,y2);
cx = vertcat(x1,x2);                                                                   plot(cx,y,'r','LineWidth',3);
hold on;
plot(cx,-y,'r','LineWidth',3)
axis([-1.5 1.5 -4 4])
line([-1 -1] , [-2 2], 'LineWidth', 3, 'Color', 'r');
