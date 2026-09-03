class Solution {
public:
    string largestOddNumber(string num) {
        //nt maxi=INT_MIN;
        // for(int i=0;i<num.size();i++){
        //     int x=num[i]-'0';
        //     if(x%2!=0){
        //         maxi=max(maxi,x);
        //     }
        // }
        // return (to_string(maxi));
       int i=num.size();
    //     int m=stoll(num);
    //     while(m!=0){
    //         // int ld=m%10;
    //         // if(ld%2!=0){
    //         //     maxi=m;
    //         //     break;
    //         // }
    //         // m/=10;
    //     }
    //     if(m==0){
    //         return "";
    //     }
    //     return (to_string(maxi));
    // }
    while(i--){
        if((num[i]-'0')%2!=0) break;

    }
    return num.substr(0,i+1);}

};