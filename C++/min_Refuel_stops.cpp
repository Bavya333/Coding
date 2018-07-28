#include<iostream>
#include<vector>
using namespace std;
int minRefuelStops(int target, int startFuel, vector <vector<int> > & stations)
{
        int max,max_pos,flag,station;
        station=0;
//        int n=stations.size());
        while(target)
        {
            max=0;
            max_pos=0;
            flag=0;
            for(size_t i=0;i<stations.size();i++)
            {
                if(stations[i][0]<=startFuel && stations[i][1]>max)
                {
                    max=stations[i][1];
                    max_pos=i;
                    flag=1;
                }
            }
            if(flag)
            {
                target-=max;
                stations[max_pos][1]=0;
                startFuel=max+(startFuel-stations[i][0]);
                station++;
            }
            else if(target<=startFuel)
                target=0;
            else
            {
                break;    
            }
        }
        return target?-1:station;
}
int main()
{
	vector <vector<int> > stations;
	int target = 100;
	int startFuel = 10;
	stations[0][0]=10;
	stations[0][1]=60;
	stations[1][0]=20;
	stations[1][1]=30;
	stations[2][0]=30;
	stations[2][1]=30;
	stations[3][0]=60;
	stations[3][1]=40;
	cout<<minRefuelStops(target,startFuel,stations);
}
