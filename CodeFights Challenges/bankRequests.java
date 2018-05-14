int[] bankRequests(int[] accounts, String[] requests) {
    int req = 0;
    for(String request : requests){
        req++;
        String[] parsed = request.split(" ");
        String cmd = parsed[0];
        if(("transfer").equals(cmd)){
            int i = Integer.parseInt(parsed[1]); i--;
            int j = Integer.parseInt(parsed[2]); j--;
            int sum = Integer.parseInt(parsed[3]);
            if(accounts[i] < sum || i < 0 || i >= accounts.length || j < 0 || j >= accounts.length){
                return new int[]{-req};
            }
            accounts[i] -= sum;
            accounts[j] += sum;
        }
        if(("deposit").equals(cmd)){
            int i = Integer.parseInt(parsed[1]); i--;
            int sum = Integer.parseInt(parsed[2]);
            
            if(i < 0 || i >= accounts.length){
                return new int[]{-req};
            }
            accounts[i] += sum;
        }
        if(("withdraw").equals(cmd)){
            int i = Integer.parseInt(parsed[1]); i--;
            int sum = Integer.parseInt(parsed[2]);
            if(i < 0 || i >= accounts.length || accounts[i] < sum){
                return new int[]{-req};
            }
            accounts[i] -= sum;
        }        
    }
    return accounts;
}
