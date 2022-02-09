#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int total(int votes[5]){
    int total_votes=0;

for(int i=0;i<5;i++)
{
total_votes+=votes[i];
}
return total_votes;
}

int maxCount(float percent[5]){
    int max=0;
    
for(int i=0;i<5;i++)
{
if(percent[i]>percent[max])
{
max=i;
}
}
return max;
}
int main()
{
string candidates[5];
int votes[5];
float percent[5];
int max,total_votes=0;
for(int i=0;i<5;i++)
{
    cout<<"Enter the last name of candidate "<<i+1<<" and number of votes: ";
cin>>candidates[i]>>votes[i];
cout<<endl;
}
total_votes=total(votes);
for(int i=0;i<5;i++)
{
percent[i]=(votes[i]/(float)total_votes)*100.0;
}
max=maxCount(percent);
cout <<"Candidate"<<"\t"<<"Votes Received"<<"\t"<<"% of Total Votes"<<endl;
cout<<"----------------------------------------"<<endl;
for(int i=0;i<5;i++)
{
cout<<candidates[i]<<"\t\t\t"<<votes[i]<<"\t\t\t"<<fixed<<setprecision(2)<<percent[i]<<endl;
}
cout<<"----------------------------------------"<<endl;
cout<<"Total"<<"\t\t\t\t"<<total_votes<<endl;

cout << "The Winner of the Election is " <<candidates[max]<<".\n";
return 0;
}