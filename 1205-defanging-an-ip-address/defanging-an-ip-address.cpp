class Solution {
public:
    string defangIPaddr(string address) {
        int index=0;
        
        while (index<address.size()){
            if (address[index]=='.'){
                address.replace(index, 1, "[.]");
                index=index+3;
            }
            else {
                index++;
            }
        }
        return address;
    }
};