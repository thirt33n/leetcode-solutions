class Solution {
public:
    int countSeniors(vector<string>& details) {
     int c = 0;
     for(string pass:details)
     {
        int age = 0;
        age = (pass[11]-'0')*10+(pass[12]-'0');
            if(age>60)
                c++;
        }   
        return c;
    }
    
};