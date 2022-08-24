// 133. Code : Balanced Parenthesis: For a given a string expression containing only round brackets or parentheses, check if they are balanced or not. Brackets are said to be balanced if the bracket which opens last, closes first.

bool isBalanced(string expression) 
{
    
    int openParantheses = 0, closedParantheses = 0;
    
    if(expression[0] == ')'){
        
        return false;
    }
    
    for(int i = 0; i < expression.length(); i++){
        
        if(expression[i] == '('){
            
            openParantheses++;
        }
        else if(expression[i] == ')'){
            
            closedParantheses++;
        }
    }
    
    return openParantheses == closedParantheses;
}