class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int s=0;
        int c=0;
        for(int i=0;i<events.size();i++){
            if(c<10){
                if(events[i]=="1"){
                    s+=1;
                }
                if(events[i]=="2"){
                    s+=2;
                }
                if(events[i]=="3"){
                    s+=3;
                }
                if(events[i]=="4"){
                    s+=4;
                }
                if(events[i]=="WD"){
                    s+=1;
                }
                if(events[i]=="6"){
                    s+=6;
                }
                if(events[i]=="W"){
                    if(c<10) c+=1;
                }
                if(events[i]=="NB"){
                    s+=1;
                }
            }
        }
        return {s,c};
    }
};