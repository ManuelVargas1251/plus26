/*
I wanted to seperate my textbook into pdf chapters but 
chrome or some other incorrect numbering of the pages made it
so the pages didn't match up at all to the Table of Content.
So I wrote this very specific program to take in a txt file
that lists the pages numbers and adds 26 to all the numbers.
That's it. That's all it does. There were a lot of chapters
though which is why I didn't want to sit down with a calculator
and to it all manually.

ex. 
345-367
756-800

in .txt file = 
345
367
756
800

I could've wrote in to use the hyphen as a delimiter but I was
on a time limit so I didn't really care. The output file should
give the numbers back in the original format so you can easily 
copy and paste them into google pdf viewer for printing only
the pages you want.

*/

#include <fstream>   //ifstream
#include <sstream>   //istringstream

using namespace std;

int main (){
	//'pagenum' stores the int read from file
	//'i' keeps track of where to place hyphens and newlines
	int pagenum=0, i=0;
	
	//reads in my txt file with chapter numbers
	ifstream chapters("chp.txt");
	
	//creates output file
	ofstream out("output.txt");
	
	//happens so long as the file is open
	if(chapters.is_open()){
		//stores line from file to 'pagenum'
		while (chapters>>pagenum){
			
			//adds 26 to int then outputs to file
			out<<(pagenum+26);
			
			//prints to file a hyphen if first int
			//prints to file newline if second int to create, ex. 384-485
			if(i==0){
				out<<"-";
				i++;	//could also be a i=1;
			}
			else if(i==1){
				out<<endl;
				i=0;	//could also be a i--;
			}
			
			//from what I've read about assignment and incrementation, 
			//assignment is faster but incrementing has been worked on so
			//much that it is now just as fast if not faster.
			//so it doesn't really matter...
	
			//test - what 'i' is
			//out<<" \'"<<"i="<<i<<"\'";			
		}		
	}

	//close files
	chapters.close();
	out.close();

	return 0;
}