class Solution {
  public:
    bool isPossible(int a, int b) {
        // same traversal → not possible
        if(a == b) return false;
        
        // preorder + postorder → not possible
        if((a == 1 && b == 3) || (a == 3 && b == 1))
            return false;
        
        // all other cases → possible
        return true;
    }
};
