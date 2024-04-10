set terminal png 
set datafile separator "\t ,"
set grid#グリッド線　描画
  
file="./log/log.csv"

set output "./fig/test.png"
set autoscale x
set autoscale y
set xlabel "Time [sec]"
set ylabel "Position [m]"

plot file using 1:2 title "Analytical" w l lw 2, file using 1:3 title "Euler" w l lw 2, file using 1:4 title "Runge_Kutta" w l lw 2