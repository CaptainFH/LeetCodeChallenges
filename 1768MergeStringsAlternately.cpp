class Solution {
    public String mergeAlternately(String word1, String word2) {
        String result = "";
        int endOfWhile = word1.length() + word2.length();
        int iterator1 = 0;
        int iterator2 = 0;
        boolean unoDos = false;
        while(result.length() < endOfWhile){
            System.out.println(result);
            
            if(!unoDos && (iterator1 < word1.length())){
                result = result + word1.charAt(iterator1);
                iterator1++;
            }else if(iterator2 < word2.length()){
                result = result + word2.charAt(iterator2);
                iterator2++;
            }
            unoDos = !unoDos;
        }
        return result;
    }
}
