// problem link : https://www.codewars.com/kata/576757b1df89ecf5bd00073b
class Kata
{
public:
    std::vector<std::string> towerBuilder(int nFloors)
    {
        std::vector<std::string> vs;
        for(int i=0; i<nFloors; i++){
          vs.push_back("");
          for(int j=0; j<nFloors-i-1; j++) vs[i] += " ";
          for(int j=0; j<i*2+1      ; j++) vs[i] += "*";
          for(int j=0; j<nFloors-i-1; j++) vs[i] += " ";
        }
        return vs;
    }
};
