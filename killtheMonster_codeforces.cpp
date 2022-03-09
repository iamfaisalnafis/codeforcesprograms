#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll characterHealth, characterAttack, monsterHealth, monsterAttack;
        cin >> characterHealth >> characterAttack;
        cin >> monsterHealth >> monsterAttack;
        ll coins, attack, health;
        cin >> coins >> attack >> health;
        bool flag = false;
        for (ll i = 0; i <= coins; i++)
        {
            ll newhealth = characterHealth + (i * health);
            ll newdamage = characterAttack + ((coins - i) * attack);
            ll time_to_kill_monster = (monsterHealth) / newdamage;
            if (monsterHealth % newdamage) time_to_kill_monster++;
            ll time_to_get_killed = newhealth / monsterAttack;
            if (newhealth % monsterAttack) time_to_get_killed++;
            if (time_to_kill_monster <= time_to_get_killed)
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
