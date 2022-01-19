// // #include<bits/stdc++.h>
// // using namespace std;
// // int ispalindrome(string s, int left, int right)
// // {
// // 	int i, j;
// // 	for(i=left, j= right; i<=j; i++, j--)
// // 	{
// // 		if(s[i] != s[j])
// // 			return 0;
// // 	}
// // 	return 1;
// // }
// // int main()
// // {
// // 	string s;
// // 	cin>>s;
// // 	int t=s.size()-1;

// // 	for(int i=t; i>=0; i--){
// // 		if(i==0)
// // 			cout<<0<<"\n";
// // 		else if(!ispalindrome(s, 0 , i))
// // 		{
// // 			cout<<i+1<<"\n";
// // 			break;
// // 	}
// // }
// // 	return 0;
// // }

// // #include <bits/stdc++.h>
 
// // using namespace std;
 
// // int main() {
 
// //     double a, b, c, d;
// //     cin>>a>>b>>c>>d;
// //     double average = (a*2.0+b*3.0+c*4.0+d*1.0)/10;
// //     // cout<<"Media: "<<average<<"\n";
// //     printf("Media: %.1lf\n", average);
// //     if(average>=7.0)
// //         cout<<"Aluno aprovado."<<"\n";
// //     else if(average<5.0)
// //         cout<<"Aluno reprovado."<<"\n";
// //     else{
// //         cout<<"Aluno em exame."<<"\n";
// //         double newNum;
// //         cin>>newNum;
// //         // cout<<"Nota do exame: "<<newNum<<"\n";
// //         printf("Nota do exame: %.1lf\n", newNum);
// //         newNum = (average+newNum)/2;
// //         if(newNum>=5.0)
// //             cout<<"Aluno aprovado.\n";
// //         else if(newNum<=4.9)
// //             cout<<"Aluno reprovado.\n";
// //         // cout<<"Media final: "<<newNum<<"\n";
// //          printf("Media final: %.1lf\n", newNum);
// //     }
// //     return 0;
// // }


// #include <iostream>
 
// using namespace std;

// void ddo(){
//     double a, count=2, sum=0;
   
//     while(true){
//         cin>>a;
//         if(a<0 || a>10.0)
//         cout<<"nota invalida\n";
//         else{
//             count--;
//             sum+=a;
//             if(count==0){
//                 printf("media = %.2lf\n", sum/2);
//                 return;
//             }
//         }
        
//     }
// }
 
// int main() {
 
//     double a, count=2, sum=0;
//     while(true){
//         cin>>a;
//         if(a<0 || a>10.0)
//         cout<<"nota invalida\n";
//         else{
//             count--;
//             sum+=a;
//             if(count==0){
//                 printf("media = %.2lf\n", sum/2);
//                 break;
//             }
//         }
        
//     }
//     while(true)
//     {
        
//        cout<<"novo calculo (1-sim 2-nao)\n";
//        cin>>a;
       
//        if(a==1)
//        ddo();
//        else if(a==2)
//        break;
       
       
        
        
//     }
 
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
 int solvenumber(int n){
     return log2(n);
 }
int main() {
 
    int n;
    while(~scanf("%d", &n)){
        cout<<solvenumber(n)<<endl;
    }
 
    return 0;
}