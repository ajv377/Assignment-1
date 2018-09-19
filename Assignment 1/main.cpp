#include <iostream>

using namespace std;

int main(){
    
    srand(time(NULL));
    string Mode;
    
    int operand1, operand2, AnsCounter;
    double userAnswer;
    
    //Acts as the "switch" of the questionnaire loop
    int sentinelValue = 1;
    
    cout << "#################################" << endl;
    cout << "          W E L C O M E          " << endl;
    cout << "#################################" << endl;
    
    cout << endl;
    cout << endl;
    
    
    while (sentinelValue == 1){
        
        //Menu
        cout << "This program can test you on either: " << endl;
        cout << "1: Multiplication" << endl;
        cout << "2: Dvisiion" << endl;
        cout << "3: Exit" << endl;
        
        
        cout << "Please make a selection (1-3): ";
        cin >> Mode; //Takes in the selection of which mode the user chooses
        
        AnsCounter = 0;
        
        //Multiplication Mode
        if (Mode == "1"){
            
            cout << "You picked the multiplication quiz" << endl;
            cout << endl;
            
            //Loop that generates 10 questions
            for (int i = 0; i < 10; i++){
                
                operand1 = rand()%10; //Generates first operand
                operand2 = rand()%10; //Generates second operand
                
                cout << i+1 << ") " << operand1 << " x " << operand2 << " = "; //Displays the question
                cin >> userAnswer;
                
                //Checks if user's answer is correct and increments the number of answers the user got correct
                if (userAnswer == operand1*operand2)
                    AnsCounter++;
            }
            
            
            
            cout << endl;
            
            //Displays the output when the user passes the quiz
            if (AnsCounter >= 7)
                cout << "Congratulations!!! You got " << AnsCounter << "/10 \n" << endl;
            //Displays the output when the user fails the quiz
            else
                cout << "Please ask your teacher for help! You got " << AnsCounter << "/10 \n" << endl;
        }
        
        //Division Mode
        else if (Mode == "2"){
            
            cout << "You picked the division quiz" << endl;
            cout << endl;
            
            //Loop that generates 10 questions
            for (int i = 0; i < 10; i++){
                
                operand1 = rand()%10; //Generates first operand
                operand2 = rand()%10; //Generates second operand
                
                cout << i+1 << ") " << operand1 << " ÷ " << operand2 << " = ";
                cin >> userAnswer;
                
                //Checks if user's answer is correct
                if (userAnswer == operand1 / operand2)
                    AnsCounter++;
            }
            
            //Displays the output when the user passes the quiz
            if (AnsCounter >= 7)
                cout << "Congratulations!!! You got " << AnsCounter << "/10 \n" << endl;
            //Displays the output when the user fails the quiz
            else
                cout << "Please ask your teacher for help! You got " << AnsCounter << "/10 \n" << endl;
            
        }
        
        
        //Exits loop and exits program
        else if (Mode == "3")
            sentinelValue = 0;
        
        
        //Repeats the loop until user enters a valid option (1-3)
        else{
            cout << endl;
            cout << endl;
            cout << "# # # # # # # ERROR  # # # # # # #" << endl;
            cout << "   PLEASE ENTER A VALID OPTION    " << endl;
            cout << "# # # # # # # ERROR  # # # # # # #" << endl;
            cout << endl;
            cout << endl;
        }
    }
    
    
    
    cout << endl;
    cout << endl;
    cout << "#################################" << endl;
    cout << "P R O G R A M     F I N I S H E D" << endl;
    cout << "#################################" << endl;
    cout << endl;
    cout << endl;
    
    cout << endl;
    cout << endl;
    cout << endl;
    
    cout << "H A V E  A  N I C E  D A Y" << endl;
    
    
    
    
    
    
    
    
    
    return 0;
}


