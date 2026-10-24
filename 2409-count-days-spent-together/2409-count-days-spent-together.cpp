class Solution {
public:
    int getdays(string date){
        int mon=stoi(date.substr(0,2));
        int d=stoi(date.substr(3,2));
        int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
        int total=d;
        for(int i=0;i<mon-1;i++){
            total+=days[i];
        }
        return total; // will return from jan to date

    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int a1=getdays(arriveAlice);
        int a2=getdays(leaveAlice);
        int b1=getdays(arriveBob);
        int b2=getdays(leaveBob);
        int start=max(a1,b1);
        int end=min(a2,b2);
        if(start>end) return 0;
        return end-start+1;
        
        


    }
};