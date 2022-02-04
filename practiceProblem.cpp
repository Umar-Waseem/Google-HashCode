#include<iostream>
#include <map>
using namespace std;

typedef long long int llint;

int main() 
{ 
    llint t = 0;
    cin >> t;

    map<string, llint> itemsMap;

    while(t--){
        
        llint likedItems = 1;
        llint hatedItems = 0;
        string item1, item2;


        cin >> likedItems;

        int i = 0;
        for(auto it = itemsMap.begin(); i < likedItems; it++, i++){
            cin >> item1;
            itemsMap[item1]++;
        }

        cin >> hatedItems;


        int j = 0;
        for (auto it = itemsMap.begin(); j < hatedItems; it++, j++)
        {
            cin >> item2;
            if(itemsMap[item2]==0)
            itemsMap[item2]= 0;
            else
            itemsMap[item2]--;
        }



    }

    int count = 0;

    for (auto it = itemsMap.begin(); it!=itemsMap.end(); it++)
    {
        if(it->second!=0)
        count++;
    }

    cout << count << " " ;
    for (auto it = itemsMap.begin(); it != itemsMap.end(); it++)
    {
        if (it->second != 0)
        cout << it->first << " ";
    }

    return 0;
}