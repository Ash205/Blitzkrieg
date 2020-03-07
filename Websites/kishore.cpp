#include<iostream>
#include<climits>

using namespace std;

class Stack{
	private:
		int t;
		int S[10];
	public:
		Stack(){
			t=-1;
		}
		void push(int d){
			t++;
			S[t] = d;
		}	
		void pop(){
			t--;
		}
		int top(){
			return S[t];
		}
};

int main(){
	int N, i;
	cout<<"Enter the number of test cases: ";
	cin>>N;
	for(i=0; i<N; i++){
		int n, j, k, pos, min, newmin, element, no_of_stacks;
		int elements[10];
		cout<<"Enter the number of elements: ";
		cin>>n;
		cout<<"Enter the elements:\n";
		for(j=0; j<n; j++){
			cin>>elements[j];
		}
		
		Stack s[10];
		s[0].push(elements[0]);
		no_of_stacks = 1;
		for(j=1; j<n; j++){
			element = elements[j];
			min = INT_MAX;
			pos = -1;
			for(k=0; k<no_of_stacks; k++){
				if(s[k].top() > element){
					newmin = s[k].top();
					if(newmin < min){
						min = newmin;
						pos = k;
					}
				}
			}
			if(pos == -1){
				s[no_of_stacks++].push(element);
			}
			else{
				s[pos].push(element);
			}
		}
		cout<<no_of_stacks;
		for(j=0; j<no_of_stacks; j++){
			cout<<s[j].top()<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}