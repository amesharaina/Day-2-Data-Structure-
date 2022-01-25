#include <iostream>
#include <stack>
using namespace std;

struct Stack {
	stack<int> s;
	int maxelement;

	void getMax()
	{
		if (s.empty())
		{
			cout << "Stack is empty\n";
		}

		else
		{
			cout <<maxelement << "\n";
		}
	}

	void pop()
	{
		if (s.empty()) {
			cout << "Stack is empty\n";
			return;
		}

		int t = s.top();
		s.pop();

		
		if (t > maxelement) {
			maxelement = 2 * maxelement - t;
		}
	}


	void push(int x)
	{
		if (s.empty()) {
			maxelement = x;
			s.push(x);
			return;
		}

		
		if (x > maxelement) {
			s.push(2 * x - maxelement);
			maxelement = x;
		}

		else{
			s.push(x);
		}
	}
};


int main()
{
	Stack s;

	int n,i,choice, inp;
    cin>>n;

    for(i=0; i<n; i++)
    { 

        cin>>choice;
        if(choice==1){
            cin>>inp;
            s.push(inp);
        }
        else if(choice==2){
            s.pop();
        }
        else if(choice==3){
            s.getMax();
        }
        else{
            cout<<"Invalid choice!!";
        }
    }
	return 0;
}
