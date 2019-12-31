//link: https://leetcode.com/problems/clone-graph/

/*
// Definition for a Node.
class Node {
    public int val;
    public List<Node> neighbors;

    public Node() {}

    public Node(int _val,List<Node> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/
class Solution {
    Map<Node, Node> visited = new HashMap<>();
    public Node cloneGraph(Node node) {
        Node clonedNode = new Node(node.val, new ArrayList<Node>());
        visited.put(node, clonedNode);
        for(Node neigh : node.neighbors){
            if(!visited.containsKey(neigh)){
                Node clonedNeigh = cloneGraph(neigh);
                visited.put(neigh, clonedNeigh);
                clonedNode.neighbors.add(clonedNeigh);
            }
            else{
                clonedNode.neighbors.add(visited.get(neigh));
            }
        }
        return clonedNode;
    }
}
