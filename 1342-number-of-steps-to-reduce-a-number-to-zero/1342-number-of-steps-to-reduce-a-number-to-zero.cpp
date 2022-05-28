class Solution {
public:
    int numberOfSteps(int num) {
        int s=0;
        while(num>0)
        {
            s++;
            if(num%2 == 0)
            {
                num=num/2;
            }
            else
            {
                num=num-1;
            }
        
        }
        return s;
    }
};