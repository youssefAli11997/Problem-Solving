// problem link : https://codefights.com/challenge/tuX9NefHfwnPBFZoW/
// solution by : youssef_ali
// codefights profile : https://codefights.com/profile/youssef_ali

function secretArchivesLock(lock, actions) {
    for(var i=0; i<lock.length; i++)
        lock[i] = lock[i].split("");
        
    for(var k=0; k<actions.length; k++){
        
        if(actions[k] == 'L')for(var i=0; i<lock.length; i++){ // left
            for(var j=0; j<lock[0].length; j++){
                if(lock[i][j] != '.'){
                    for(var w=0; w<j; w++){
                        if(lock[i][w] == '.'){
                            lock[i][w] = lock[i][j];
                            lock[i][j] = '.';
                            break;
                        }
                    }
                }
            }
        }
        
        if(actions[k] == 'U')for(var i=0; i<lock[0].length; i++){ // up
            for(var j=0; j<lock.length; j++){
                if(lock[j][i] != '.'){
                    for(var w=0; w<j; w++){
                        if(lock[w][i] == '.'){
                            lock[w][i] = lock[j][i];
                            lock[j][i] = '.';
                            break;
                        }
                    }
                }
            }
        }
        
        if(actions[k] == 'R')for(var i=0; i<lock.length; i++){ // right
            for(var j=lock[0].length-1; j>=0; j--){
                if(lock[i][j] != '.'){
                    for(var w=lock[0].length-1; w>j; w--){
                        if(lock[i][w] == '.'){
                            lock[i][w] = lock[i][j];
                            lock[i][j] = '.';
                            break;
                        }
                    }
                }
            }
        }
        
        if(actions[k] == 'D')for(var i=0; i<lock[0].length; i++){ // down
            for(var j=lock.length-1; j>=0; j--){
                if(lock[j][i] != '.'){
                    for(var w=lock.length-1; w>j; w--){
                        if(lock[w][i] == '.'){
                            lock[w][i] = lock[j][i];
                            lock[j][i] = '.';
                            break;
                        }
                    }
                }
            }
        }
        
    }
    
    for(var i=0; i<lock.length; i++)
        lock[i] = lock[i].join("");
        
    return lock;
}
