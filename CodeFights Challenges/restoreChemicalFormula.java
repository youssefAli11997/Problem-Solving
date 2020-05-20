// link: https://app.codesignal.com/challenge/aggdbc6TaZQSR7dFe

String[] eles;
String form;
List<String> currSol;
List<String> solution;

String restoreChemicalFormula(String[] elements, String formula) {
    eles = elements;
    form = formula;
    solution = new ArrayList<>();
    currSol = new ArrayList<>();
    solve(0);
    String ss = "";
    for(String s : solution) ss += s;
    return ss;
}

void solve(int i) {
    if(i == form.length()) {
        if(solution.isEmpty())
            solution = new ArrayList<String>(currSol);
        else 
            solution = better(solution, new ArrayList<String>(currSol));
        return;
    }

    for(String ele : eles) {
        if(i+ele.length() <= form.length()
        && ele.equalsIgnoreCase(form.substring(i,i+ele.length()))) {
            currSol.add(ele);
            solve(i+ele.length());
            currSol.remove(currSol.size()-1);
        }
    }
}

List<String> better(List<String> a, List<String> b) {
    if(a.size() < b.size()) return a;
    else if(a.size() > b.size()) return b;
    for(int i=0; i<a.size(); i++) {
        int comp = a.get(i).compareTo(b.get(i));
        if(comp > 0) return b;
        else if(comp < 0) return a;
    }

    return a;
}
