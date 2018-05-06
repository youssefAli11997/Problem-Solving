package CodeForces.CF_Round_479_Div3;

import java.util.*;

public class D_DivideByThreeMultiplyByTwo {
    static ArrayList<Integer> seq = new ArrayList<>();
    static boolean[] vis;
    static Map<Map.Entry<Integer, Long>, ArrayList<Integer>> adjList = new HashMap<>();
    static ArrayList<Long> arr = new ArrayList<>();
    static int n;

    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        n = in.nextInt();
        vis = new boolean[n+1];

        for(int i=0; i<n; i++){
            arr.add(in.nextLong());
        }

        for(int i=0; i<n; i++){
            long par = arr.get(i) * 3;
            long ch = arr.get(i) * 2;
            if(arr.contains(par)){
                if(!adjList.containsKey(new AbstractMap.SimpleEntry<Integer, Long>(arr.indexOf(par),par)))
                    adjList.put(new AbstractMap.SimpleEntry<Integer, Long>(arr.indexOf(par),par),  new ArrayList<>());
                adjList.getOrDefault(new AbstractMap.SimpleEntry<Integer, Long>(arr.indexOf(par),par),  new ArrayList<>()).add(i);
            }
            if(arr.contains(ch)){
                if(!adjList.containsKey(new AbstractMap.SimpleEntry<Integer, Long>(i,arr.get(i))))
                    adjList.put(new AbstractMap.SimpleEntry<Integer, Long>(i,arr.get(i)),  new ArrayList<>());
                adjList.getOrDefault(new AbstractMap.SimpleEntry<Integer, Long>(i,arr.get(i)),  new ArrayList<>()).add(arr.indexOf(ch));
            }
        }

        Integer root = getRoot();

        dfs(root);

        for(int i=0; i<seq.size(); i++){
            System.out.print(arr.get(seq.get(i)) + " ");
        }

    }

    private static void dfs(Integer node) {
        vis[node] = true;
        seq.add(node);
        if(adjList.get(new AbstractMap.SimpleEntry<Integer, Long>(node, arr.get(node))) == null) return;
        for(int ch : adjList.get(new AbstractMap.SimpleEntry<Integer, Long>(node, arr.get(node)))){
            if(!vis[ch]){
                dfs(ch);
            }
        }
    }

    private static Integer getRoot() {
        boolean[] fq = new boolean[n];
        for(Map.Entry<Map.Entry<Integer, Long>, ArrayList<Integer>> entry : adjList.entrySet()){
            for(int ele : entry.getValue()){
                fq[ele] = true;
            }
        }

        for(int i=0; i<fq.length; i++){
            if(!fq[i])
                return i;
        }
        return -1;
    }
}
