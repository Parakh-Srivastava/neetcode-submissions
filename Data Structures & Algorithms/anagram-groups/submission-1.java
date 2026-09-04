class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        Map<String, List<String>> group = new HashMap<>();
        List<List<String>> ans = new ArrayList();
        for(String s : strs){
            char[] c = s.toCharArray();
            Arrays.sort(c);
            String key = new String(c);
            if(group.containsKey(key)) group.get(key).add(s);
            else {
                List<String> val = new ArrayList();
                val.add(s);
                group.put(key,val);
            }
        }
        ans.addAll(group.values());
        return ans;
    }
}
