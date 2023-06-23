#include "..\..\common.h"

string travel(string direction, string position, int magnitude, vector<string>& collect){
    int currentX, currentY;
    stringstream ss(position);
    ss >> currentX >> currentY;

    bool safe = true;
    if (direction == "l"){
        for (int i = 0; i < magnitude; i++){
            currentX -= 1;
            if (find(collect.begin(), collect.end(), to_string(currentX) + " " + to_string(currentY)) != collect.end()){
                collect.push_back(to_string(currentX) + " " + to_string(currentY));
                safe = false;
            }
            else {
                collect.push_back(to_string(currentX) + " " + to_string(currentY));
            }
        }
    }
    else if (direction == "r"){
        for (int i = 0; i < magnitude; i++){
            currentX += 1;
            if (find(collect.begin(), collect.end(), to_string(currentX) + " " + to_string(currentY)) != collect.end()){
                collect.push_back(to_string(currentX) + " " + to_string(currentY));
                safe = false;
            }
            else {
                collect.push_back(to_string(currentX) + " " + to_string(currentY));
            }
        }
    }
    else if (direction == "d"){
        for (int i = 0; i < magnitude; i++){
            currentY -= 1;
            if (find(collect.begin(), collect.end(), to_string(currentX) + " " + to_string(currentY)) != collect.end()){
                collect.push_back(to_string(currentX) + " " + to_string(currentY));
                safe = false;
            }
            else {
                collect.push_back(to_string(currentX) + " " + to_string(currentY));
            }
        }
    }
    else if (direction == "u"){
        for (int i = 0; i < magnitude; i++){
            currentY += 1;
            if (find(collect.begin(), collect.end(), to_string(currentX) + " " + to_string(currentY)) != collect.end()){
                collect.push_back(to_string(currentX) + " " + to_string(currentY));
                safe = false;
            }
            else {
                collect.push_back(to_string(currentX) + " " + to_string(currentY));
            }
        }
    }

    return (safe) ? "safe" : "DANGER";
}

int main() {
    cout << "Enter directions and distances: ";

    vector<string> traversed;
    string start = "0 -1";
    traversed.push_back(start);
    travel("d", start, 2, traversed);
    travel("r", traversed[traversed.size() - 1], 3, traversed);
    travel("d", traversed[traversed.size() - 1], 2, traversed);
    travel("r", traversed[traversed.size() - 1], 2, traversed);
    travel("u", traversed[traversed.size() - 1], 2, traversed);
    travel("r", traversed[traversed.size() - 1], 2, traversed);
    travel("d", traversed[traversed.size() - 1], 4, traversed);
    travel("l", traversed[traversed.size() - 1], 8, traversed);
    travel("u", traversed[traversed.size() - 1], 2, traversed);

    string command;
    getline(cin, command);
    while (command.substr(0, 1) != "q"){
        stringstream ss(command);
        string direction;
        int magnitude;
        ss >> direction >> magnitude;

        string condition = travel(direction, traversed[traversed.size() - 1], magnitude, traversed);
        stringstream endSS(traversed[traversed.size() - 1]);
        int endX, endY;
        endSS >> endX >> endY;
        string print = to_string(endX) + " " + to_string(endY) + " " + condition;
        cout << print << endl;
        
        if (condition == "DANGER") {
            break;
        }

        getline(cin, command);
    }

    return 0;
}