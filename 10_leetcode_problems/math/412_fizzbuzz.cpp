class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer;         //create an empty vector of strings to store the final results
        for(int i=1; i<=n; i++){
        if(i%15==0){                      //first divisibility by 15 is checked, if not then multiples of 15 are ignored
            answer.push_back("FizzBuzz");
        }
        else if(i%3==0){                 //check divisibility by 3
            answer.push_back("Fizz");
        }
        else if(i%5==0){                 //check divisibility by 3
            answer.push_back("Buzz");
        }
        else{                          //if all cases fail convert the integer to a string and add it
            answer.push_back(to_string(i));  
        }
    
        }
         return answer;   //return the completed list after the loop finishes
    }       
};
