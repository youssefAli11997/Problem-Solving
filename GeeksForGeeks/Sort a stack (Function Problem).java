// problem link : http://practice.geeksforgeeks.org/problems/sort-a-stack/1/
class GfG{
	public Stack<Integer> sort(Stack<Integer> s)
	{
		Stack<Integer> tmpStack = new Stack<>();
		int x = 0;
		
		while(!s.isEmpty()){
		    x = s.pop();
		    while(!tmpStack.isEmpty() && tmpStack.peek() > x){
		        s.push(tmpStack.pop());
		    }
		    tmpStack.push(x);
		}
		return tmpStack;
	}
}
