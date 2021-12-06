// LeetCode : Check Whether Two Strings are Almost Equivalent.
class Solution {
    public boolean checkAlmostEquivalent(String word1, String word2) {
        int[] array1 = new int[26];
        int[] array2 = new int[26];
        for (int i = 0; i < word1.length(); i++) {
            array1[word1.charAt(i) - 'a']++;

        }
        for (int i = 0; i < word2.length(); i++) {
            array2[word2.charAt(i) - 'a']++;

        }
        for (int i = 0; i < 26; i++) {
            if (Math.abs(array1[i] - array2[i]) > 3) {
                return false;
            }
        }
        return true;

    }
}