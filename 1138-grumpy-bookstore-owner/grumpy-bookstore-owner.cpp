class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int hapCust = 0,unHapCust = 0;
        int sol  = 0;
        for(int i=0;i<customers.size();i++)
        {
            if(grumpy[i] == 0)  //Bros not grumpy so all customers in i are happy
                hapCust+=customers[i];
            else
                unHapCust+=customers[i]; // Bros grumpy so all customers are unhappy
            
            if(i>=minutes && grumpy[i-minutes] == 1) //If the sliding window is more than 
                unHapCust-=customers[i-minutes];    //the minutes he can be not grumpy, shrink the window
            sol = max(sol,unHapCust);   //We find the max amount of unhappy customers in a minute,where this man can be not grumpy therefore maximising staisfied people
        }

        return sol+hapCust; //Adding the maxUnhappyCustomers turned happy and og happy customers
    }
};