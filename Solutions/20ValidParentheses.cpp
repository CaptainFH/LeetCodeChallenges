class Solution {
public:
    bool isValid(string s) {
       stack<char> test;
       test.push('d');
       for(char c : s){
           if (c == '(' || c == '[' || c == '{'){
               test.push(c);
           } else if (( c == ')' &&  '(' == test.top()) || ( c == ']' &&  '[' == test.top()) || ( c == '}' &&  '{' == test.top())){
               cout << test.size() << endl;
               test.pop();
               cout << test.size() << endl;
           }else {
               return false;
           }
       }
       return !(test.size() - 1);
    }
};
