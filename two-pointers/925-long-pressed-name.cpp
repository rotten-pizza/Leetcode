class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int pointer1=0,pointer2=1;
        if(name[0]!=typed[0])return false;
        for(int i=1;i<name.size();i++){
            if(name[i]==typed[pointer2]){
                pointer2++;
            }
            else {
                while(pointer2<typed.size()&&typed[pointer2]==name[i-1]){
                    pointer2++;
                }
                if(pointer2>=typed.size())return false;
                else if(typed[pointer2]!=name[i])return false;
                else pointer2++;
            }
        }
        if(pointer2<typed.size()&&typed.size()>2){
            for(int i=pointer2;i<typed.size();i++){
                if(typed[pointer2-1]!=typed[i])return false;
            }
        }
        return true;
    }
};