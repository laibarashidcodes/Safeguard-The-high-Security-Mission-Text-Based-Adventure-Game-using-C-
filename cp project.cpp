#include <iostream> 
#include <string> 
using namespace std; 
// Function to handle the main part of the adventure 
void startAdventure() { 
string choice; 
cout << "\n Welcome to Safeguard: The High-Security 
Mission\n"; 
cout << "\nAn alarm sounds. You are the head of security 
in a University at a top-secret research facility.\n"; 
cout << "Your mission is to stop an intruder from accessing 
the university's sensitive research files.\n"; 
cout << "\nYou are currently in the security office. There 
are 3 areas you can go to:\n"; 
cout << "1. Control Room (for monitoring security cameras 
and alarms)\n"; 
cout << "2. Elevator (to head to the top floor where the 
files are stored)\n"; 
 
    cout << "3. Storage Room (to gather supplies)\n"; 
    cout << "\nWhat will you do? (Enter 1, 2, or 3): "; 
    cin >> choice; 
    if (choice == "1") { 
        cout << "\nYou enter the Control Room. The screens 
show the intruder has reached the main lobby.\n"; 
        cout << "You can:\n"; 
        cout << "1. Lock all doors to slow the intruder.\n"; 
        cout << "2. Use the intercom system to alert all 
personnel.\n"; 
        cout << "\nWhat will you do? (Enter 1 or 2): "; 
        cin >> choice; 
        if (choice == "1") { 
            cout << "\nThe doors are locked. The intruder is 
delayed, but they are trying to disable the locks.\n"; 
            cout << "Do you want to:\n"; 
            cout << "1. Stay in the Control Room and monitor 
their progress.\n"; 
            cout << "2. Head to the Elevator to prepare for a direct 
confrontation.\n"; 
            cout<<"\n What will you do?(Enter 1 or 2) :"; 
 
            cin >> choice; 
            if (choice == "1") { 
                cout << "\nYou monitor the screens. The intruder 
disables the locks faster than expected and heads to the 
elevator.\n"; 
                cout << "You rush to the top floor but are too late. 
Game Over.\n"; 
            } else { 
                cout << "\nYou head to the Elevator. You intercept 
the intruder and, after a tense standoff, manage to stop 
them.\n"; 
                cout << "Mission accomplished!\n"; 
            } 
        } else { 
            cout << "\nYou alert all personnel. A team rushes to 
intercept the intruder, but they are overpowered.\n"; 
            cout << "The intruder reaches the elevator and 
disables the alarms. Game Over.\n"; 
        } 
    }  
    else if (choice == "2") { 
 
        cout << "\nYou head to the Elevator. The intruder is 
already in the building.\n"; 
        cout << "Do you:\n"; 
        cout << "1. Take the elevator to the top floor to secure 
the files?\n"; 
        cout << "2. Wait to ambush the intruder near the 
elevator?\n"; 
        cin >> choice; 
        if (choice == "1") { 
            cout << "\nYou secure the top floor. The intruder, 
however, has bypassed other security measures and is heading 
toward you.\n"; 
            cout << "Do you:\n"; 
            cout << "1. Engage the intruder in a fight?\n"; 
            cout << "2. Use a diversion to escape with the 
files?\n"; 
            cin >> choice; 
            if (choice == "1") { 
                cout << "\nYou engage the intruder in a fight and 
manage to subdue them after a tough battle.\n"; 
                cout << "You have saved the research files. Mission 
accomplished!\n"; 
 
            } else { 
                cout << "\nYou create a diversion, but the intruder 
sees through it and catches you.\n"; 
                cout << "Game Over.\n"; 
            } 
        } else { 
            cout << "\nYou wait near the elevator and ambush the 
intruder as they approach.\n"; 
            cout << "After a brief struggle, you neutralize the 
threat. Mission accomplished!\n"; 
        } 
    }  
    else if (choice == "3") { 
        cout << "\nYou enter the Storage Room to gather 
supplies: weapons, gadgets, and a first-aid kit.\n"; 
        cout << "You hear footsteps approaching! Do you:\n"; 
        cout << "1. Hide in the shadows?\n"; 
        cout << "2. Confront the intruder?\n"; 
        cin >> choice; 
        if (choice == "1") { 
 
            cout << "\nYou hide successfully and watch as the 
intruder passes by.\n"; 
            cout << "Do you:\n"; 
            cout << "1. Ambush the intruder now?\n"; 
            cout << "2. Follow them to learn their plan?\n"; 
            cin >> choice; 
            if (choice == "1") { 
                cout << "\nYou ambush the intruder and manage to 
neutralize them. You have saved the day!\n"; 
            } else { 
                cout << "\nYou follow the intruder to the elevator. 
They discover you and overpower you.\n"; 
                cout << "Game Over.\n"; 
            } 
        } else { 
            cout << "\nYou confront the intruder. A battle ensues, 
and you are injured but manage to stop them.\n"; 
            cout << "Mission accomplished, but you need medical 
attention.\n"; 
        } 
    }  
 
    else { 
        cout << "\nInvalid choice. Please restart the game and 
enter a valid option.\n"; 
    } 
} 
int main() { 
 string playAgain; 
 do{ 
    startAdventure(); // Start the adventure game 
    cout<<"\n would u like to play again?(y/n) "; 
    cin>> playAgain; 
    cout<<"\n ---------------------------------------------------------------------------------------------------"<<endl; 
  } 
    while(playAgain == "y"|| playAgain == "Y"); 
    cout<<"Thank you for playing!"<<endl; 
    cout<<"Good Bye!"<<endl; 
    return 0; 
}