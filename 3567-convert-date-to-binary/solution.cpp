class Solution {
public:
    string convertDateToBinary(string date) {
        string ans="";
        vector<string> a;
        for(int i=0;i<date.length();i++){
            if(date[i]=='-'){
                a.push_back(ans);
                ans="";
                continue;
            }
            ans=ans+date[i];
        }
        a.push_back(ans);
        string year =bitset<16>(stoi(a[0])).to_string();
        string month = bitset<4>(stoi(a[1])).to_string();
        string day = bitset<8>(stoi(a[2])).to_string();
        
        year = year.substr(year.find_first_not_of('0'));
        month = month.substr(month.find_first_not_of('0'));
        day = day.substr(day.find_first_not_of('0'));
        
        if (year.empty()) year = "0";
        if (month.empty()) month = "0";
        if (day.empty()) day = "0";
         return year+'-'+month+'-'+day;
        
    }
};
