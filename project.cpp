//this is my project to HnCC

#include<bits/stdc++.h>
 

using namespace std;

void elist(int l)
{
       int i=0;
     fstream fp;
     fp.open("2k20.txt",ios::in | ios::binary);
     if(!fp){cout<<"File does not found.";}
     else
     {
         char s[162];
         while(!fp.eof())
         {
            //  char s[1000][162];
             fp.getline(s,161);
            int j=l;
             while(s[j]!=' ')
             {
                 cout<<s[j];j++;
             }
             
            //  cout<<"  "<<ss[85];
             cout<<";\n";
             }
         }
         fp.close();
     }


char alphabet(char x)//this fun will take a capital latter alphabets and return the same small letter alphabet and vice varsa.
{
    if(islower(x)){return toupper(x);}
    else{return tolower(x);}
}


int cammands(string s)//this fun will take a cammand and return a no.
{
    string s1[500];
    int i=0;int ans;
    s1[1]="add -m";i++;//this cammand will use to add the member in the file
    s1[2]="ls -y -1st";i++;//this will give list of students of 1st year
    s1[3]="help";i++;//thes will show u all cammand and there function
    s1[4]="exit";i++;//this cammand is use to come back 
    s1[5]="ls -y -2nd";i++;
    s1[6]="ls -y -3rd";i++;
    s1[7]="ls -y -4th";i++;
    s1[8]="ls -b -ch.e.";i++;//these will give u a list of all chemical engg.
    s1[9]="ls -b -ci.e.";i++;
    s1[10]="ls -b -cu.s.e.";i++;
    s1[11]="ls -b -el.e.";i++;
    s1[12]="ls -b -el.c.e.";i++;
    s1[13]="ls -b -in.t.";i++;
    s1[14]="ls -b -me.e.";i++;
    s1[15]="ls -b -mi.e.";i++;
    s1[16]="ls -b -pr.e.";i++;
    s1[17]="ls -n";i++;
    s1[18]="ls --email";i++;
    s1[19]="ls --mobile";i++;

    
    
    for(int j=0;j<=i;j++){
        if(s==s1[j]){ans=j;break;}
    }
     return ans;
}

void nam1(char a, int b, char x, int p, char y, int q, char z, int r)
{
    // cout<<underline<<"give the year:-";
    // char x;
    // cin>>x;
     int i=0;
     fstream fp;
     fp.open("2k20.txt",ios::in | ios::binary);
     if(!fp){cout<<"File does not found.";}
     else
     {
         cout<<"              ";cout<<"NAME OF STUDENTS            BRANCH        ROLL NO.       MOBILE NO.     WHATSAPP N0.   EMAIL ID.                       INTREST                     YEAR \n";
         cout<<"              ";cout<<"----------------            ------        --------       ----------     ------------   ---------                       -------                     ---- \n";
         char s[162];
         while(!fp.eof())
         {
            //  char s[1000][162];
             fp.getline(s,161);
             if((s[p]==x ||s[p]==alphabet(x)) && (s[q]==y || s[q]==alphabet(y)) && (s[r]==z || s[r]==alphabet(z)))
             {cout<<"              ";
             for(int j=0 ; j<161;j++)
             {
                 cout<<s[j];
             }
             
            //  cout<<"  "<<ss[85];
             cout<<"\n";
             }
         }
     }
} 

void nam(char x, int p, char y, int q, char z, int r)
{
    // cout<<underline<<"give the year:-";
    // char x;
    // cin>>x;
     int i=0;
     fstream fp;
     fp.open("2k20.txt",ios::in | ios::binary);
     if(!fp){cout<<"File does not found.";}
     else
     {
          cout<<"NAME OF STUDENTS            BRANCH        ROLL NO.       MOBILE NO.     WHATSAPP N0.   EMAIL ID.                       INTREST                     YEAR \n";
          cout<<"----------------            ------        --------       ----------     ------------   ---------                       -------                     ---- \n";
         char s[162];
         while(!fp.eof())
         {
            //  char s[1000][162];
             fp.getline(s,161);
             if((s[p]==x ||s[p]==alphabet(x)) && (s[q]==y || s[q]==alphabet(y)) && (s[r]==z || s[r]==alphabet(z)))
             {
             for(int j=0 ; j<161;j++)
             {
                 cout<<s[j];
             }
             
            //  cout<<"  "<<ss[85];
             cout<<"\n";
             }
         }
     }

     
} 

void ls_year1(char x, int p, char y, int q)
{
    // cout<<underline<<"give the year:-";
    // char x;
    // cin>>x;
     int i=0;
     char ss[1000][162];
     fstream fp;
     fp.open("2k20.txt",ios::in | ios::binary);
     if(!fp){cout<<"File does not found.";}
     else
     {
         cout<<"              ";cout<<"NAME OF STUDENTS            BRANCH        ROLL NO.       MOBILE NO.     WHATSAPP N0.   EMAIL ID.                       INTREST                     YEAR \n";
         cout<<"              ";cout<<"----------------            ------        --------       ----------     ------------   ---------                       -------                     ---- \n";
        //  char s[162];
         while(!fp.eof())
         {
            //  char s[1000][162];
             fp.getline(ss[i],161);
             if(ss[i][p]==x && ss[i][q]==y)
             {cout<<"              ";
             for(int j=0 ; j<161;j++)
             {
                 cout<<ss[i][j];
             }
             
            //  cout<<"  "<<ss[85];
             cout<<"\n";
             }
             i++;
         }
     }
     cout<<"\n              ";cout<<"Do u wants to list of 'email/mobile no.'  [y/n] :-";
     char a;
     a=getchar();
     if(a=='y')
     {
         cout<<"              ";cout<<"Select option :-    OPTION\n";
         cout<<"              ";cout<<"---------------     ------\n";
         cout<<"              ";cout<<"email   ---------->    1\n";
         cout<<"              ";cout<<"mobile no, -------->   2\n";
         cout<<"              ";cout<<"select:-";
         int b;
         cin>>b;
         while(b!=1 && b!=2){cin>>b;}
         if(b==1)
         {
             for(int t=0;t<i;t++)
            {
            int j=87;
             while(ss[t][j]!=' ')
             {
                 cout<<ss[t][j];j++;
             }
             
            //  cout<<"  "<<ss[85];
             cout<<";\n";
     }   
    //  cout<<"\n              ";cout<<"$Type cammand:-";
         }else
         {
      for(int t=0;t<i;t++)
     {
            int j=57;
             while(ss[t][j]!=' ')
             {
                 cout<<ss[t][j];j++;
             }
             
            //  cout<<"  "<<ss[85];
             cout<<";\n";
     }   
    //  cout<<"\n              ";cout<<"$Type cammand:-";            

         }
     }
     cout<<"              ";
}     

void ls_year(char x, int p)
{
     char s[1000][162];
    
    // cout<<underline<<"give the year:-";
    // char x;
    // cin>>x;
     int i=0;
     fstream fp;
     fp.open("2k20.txt",ios::in | ios::binary);
     if(!fp){cout<<"File does not found.";}
     else
     {
         cout<<"              ";cout<<"NAME OF STUDENTS            BRANCH        ROLL NO.       MOBILE NO.     WHATSAPP N0.   EMAIL ID.                       INTREST                     YEAR \n";
         cout<<"              ";cout<<"----------------            ------        --------       ----------     ------------   ---------                       -------                     ---- \n";
        //  char s[1000][162];
         while(!fp.eof())
         {
            
             fp.getline(s[i],161);
             if(s[i][p]==x)
             {
                 cout<<"              ";
             for(int j=0 ; j<161;j++)
             {
                 cout<<s[i][j];
             }
             i++;
            //  cout<<"  "<<ss[85];
             cout<<"\n";
             }
         }
     }




         cout<<"              ";cout<<"******   to know about all cammands type 'help'  *******\n"<<endl;
    int c;
    c=12332;
    cout<<"              ";cout<<"$ type cammand:-";
    while(c!=4){
        string sss;
        getline(cin,sss);
        c=cammands(sss);
    switch (c)
    {
 
    case 2:
    cout<<"              ";cout<<"list of 1st year :-\n";
    ls_year1(x,p,'1',147);
    cout<<"\n              ";cout<<"$ Type cammand:-";
         break;
     case 4:
     cout<<"              ";cout<< "*********BACK***********";
    //  return 0;
     break;
     case 5:
     cout<<"              ";cout<<"list of 2nd year :-\n";
     ls_year1(x,p,'2',147);
     cout<<"\n              ";cout<<"$ Type cammand:-";
     break;
     case 6:
     cout<<"              ";cout<<"list of 3rd year :-\n";
     ls_year1(x,p,'3',147);
     cout<<"\n              ";cout<<"$ Type cammand:-";
     break;
     case 7:
     cout<<"              ";cout<<"list of 4th year :-\n";
     ls_year1(x,p,'4',147);
     cout<<"\n              ";cout<<"$ Type cammand:-";
     break;   
     case 8:
     cout<<"              ";cout<<"list of Chemical engg. students :-\n";
     ls_year1(x,p,'e',30);
     cout<<"\n              ";cout<<"$ Type cammand:-";
     break;   
      case 9:
     cout<<"              ";cout<<"list of Civil engg. students :-\n";
     ls_year1(x,p,'v',30);
     cout<<"\n              ";cout<<"$ Type cammand:-";
     break; 
          case 10:
     cout<<"              ";cout<<"list of C.S.E. students :-\n";
     ls_year1(x,p,'S',30);
     cout<<"\n              ";cout<<"$ Type cammand:-";
     break;     
          case 11:
     cout<<"              ";cout<<"list of Electrical engg. students :-\n";
     ls_year1(x,p,'E',30);
     cout<<"\n              ";cout<<"$ Type cammand:-";
     break; 
          case 12:
     cout<<"              ";cout<<"list of E.C.E. students :-\n";
     ls_year1(x,p,'C',30);
     cout<<"\n              ";cout<<"$ Type cammand:-";
     break; 
          case 13:
     cout<<"              ";cout<<"list of I.T. students :-\n";
     ls_year1(x,p,'f',30);
     cout<<"\n              ";cout<<"$ Type cammand:-";
     break; 
          case 14:
     cout<<"              ";cout<<"list of Mechanical Engg. students :-\n";
     ls_year1(x,p,'c',30);
     cout<<"\n              ";cout<<"$ Type cammand:-";
     break; 
          case 15:
     cout<<"              ";cout<<"list of Minning engg. students :-\n";
     ls_year1(x,p,'n',30);
     cout<<"\n              ";cout<<"$ Type cammand:-";
     break; 
          case 16:
     cout<<"              ";cout<<"list of Production engg. students :-\n";
     ls_year1(x,p,'o',30);
     cout<<"\n              ";cout<<"$ Type cammand:-";
     break; 
     case 17:
     char w,y,z;
     cout<<"              ";cout<<"Type first three latter of the name :-";
     w=getchar();y=getchar();z=getchar();
     cout<<"              ";cout<<"List of student whose name statring from "<<"'"<<x<<"' :-\n";
     nam1(x,p,w,0,y,1,z,2);
     cout<<"\n              ";cout<<"$ Type cammand:-";
     break; 

     case 18:
     for(int t=0;t<i;t++)
     {
            int j=87;
             while(s[t][j]!=' ')
             {
                 cout<<s[t][j];j++;
             }
             
            //  cout<<"  "<<ss[85];
             cout<<";\n";
     }   
     cout<<"\n              ";cout<<"$Type cammand:-";
     break;

          case 19:
     for(int t=0;t<i;t++)
     {
            int j=57;
             while(s[t][j]!=' ')
             {
                 cout<<s[t][j];j++;
             }
             
            //  cout<<"  "<<ss[85];
             cout<<";\n";
     }   
     cout<<"\n              ";cout<<"$Type cammand:-";
     break;



         case 3:
         cout<<"              ";cout<<"The all cammands are here :--\n\n";
         cout<<"              ";cout<<"exit           ----->TO exit(back) form these directories\n";
         cout<<"              ";cout<<"ls -y -1st     ----->To find list of 1st year students.  \n                     (TRICK ----->'-y' means year wise selection '1st' means ist year student)\n";
         cout<<"              ";cout<<"ls -y -2nd     ----->to find 2nd year student list.\n";
         cout<<"              ";cout<<"ls -y -3nd     ----->to find 3nd year student list.\n";
         cout<<"              ";cout<<"ls -y -4nd     ----->to find 4nd year student list.\n";
         cout<<"              ";cout<<"ls -b -ch.e.   ----->TO find list of all student of chemical engenearing branch.\n                     (TRICK ----> '-b' means branch wise '-ch.e.' it indicates branch name.\n";
         cout<<"              ";cout<<"ls -b -ci.e.   ----->To find list of civil engg. student \n";
         cout<<"              ";cout<<"ls -b -cu.s.e. ----->To find list of C.S.E. student \n";
         cout<<"              ";cout<<"ls -b -el.e.   ----->To find list of electrical engg. student \n";
         cout<<"              ";cout<<"ls -b -el.c.e. ----->To find list of E.C.E. student \n";
         cout<<"              ";cout<<"ls -b -in.t.   ----->To find list of I.T. student \n";
         cout<<"              ";cout<<"ls -b -me.e.   ----->To find list of mechanical engg. student \n";
         cout<<"              ";cout<<"ls -b -mi.e.   ----->To find list of mining engg. student \n";
         cout<<"              ";cout<<"ls -b -pr.e.   ----->To find list of production engg. student \n";

         cout<<"              ";cout<<"\n$ Type cammand:-";
         break;
        //  default:
        //  cout<<"              ";cout<<"No such cammands exit.\nPlease type 'help'  to know about all the cammands.\n\n$ Type cammands:-";
    }
    }
}

class student
{
    private:
    
    char name[28];
    int branch;
    string roll;
    string mobile_no;
    string what_app;
    char email[32];
    char intrest[28];
    int year;
    // char hobi[40];
    public:
    void write()
    {
       
        fstream fp1;
        fp1.open("2k20.txt", ios_base::app | ios_base::binary);
        // cout<<"############---REMEMBER THAT ALWAYS USE '_' AND ',' IN THE PLACE OF SPACE (' ')---############# \n ";
        cout<<"*Name of student:-\n";
        // getline(cin,name);
        cin.getline(name,27);
        // cout<<sizeof(name)<<endl;
        // cout<<"name"<<name<<endl;
        do{cout<<"*Select your branch:-   OPTIONS \n Chem._Engg.------------>1 \n Civil_Engg.------------>2 \n C.S.E.     ------------>3 \n Elect._Engg------------>4 \n E.C.E.     ------------>5 \n Info._Tech.------------>6 \n Mech._Engg.------------>7 \n Mining_Eng.------------>8 \n Prod._Engg.------------>9 \n Select Options:-";
        cin>>branch;}
        while(branch!=1 && branch!=2 && branch!=3 && branch!=4 && branch!=5 && branch!=6 && branch!=7 && branch!=8 && branch!=9);
        // cout<<"branch"<<branch<<endl;
        cout<<"*Roll number:-\n";
        cin.ignore();
        getline(cin,roll);
        // cout<<"roll"<<roll<<endl;
        // cin.ignore();

        do{
        cout<<"*Mobile No.:-\n+91";
        getline(cin,mobile_no);
        if(mobile_no.length()!=10){cout<<"*WRONG MOBILE NO.\n";}
        }while(mobile_no.length()!=10);
        // cout<<mobile_no<<endl;
        do{
        cout<<"*What's app No.:-\n+91";
        getline(cin,what_app);
        if(what_app.length()!=10){cout<<"*WRONG WHAT'S APP NO.\n";}
        }while(what_app.length()!=10);
        // cout<<mobile_no<<endl; 
        cout<<"Email Id;-\n";
        cin.getline(email,31);
        // cout<<email[0]<<endl;       


        cout<<"*In witch field you have intrest:-\n";
        cin.getline(intrest,27);
        do{cout<<"select the year:-   OPTION \n 1st year             1 \n 2nd year             2 \n 3rd year             3 \n 4th year             4 \n";
        cout<<"choose the option:-";
        cin>>year;}
        while(year!=1 && year!=2 && year!=3 &&  year!=4);
        // cout<<"intrest"<<intrest<<endl;

    //    cout<<"*What's your hobie:-\n";
    //     cin.getline(hobi,39);
        // cout<<"hobi"<<hobi<<endl;

       

        // fp1<<name<<" ";
        fp1<<"\n";
           int name_pos=0;
    while(name[name_pos]!='\0'){
        fp1<<name[name_pos];
        name_pos++;
    }
    for(int j=name_pos;j<28;j++){fp1<<" ";}

        switch (branch)
        {
            case 1: fp1<<"Chem._Engg.   ";break;
            case 2: fp1<<"Civil_Engg.   ";break;
            case 3: fp1<<"C.S.E.        ";break;
            case 4: fp1<<"ElEct._Engg.  ";break;
            case 5: fp1<<"E.C.E.        ";break;
            case 6: fp1<<"Info._Tech.   ";break;
            case 7: fp1<<"Mech._Engg.   ";break;
            case 8: fp1<<"Mining._Engg. ";break;
            case 9: fp1<<"Prod._Engg.   ";break;
            default:
                    fp1<<"not mention   ";break;
        }

        // fp1<<roll<<" ";
        for(int i=0;i<(10-roll.length());i++){fp1<<"0";}
        fp1<<roll<<"     ";


 
                fp1<<mobile_no<<"     ";
  
                fp1<<what_app<<"     ";
 

          int email_pos=0;
    while(email[email_pos]!='\0'){
        fp1<<email[email_pos];
        email_pos++;
    }
    for(int j=email_pos;j<32;j++){fp1<<" ";}



                   int intrest_pos=0;
    while(intrest[intrest_pos]!='\0'){
        fp1<<intrest[intrest_pos];
        intrest_pos++;
    }
    for(int j=intrest_pos;j<28;j++){fp1<<" ";}

        // fp1<<intrest<<" ";
        switch(year)
        {
            case 1: fp1<<"1st_year";break;
            case 2: fp1<<"2nd_year";break;
            case 3: fp1<<"3rd_year";break;
            case 4: fp1<<"4th_year";break;
        }
        // fp1<<hobi<<"\n";
        cout<<"----------------DATA SAVED ----------------- \n ";
        fp1.close();
    }
};
     void case1()
     {
    cout<<"-----------------GIVE STUDENT DATA------------------\n";
    student BIT;
    BIT.write();
     
     }
//this fun  will help us to operate this programme by using cammands
int cammand(string s){
    string s1[500];
    int i=0;int ans;
    s1[1]="add -m";i++;
    s1[2]="ls -y -1st";i++;
    s1[3]="help";i++;
    s1[4]="exit";i++;
    s1[5]="ls -y -2nd";i++;
    s1[6]="ls -y -3rd";i++;
    s1[7]="ls -y -4th";i++;
    s1[8]="ls -b -ch.e.";i++;
    s1[9]="ls -b -ci.e.";i++;
    s1[10]="ls -b -cu.s.e.";i++;
    s1[11]="ls -b -el.e.";i++;
    s1[12]="ls -b -el.c.e.";i++;
    s1[13]="ls -b -in.t.";i++;
    s1[14]="ls -b -me.e.";i++;
    s1[15]="ls -b -mi.e.";i++;
    s1[16]="ls -b -pr.e.";i++;
    s1[17]="ls -n";i++;
    s1[18]="ls --email";i++;
    s1[19]="ls --mobile";i++;

    
    
    for(int j=0;j<=i;j++){
        if(s==s1[j]){ans=j;break;}
    }
     return ans;
}
int main(){
    cout<<"FIRST OF ALL MACK YOUR TERMINAL FULL SCREEN \n";
    cout<<"******   to know about all cammands type 'help'  *******"<<endl;
    int c;
    c=12332;
    cout<<"$ type cammand:-";
    while(c!=4){
        string ss;
        getline(cin,ss);
        c=cammand(ss);
    switch (c)
    {
    case 1:
    case1();
    cout<<"\n$ type cammand:-";
        break;
    case 2:
    cout<<"list of 1st year :-\n";
    ls_year('1',147);
    cout<<"\n$ Type cammand:-";
         break;
     case 4:
     cout<< "***********************PROGRAMME FINISHED*****************************";
    //  return 0;
     break;
     case 5:
     cout<<"list of 2nd year :-\n";
     ls_year('2',147);
     cout<<"\n$ Type cammand:-";
     break;
     case 6:
     cout<<"list of 3rd year :-\n";
     ls_year('3',147);
     cout<<"\n$ Type cammand:-";
     break;
     case 7:
     cout<<"list of 4th year :-\n";
     ls_year('4',147);
     cout<<"\n$ Type cammand:-";
     break;   
     case 8:
     cout<<"list of Chemical engg. students :-\n";
     ls_year('e',30);
     cout<<"\n$ Type cammand:-";
     break;   
      case 9:
     cout<<"list of Civil engg. students :-\n";
     ls_year('v',30);
     cout<<"\n$ Type cammand:-";
     break; 
          case 10:
     cout<<"list of C.S.E. students :-\n";
     ls_year('S',30);
     cout<<"\n$ Type cammand:-";
     break;     
          case 11:
     cout<<"list of Electrical engg. students :-\n";
     ls_year('E',30);
     cout<<"\n$ Type cammand:-";
     break; 
          case 12:
     cout<<"list of E.C.E. students :-\n";
     ls_year('C',30);
     cout<<"\n$ Type cammand:-";
     break; 
          case 13:
     cout<<"list of I.T. students :-\n";
     ls_year('f',30);
     cout<<"\n$ Type cammand:-";
     break; 
          case 14:
     cout<<"list of Mechanical Engg. students :-\n";
     ls_year('c',30);
     cout<<"\n$ Type cammand:-";
     break; 
          case 15:
     cout<<"list of Minning engg. students :-\n";
     ls_year('n',30);
     cout<<"\n$ Type cammand:-";
     break; 
          case 16:
     cout<<"list of Production engg. students :-\n";
     ls_year('o',30);
     cout<<"\n$ Type cammand:-";
     break; 
     case 17:
     char x,y,z;
     cout<<"Type first three latter of the name :-";
     x=getchar();y=getchar();z=getchar();
     cout<<"List of student whose name statring from "<<"'"<<x<<"' :-\n";
     nam(x,0,y,1,z,2);
     cout<<"\n$ Type cammand:-";
     break;
     case 18:
     elist(87);
     cout<<"\n$ Type cammand:-";
     break;
     case 19:
     elist(57);
     cout<<"\n$ Type cammand:-";
     break;     





         case 3:
         cout<<"The all cammands are here :--\n\n";
         cout<<"add -m         ----->To add member's information in the file. (TRICK---> '-m' means member) \n ";
         cout<<"ls -y -1st     ----->To find list of 1st year students.  \n                     (TRICK ----->'-y' means year wise selection '1st' means ist year student)\n";
         cout<<"ls -y -2nd     ----->to find 2nd year student list.\n";
         cout<<"ls -y -3nd     ----->to find 3nd year student list.\n";
         cout<<"ls -y -4nd     ----->to find 4nd year student list.\n";
         cout<<"ls -b -ch.e.   ----->TO find list of all student of chemical engenearing branch.\n                     (TRICK ----> '-b' means branch wise '-ch.e.' it indicates branch name.\n";
         cout<<"ls -b -ci.e.   ----->To find list of civil engg. student \n";
         cout<<"ls -b -cu.s.e. ----->To find list of C.S.E. student \n";
         cout<<"ls -b -el.e.   ----->To find list of electrical engg. student \n";
         cout<<"ls -b -el.c.e. ----->To find list of E.C.E. student \n";
         cout<<"ls -b -in.t.   ----->To find list of I.T. student \n";
         cout<<"ls -b -me.e.   ----->To find list of mechanical engg. student \n";
         cout<<"ls -b -mi.e.   ----->To find list of mining engg. student \n";
         cout<<"ls -b -pr.e.   ----->To find list of production engg. student \n";
         cout<<"ls -n          ----->To find the list of student by there first latter of his name.\n";

         cout<<"\n$ Type cammand:-";
         break;
                  default:
         cout<<"No such cammands exit.\nPlease type 'help'  to know about all the cammands.\n\n$ Type cammands:-";
         break;
    }
    }
    return 0;
}
