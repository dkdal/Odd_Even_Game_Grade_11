#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main()
{
    randomize();
    int ch1,ch2,score=0,score1=0,arr[9999],i;

	cout<<"\t\t\t****WELCOME TO PLAY CRICKET****";
	cout<<"\n\n\t\t\tYou can score as 0,1,2,3,4,5,6 only";
	cout<<"\n\n\tONLY UR CHOICES WILL CONSIDERED AS RUNS.....FOR BOTH THE TEAMS";
	cout<<"\n\n\t\tEnter 0 <or> 1 for the toss....if the no. matches....";
	cout<<"\n\n\t\t\tYou'll win otherwise you'll loose\n";
	cin>>ch1;

    if(ch1>=2)
	cout<<"Enter correct option";

    else if(ch1==random(2))
    {
        cout<<"\nYou won ..... what do u want??\n1)Batting \n<or> \n2)Bowling\n";
        cin>>ch2;
        if(ch2==1)
        {
            cout<<"\nIts ur batting now";
            for(i=0;i<9999;i++)
            {
                cout<<"\nEnter ur choice for\t"<<i+1<<" ball\n";
                cin>>arr[i];

                if(arr[i]==random(7))
                {
                    cout<<"\nYou are OUT";
                    cout<<"\nScore is "<<score;
                    break;
                }

                else if(arr[i]>6)
                {
                    cout<<"\nEnter the correct score ";
                    i=i-1;
                }

                else
                {
                    score=score+arr[i];
                    cout<<"\nScore is "<<score;
                }
            }

            cout<<"\nIts ur bowling";
            for(i=0;i<9999;i++)
            {
                cout<<"\nEnter choice in\t"<<i+1<<" ball\n";
                cin>>arr[i];

                if(arr[i]==random(7))
                {
                    cout<<"\nIm OUT";
                    cout<<"\nScore is "<<score1;
                    break;
                }

                else if(arr[i]>6)
                {
                    cout<<"\nEnter the correct score ";
                    i=i-1;
                }

                else
                {
                    score1=score1+arr[i];
                    cout<<"\nScore is "<<score1;

                    if(score1>score)
					break;
                }
            }
        }

	else if(ch2==2)
	{
	  cout<<"\nIts ur bowling";
	  for(i=0;i<9999;i++)
		{
		    cout<<"\nEnter choice in\t"<<i+1<<" ball\n";
            cin>>arr[i];
            if(arr[i]==random(7))
			{
			    cout<<"\nIm OUT";
                cout<<"\nScore is "<<score1;
                break;
			}

		else if(arr[i]>6)
			{
			    cout<<"\nEnter the correct score ";
                i=i-1;
			}
		else
			{
			  score1=score1+arr[i];
			  cout<<"\nScore is "<<score1;
			}
		}

		cout<<"\nIts ur batting now";
        for(i=0;i<9999;i++)
		{
		    cout<<"\nEnter ur run in\t"<<i+1<<" ball\n";
            cin>>arr[i];
            if(arr[i]==random(7))
			{
			    cout<<"\nYou are OUT";
                cout<<"\nScore is "<<score;
                break;
			}

		else if(arr[i]>6)
			{
			    cout<<"\nEnter the correct score ";
                i=i-1;
			}
		else
			{
			  score=score+arr[i];
			  cout<<"\nScore is "<<score;
			  if(score>score1)
                break;
			}
		}
	}
	else
		cout<<"Enter correct option";
}
    else
    {
        cout<<"\nYou lost";
        cout<<"\nI always love to bat first";
        cout<<"\nIts ur bowling now";
        for(i=0;i<9999;i++)
        {
            cout<<"\nEnter choice in\t"<<i+1<<" ball\n";
            cin>>arr[i];
            if(arr[i]==random(7))
            {
                cout<<"\nIm OUT";
                cout<<"\nScore is "<<score1;
                break;
            }

            else if(arr[i]>6)
            {
                cout<<"\nEnter the correct score ";
                i=i-1;
            }
            else
            {
                score1=score1+arr[i];
                cout<<"\nScore is "<<score1;
			}
		}

        cout<<"\nIts ur batting now";
        for(i=0;i<9999;i++)
        {
            cout<<"\nEnter ur run in\t"<<i+1<<" ball\n";
            cin>>arr[i];
            if(arr[i]==random(7))
            {
                cout<<"\nYou are OUT";
                cout<<"\nScore is "<<score;
                break;
            }

            else if(arr[i]>6)
            {
                cout<<"\nEnter the correct score ";
                i=i-1;
            }

            else
            {
                score=score+arr[i];
                cout<<"\nScore is "<<score;
                if(score>score1)
                break;
            }
        }
    }

    if(score1>score)
        cout<<"\nU LOST";

    else if(score1==score)
        cout<<"\nITS A DRAW";

    else
        cout<<"\nU WIN";

    return 0;

}


/* source code for the proper game of odd even:-

int pc;
for(i=0;i<9999;i++)
            {
                cout<<"\nEnter choice in\t"<<i+1<<" ball\n";
                cin>>arr[i];

                pc=random(7);

                if(arr[i]==pc)
                {
                    cout<<"\nIm OUT";
                    cout<<"\nScore is "<<score1;
                    break;
                }

                else if(arr[i]>6)
                {
                    cout<<"\nEnter the correct choice ";
                    i=i-1;
                }

                else
                {
                    score1=score1+pc;
                    cout<<"\nScore is "<<score1;

                    if(score1>score)
					break;
                }
            }

*/
