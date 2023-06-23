#include "..\..\common.h"

int counts = 0;

bool check(vector<int>& teams, int T) {
    int score = teams[T];
    for (int i = 0; i < 4; i++) {
        if (teams[i] >= score && i != T) {
            return false;
        }
    }

    return true;
}

void calculatePossibleScore(vector<string>& gamesToPlay, vector<int>& teams, int T) {
    if (gamesToPlay.empty()) {
        if (check(teams, T)) {
            counts++;
        }
        
        return;
    }
    string game = gamesToPlay[0];
    gamesToPlay.erase(gamesToPlay.begin());
    int team1 = game[0] - '0';
    int team2 = game[2] - '0';
    int addTo[3][2] = { {0, 3}, {3, 0}, {1, 1} };
    vector<int> clone = teams;
    vector<string> hold = gamesToPlay;

    for (int i = 0; i < 3; i++) {
        gamesToPlay = hold;
        teams = clone;
        int add[2] = { addTo[i][0], addTo[i][1] };
        teams[team1] += add[0];
        teams[team2] += add[1];
        calculatePossibleScore(gamesToPlay, teams, T);
    }
}

int main() {
    int T;
    cout << "Enter team: ";
    cin >> T;
    T--;

    int G;
    cout << "Enter num of games played: ";
    cin >> G;

    vector<int> team(4);
    vector<string> games = { "0 1", "0 2", "0 3", "1 2", "1 3", "2 3" };

    for (int i = 0; i < G; i++) {
        int team1, team2, score1, score2;
        cout << "Enter team scores: ";
        cin >> team1 >> team2 >> score1 >> score2;

        if (team1 < team2) {
            games.erase(remove(games.begin(), games.end(), to_string(team1) + " " + to_string(team2)), games.end());
        } else {
            games.erase(remove(games.begin(), games.end(), to_string(team2) + " " + to_string(team1)), games.end());
        }

        if (score1 == score2) {
            team[team1 - 1] += 1;
            team[team2 - 1] += 1;
        } else {
            team[team1 - 1] += (score1 > score2) ? 3 : 0;
            team[team2 - 1] += (score2 > score1) ? 3 : 0;
        }
    }

    calculatePossibleScore(games, team, T);

    cout << counts << endl;

    return 0;
}