
#include "myMath.h"



double power (double x, int y){
double ans = 1

;while(y>0){
ans = ans*x;
y=y-1;
}

;while(y<0){
ans=ans/x;
y=y+1;
}

return ans;

}


double exponent (int x){
double ans= 1.0* power(E,x);
return ans;
}
