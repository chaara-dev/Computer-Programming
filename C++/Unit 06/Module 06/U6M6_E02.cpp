#include "..\..\common.h"

int main() {
    int road_choice, van_choice_one, van_choice_two, taco_choice_one, taco_choice_two, taco_choice_three;

    cout << "You are driving down the road. Ahead of you, it splits. Do you want to take:" << endl;
    cout << "1. The left road.\n2. The right road.\n3. The 'right' road." << endl;
    cout << "You pick: "; cin >> road_choice;
    cout << endl;

    if (road_choice == 1) {
        cout << "After turning to the left, you see a van pulled over at the side of the road." << endl;
        cout << "What are you going to do next?" << endl;

        cout << "1. Ignore it and continue driving." << endl;
        cout << "2. Pull over behind it and see if I can help with something." << endl;
        cout << "You pick: "; cin >> van_choice_one;
        cout << endl;

        if (van_choice_one == 1) {
            cout << "You ignore the van, and keep driving. You arrive at your destination shortly after.";
        } else if (van_choice_one == 2) {
            cout << "You pull your car right behind the van. You notice that the driver's window is open.\n";
            cout << "What are you going to do next?" << endl;

            cout << "1. Go and talk to the driver.\n2. Call 911 about the van.\n";
            cout << "3. Ignore the van and drive away.";
            cout << "You pick: "; cin >> van_choice_two;
            cout << endl;

            if (van_choice_two == 1) {
                cout << "You get out of your car and walk to the driver's window of the van." << endl;
                cout << "A very well dressed dog greets you, and you decide it's time to stop drinking and driving.";
            } else if (van_choice_two == 2) {
                cout << "Without getting out of your car, you dial 911 on your phone." << endl;
                cout << "The operator is quick to pick up, and after explaining your situation, she advises you to leave immediately." << endl;
                cout << "Taking her advice, you make a U-turn, and look back through the mirror, only to see that the van is gone.";
            } else if (van_choice_two == 3) {
                cout << "You decide that the van isn't any of your business, and drive away.";
            } else {
                cout << "The input you gave is not valid.";
            }
        } else {
            cout << "The input you gave is not valid.";
        }
    } else if (road_choice == 2) {
        cout << "After turning to the right, you see a taco truck parked on the side of the road." << endl;
        cout << "What are you going to do about the taco truck?";

        cout << "1. Ignore it and continue driving.";
        cout << "2. Pull over behind it to buy a taco";
        cout << "You pick: "; cin >> taco_choice_one;
        cout << endl;

        if (taco_choice_one == 1) {
            cout << "You ignore the taco truck, and keep driving." << endl;
            cout << "The police find your corpse on the side of the road a week later.";
        } else if (taco_choice_one == 2) {
            cout << "You pull your car over behind the truck. You notice that the vendor is nowhere to be seen." << endl;
            cout << "What are you going to do next?" << endl;
            cout << "1. Call for the vendor.\n2. Wait for the vendor to come out." << endl;
            cout << "3. Get back in your car and drive away.";

            cout << "You pick: "; cin >> taco_choice_two;
            cout << endl;

            if (taco_choice_two == 1) {
                cout << "You yell \"Vendor!!\" But nobody answers. \nA gunshot is heard, and your vision fades to black.";
            } else if (taco_choice_two == 2) {
                cout << "You wait patiently for the vendor to come out, and soon enough, he whispers in your ear," << endl;
                cout << "\"I'm gay.\"";
            } else if (taco_choice_two == 3) {
                cout << "You decide that if the taco vendor isn't here, you're not going to wait for them." << endl;
                cout << "You get back in your car, and drive away, reaching your destination shortly after.";
            } else {
                cout << "You picked an invalid choice, revealing that this is, in fact, all a simulation.\nYou have been subjected to termination, effective immediately.";
            }
        } else {
            cout << "ThAT's nOt ALloWed!!!!";
        }
    } else if (road_choice == 3) {
        cout << "\"There's no such thing as the 'easy' way out.\"";
    } else {
        cout << "You took too long trying to decide, picked an invalid choice, and ended up driving straight into a brick wall." << endl;
        cout << "You spend the next 4 years in a coma, before dying an excrutiatingly painful death.";
    }
}