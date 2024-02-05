class Solution {
public:
    bool winnerOfGame(string colors) {
        int aliceMoves = 0;
        int bobMoves = 0;
        char currentCharacter = colors[0];
        int currentSetSize = 1;
        for(int i = 1; i < colors.size(); i++){
            if (colors[i] == currentCharacter){
                currentSetSize++;
            }else{
                if(currentSetSize >= 3){
                    switch(currentCharacter){
                        case 'A':
                        aliceMoves += (currentSetSize - 2);
                        break;
                        case 'B':
                        bobMoves += (currentSetSize -2);
                        break;
                    }
                }
                currentCharacter = colors[i];
                currentSetSize = 1;
            }
        }
        if(currentSetSize >= 3){
            switch(currentCharacter){
                case 'A':
                aliceMoves += (currentSetSize - 2);
                break;
                case 'B':
                bobMoves += (currentSetSize -2);
                break;
            }
        }
        if (aliceMoves > bobMoves){
            return true;
        }
        return false;
    }
};
