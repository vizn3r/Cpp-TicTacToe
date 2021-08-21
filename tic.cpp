#include <iostream>
using namespace std;


char game[9] = {
    '7', '8', '9',
    '4', '5', '6',
    '1', '2', '3'
}, p;


int play = 1, plr = 1, pos;

void display(char arr[]);
int win(char arr[]);

int main()
{
    cout << "\n\n    Welcomee to Tic Tac Toe!\n\n";

    do
    {
        display(game);

        plr = ((plr % 2) == 0) ? 2 : 1;

        p = ((plr % 2) == 0) ? 'O' : 'X';

        cout << "    Player's " << plr << " turn: ";

        cin >> pos;

        if (pos == 7 && game[0] == '7'){
            game[0] = p;
        } else if (pos == 8 && game[1] == '8'){
            game[1] = p;
        }else if (pos == 9 && game[2] == '9'){
            game[2] = p;
        }else if (pos == 4 && game[3] == '4'){
            game[3] = p;
        }else if (pos == 5 && game[4] == '5'){
            game[4] = p;
        }else if (pos == 6 && game[5] == '6'){
            game[5] = p;
        }else if (pos == 1 && game[6] == '1'){
            game[6] = p;
        }else if (pos == 2 && game[7] == '2'){
            game[7] = p;
        }else if (pos == 3 && game[8] == '3'){
            game[8] = p;
        } else {
            cout << "    Invalid move!";

            plr--;
            cin.ignore();
            cin.get();
        }
        
        play = win(game);

        plr++;

    } while (play == 1);

    display(game);
    

        if (play == 2) {
            cout << "    Mach draw\n";
        } else if (play == 0){
            cout << "    Player " << --plr << " has won!\n";
        }
        cin.ignore();
        cin.get();
    
}

void display(char arr[])
{
    system("clear");

    cout << 
    "\n    ╔═════════╦═════════╦═════════╗\n" <<
    "    ║         ║         ║         ║\n" <<
    "    ║    "<< arr[0] <<"    ║    "<< arr[1] <<"    ║    "<< arr[2] <<"    ║\n" <<
    "    ║         ║         ║         ║\n" <<
    "    ╠═════════╬═════════╬═════════╣\n" <<
    "    ║         ║         ║         ║\n" <<
    "    ║    "<< arr[3] <<"    ║    "<< arr[4] <<"    ║    "<< arr[5] <<"    ║\n" <<
    "    ║         ║         ║         ║\n" <<
    "    ╠═════════╬═════════╬═════════╣\n" <<
    "    ║         ║         ║         ║\n" <<
    "    ║    "<< arr[6] <<"    ║    "<< arr[7] <<"    ║    "<< arr[8] <<"    ║\n" <<
    "    ║         ║         ║         ║\n" <<
    "    ╚═════════╩═════════╩═════════╝\n" << endl;
}

int win(char arr[])
{
    if (arr[0] == arr[1] && arr[1] == arr[2]){
        return 0;
    } else if(arr[3] == arr[4] && arr[4] == arr[5]){
        return 0;
    } else if(arr[6] == arr[7] && arr[7] == arr[8]){
        return 0;
    } else if(arr[0] == arr[3] && arr[3] == arr[6]){
        return 0;
    } else if(arr[1] == arr[4] && arr[4] == arr[7]){
        return 0;
    } else if(arr[2] == arr[5] && arr[5] == arr[8]){
        return 0;
    } else if(arr[6] == arr[4] && arr[4] == arr[2]){
        return 0;
    } else if(arr[0] == arr[4] && arr[4] == arr[8]){
        return 0;
    } else if (arr[0] != '7' && arr[1] != '8' && arr[2] != '9' && arr[3] != '4' && arr[4] != '5' && arr[5] != '6' && arr[6] != '1' && arr[7] != '2' && arr[8] != '3'){
        return 2;
    } else {
        return 1;
    }
}