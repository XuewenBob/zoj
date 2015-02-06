#include <stdio.h>
double old_cost(int distance,int time){
	double cost=0.0;
	if(distance<=3)
		cost+=10.0;
	else if(distance>3&&distance<=10)
	    cost+=(distance-3)*2+10.0;
    else 
	    cost+=24.0+(distance-10)*3;
	cost+=time/5.0*2.0+1.0;	
	return cost;
}
double oldcost(int distance,int time){
	 double oldpay;
     int realpay;  
	 oldpay=old_cost(distance,time);
	 realpay=((oldpay+0.0000000001))*10;
	    if((int)realpay%10>=5)
	    	return realpay/10+1;
	    else
	    	return realpay/10;
}
double new_cost(int newdistance,int newtime){
	int a,b;
	double newcost=0.0;
	if(newdistance<=3)
		newcost+=11.0+(newtime/4.0)*2.5;
	else if(newdistance>3&&newdistance<=10)
	    newcost+=(newdistance-3)*2.5+11.0+newtime/4.0*2.5;
    else 
        newcost+=28.5+(newdistance-10)*3.75+newtime/4.0*2.5;	
	return newcost;
}
double newcost(int distance,int time){
	 double newpay;
	 int realpay;
	 newpay=new_cost(distance,time);
	 realpay=((newpay+0.0000000001))*10;
	    if((int)realpay%10>=5)
	    	return realpay/10+1;
	    else
	    	return realpay/10;
}

int main(int argc, char *argv[])
{
	int cases;
	scanf("%d",&cases);
	while(cases--){
		int distance,time,oldpay,newpay;
	    scanf("%d %d",&distance,&time);
	    oldpay=oldcost(distance,time);
	    newpay=newcost(distance,time);
	     
	    printf("%d\n",newpay-oldpay);
	}
	return 0;
}