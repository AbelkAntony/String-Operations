#include <iostream>
using namespace std;

//function to Concatenate two strings
void Concatenate(string word1, string word2)
{
	string concatenateWord = word1+word2;
	cout<<"\nConcatenate word : "<<concatenateWord;
}


//function to display common letters in both string
void CommonWord(string word1,string word2)
{
	bool found = false;
	int length = sizeof(word1);
	string commonElement=word2;
	int position=0;
	for(int i =0;i<length;i++)
	{
		for(int j=0;j<length;j++)
		{
			if(word1[i]==word2[j])
			{
				for(int k=0;k<position;k++)
				{
					if(commonElement[k]==word1[i])
					{
						found = true;
						break;
					}	
				}
				if(found == false)
				{
					commonElement[position]= word1[i];
					position++;
				}
				break;
			}
		}
	}
	cout<<"\nCOMMON LETTERS : ";
	for(int i =0;i<position;i++)
		cout<<commonElement[i];
}

//function to sort
void StringSort(string word1, string word2)
{
	string word = word1+word2;
	char temp;
	int length= word.length();
	cout<<endl<<length;
	for(int i=0;i<length; i++)
	{
		for(int j=i+1;j<length;j++)
		{
			if(word[i]>word[j])
			{
				temp = word[i];
				word[i] = word[j];
				word[j] = temp;
			}
		}
	}
	cout<<"\nSTRING AFTER SORTED = "<<word;
}

int main() 
{
	//variables
	string word1;
	string word2;
	//user input
	cout<<"\nENTER FIRST WORD : ";
	cin>>word1;
	cout<<"\nENTER SECOND WORD : ";
	cin>>word2;
	//function call to concatenate two strings
	Concatenate(word1, word2);
	//function call to display common letters in string
	CommonWord(word1,word2);
	//function to combine both string and display in apphabetinc order
	StringSort(word1,word2);
}