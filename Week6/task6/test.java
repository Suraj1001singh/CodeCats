// Goal Parser Interpretation
class Solution {
    public static String interpret(String command) {
        StringBuilder result = new StringBuilder();
        for (int i = 0; i < command.length(); i++) {
            if (command.charAt(i) == '(') {
                if (command.charAt(i + 1) == ')') {
                    result.append('o');
                    i += 1;
                    continue;
                } else {
                    result.append(command.charAt(i + 1));
                    result.append(command.charAt(i + 2));
                    i += 3;
                    continue;
                }
            } else {
                result.append(command.charAt(i));
            }
        }
        String answer = result.toString();
        return answer;
    }
}