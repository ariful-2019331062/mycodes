 #include<bits/stdc++.h>
 using namespace std;
 vector<int> vec;

 int my_position()
 {
 	int num = rand()%15 ;
 }

 void makecases(){
 	int limit = rand()%11+10;
 	for(int i =0; i<limit; i++){
 	int random = rand()%2;
 	vec.push_back(random);
 }
 }
 void generate_cases( )
 {
 	int sets = 15;
 	int your_position = my_position();
 	for(int i =0; i<15-your_position; i++)
 		makecases();
 	vec.push_back(2);
 	for(int i = 15-your_position; i<15; i++)
 		makecases();

 }
 int main()
 {
 	srand(time(NULL));
 	generate_cases();
 	cout<<vec.size() <<endl;
 	for(int val: vec){
 		cout<<val<<" ";
 	}
 	
 	return 0;
 }