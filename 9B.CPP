accept
show
sum

sec=t1.sec+t2.sec;
min=sec/60;
sec=%60;
min=t1.min+t2.min;
hrs=min/sec;
min=min%60;
hrs=hrs+t1.hrs+t2.hrs;

main
 objects
time t1,t1,t3;