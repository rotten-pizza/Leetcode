class Solution {
public:
    bool ipv4(string &s){
        std::stringstream ss(s);
        string t;
        int count=0;
        while(std::getline(ss,t,'.')){
            count++;
            if(t.empty()||t.size()>3)return false;
            if(t[0]=='0'&&t.size()>1)return false;
            for(int i=0;i<t.size();i++){
                if(t[i]>='0'&&t[i]<='9')continue;
                else return false;
            }
            if(stoi(t)>255)return false;
        }
        if(count!=4)return false;
        if(s.back()=='.')return false;
        return true;
    }
    bool ipv6(string &s){
        std::stringstream ss(s);
        string t;
        int count=0;
        while(std::getline(ss,t,':')){
            // if(t.empty())return false;
            count++;
            if(t.size()<1||t.size()>4)return false;
            for(int i=0;i<t.size();i++){
                if((t[i]>='0'&&t[i]<='9')||(t[i]>='A'&&t[i]<='F')||(t[i]>='a'&&t[i]<='f'))continue;
                else return false;
            }
        }
        if(count!=8)return false;
        if(s.back()==':')return false;
        return true;
    }

    string validIPAddress(string queryIP) {
        if( ipv4(queryIP))return "IPv4";
        if( ipv6(queryIP))return "IPv6";
        return "Neither";
    }
};