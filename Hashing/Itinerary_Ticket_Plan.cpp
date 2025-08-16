#include<iostream>
#include<string>
#include<unordered_map>
#include<unordered_set>

using namespace std;

void printItinerary(unordered_map<string, string>tickets)
{
    unordered_set<string> to;

    for(pair<string ,string> ticket: tickets)
    {
          to.insert(ticket.second);
    }
    string start=" ";
    for(pair<string, string> ticket: tickets)
    {
        if(to.find(ticket.first)==to.end())
        {
            start=ticket.first;
        }
    }


    cout<<start<<"->";

    while(tickets.count(start))
    {
        cout<<tickets[start]<<" -> ";
        start=tickets[start];
    }
    cout<<"destinations";
}





int main()
{

    unordered_map<string, string> tickets;

    tickets["Chennai"]="Bengaluru";
    tickets["Mumbai"]="Delhi";
     tickets["Goa"]="Chennai";
      tickets["Delhi"]="Goa";

      printItinerary(tickets);

    return 0;
}


