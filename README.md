### Visualize with gnuplot

set title "Temperature Distribution"
set xlabel "X (mm)"
set ylabel "Y (mm)"
set zlabel "Temperatura (°C)"
set pm3d
set hidden3d
splot "simul30seg"
