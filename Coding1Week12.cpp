// Coding1Week12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string> 
#include <vector>
using namespace std;

class human {
private:
    string name;
    int health = 10;
    int damage = 4;

public:
    human(string, int, int);
    void SayHello();

    void SetHealth(int givenHealth) {
        if (givenHealth < 0) {
            health = 0;
        }
        else if (givenHealth > 10) {
            health = 10;
        }
        else {
            health = givenHealth; 
        }
    }
    void ChangeHealth(int by = 1) {
        health += by;
        SetHealth(health);
    }
    int GetHealth() {
        return health;
    }

    void SetDamage(int givenDamage) {
        if (givenDamage < 0) {
            damage = 0;
        }
        else if (givenDamage > 4) {
            damage = 4;
        }
        else {
            damage = givenDamage;
        }
    }
    int GetDamage() {
        return damage; 
    }

    void SetName(string givenName) {
        if (givenName.size() < 2) {
            cout << "Name is too short.\n";
            return;
        }
        else if (givenName.size() > 20) {
            cout << "Name is too long.\n";
            return;
        }
        else {
            name = givenName;
        }
    }
    string GetName() {
        return name;
    }

};

human::human (string givenName = "Ken", int givenHealth = 10, int givenDamage = 4) {
    name = givenName;
    health = givenHealth;
    damage = givenDamage;
    cout << "A new human has spawned!\n";
}

void human::SayHello() {
    cout << "Hi! My name is " << name << " and my health is " << health << "!\n";
}



int main()
{
    human ken;

    ken.SetName("Ken");
    
    cout << "This human says their name is " << ken.GetName() << "!\n";
    cout << "Say hello " << ken.GetName() << ".\n";
    ken.SayHello();

}

/*
string Name
int Health = 10
int Damage = 4
a Constructor with parameters for name, health, baseDamage
void SayHello()
void SetHealth(int byAmount)
void SetDamage(int givenDamage)
int GetHealth()
int GetDamage()
*/
