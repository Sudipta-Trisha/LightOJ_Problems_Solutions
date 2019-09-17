//using bisection method//
#include<bits/stdc++.h>
using namespace std;

double area(double AB, double BC, double AC)
{
    double s = (AB+BC+AC)/2.0;
    return sqrt(s*(s-AB)*(s-BC)*(s-AC));
}
double area1(double AD, double DE, double AE)
{
    double s = (AD+DE+AE)/2.0;
    return sqrt(s*(s-AD)*(s-DE)*(s-AE));
}

int main()
{
    int test, cnt=0;
    cin>>test;
    while(test--){
        double AB,BC,AC,ratio;
        cin>>AB>>BC>>AC>>ratio;
        
        double area_of_1st_triangle = area(AB,BC,AC);
        
        double AD,DE,AE;
        double low = 0.0, high = AB, mid;
        while((high-low)>0.0000001)
        {
            mid = (low+high)/2.0;
            AD = mid;
            DE = (AD*BC)/AB;
            AE = (AD*AC)/AB;
            
            double area_of_2nd_triangle = area1(AD,DE,AE);
            double area_of_trapezium = area_of_1st_triangle - area_of_2nd_triangle;
            
            double ratio2 = area_of_2nd_triangle/area_of_trapezium;
            if(ratio2<ratio)
                low = mid;
            else
                high = mid;
            
        }
        cnt++;
        printf("Case %d: %.6lf\n",cnt,AD);
    }
    return 0;
}
