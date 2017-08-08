class SalaryCalculator{

  public :
  double calcHours(int P1, int P2, int salary){
  
    if(P1 * 200 >= salary)
      return salary * 1.0  / P1;
      
    return 200 + (salary - P1 * 200) *1.0 / P2;
    
  }
};
