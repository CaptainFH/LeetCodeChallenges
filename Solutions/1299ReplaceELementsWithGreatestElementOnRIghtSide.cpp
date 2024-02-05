class Solution {
public:
	vector<int> replaceElements(vector<int>& arr) {
		// write your code here
		int biggest = arr.at(arr.size()-1);
		int prevBiggest;
		arr.at(arr.size()-1) = -1;
		for(int i = arr.size()-2; i > -1; i--){
		    if (arr.at(i) > biggest){
		    prevBiggest = biggest;
		    biggest = arr.at(i);
		    arr.at(i) = prevBiggest;
		    }else{
		       arr.at(i) = biggest;
		    }
		}
		return arr; 
	}
};
