#include<stdio.h>
struct team{
	char T_name[60];
	int Num_players;
	char player_names[11][60];
}T;
char d[50] ="No Data Found";
void add_team(){
//	struct team T;
	printf("Enter The team Name: ");
	scanf("%s",T.T_name);
	printf("\nEnter The Number of Players: ");
	scanf("%d",&T.Num_players);
	for(int i=0;i<T.Num_players;i++){
		printf("Player %d: ",i+1);
		scanf("%s",T.player_names[i]);
		}
	FILE*fp;
	fp =fopen("E:\\Mine Code\\C Files\\Addedteams.txt","w");
	fwrite(&T,sizeof(T),1,fp);
	fclose(fp);
}
void delete_team(){
	
	char team[50];
	printf("Enter the team You want To Delete: ");
	scanf("%s",team);
	
	FILE *f;
	f=fopen("E:\\Mine Code\\C Files\\Addedteams.txt","w");
	fputs(d,f);
	fclose(f);
	

}
void view_addedTeams(){
	FILE*fp;
	fp =fopen("E:\\Mine Code\\C Files\\Addedteams.txt","r");
	while(fread(&T,sizeof(T),1,fp)!=0){
		printf("Team Name:%s\nTotal Players:%d\n",T.T_name,T.Num_players);
		for(int i=0;i<T.Num_players;i++){
			printf("Player %d:%s\n",i+1,T.player_names[i]);
		}
	}
	FILE *f;
	f =fopen("E:\\Mine Code\\C Files\\Addedteams.txt","r");
	
	while(fgets(d,2,f)!=0){
		printf("%s",d);
	}
	fclose(fp);
	
}
void making_schedule()
{
	int d,m,y,N;
	printf("Enter the Start Date(dd mm yyyy): ");
	scanf("%d %d %d",&d,&m,&y);
//	FILE *fptr;
//	fptr=fopen("Date.txt","w");
//	N=n*(n-1)/2;
//	for(int i=0;i<N;i++)
//	{
//		printf("%d-%d-%d\n",d,m,y);
//		if(d==31)
//		{
//			d=0;
//			m=m+1;
//	    }
//		if(d==30)
//		{
//			if(m==4||m==6||m==9||m==11)
//			{
//				d=0;
//				m=m+1;
//			}
//		}
//		if(d==28 && m==2)
//		{
//			d=0;
//			m=m+1;
//		}
//		d=d+1;
//	}
    int n, n2 = 0;
    FILE *f;
    f=fopen("schedule.txt","w");
    printf("Enter The number of Teams: ");
    scanf("%d", &n);
    char Team_names[n][50];
//    for (int i = n - 1; i > 0; i--)
//    {
//        n2 += i;
//    }
//    printf("Number of Matches: %d\n", n2);
    char Schedule[n2];
    for (int i = 0; i < n; i++)
    {
        printf("Enter Team %d: ", i + 1);
        scanf("%s", &Team_names[i]);
    }
    for (int i = 0; i < n; i++)
    {
	for (int j = i + 1; j < n; j++)
        {
//        	printf("%d-%d-%d\n",d,m,y);
		if(d==31)
		{
			d=0;
			m=m+1;
	    }
		if(d==30)
		{
			if(m==4||m==6||m==9||m==11)
			{
				d=0;
				m=m+1;
			}
		}
		if(d==28 && m==2)
		{
			d=0;
			m=m+1;
		}
		d=d+1;
			printf("%d/%d/%d: %s vs %s\n",d,m,y,Team_names[i], Team_names[j]);
			fprintf(f,"%d/%d/%d: %s vs %s\n",d,m,y,Team_names[i], Team_names[j]);
			
        }
        
    }
    fclose(f);
//    f =fopen("E:\\Mine Code\\C Files\\schedule.txt","w");
//    fwrite(&)
	
   
} 
int display_team(){
	printf("Current Teams:\n");
	char ch[500];
	FILE *f;
	f= fopen("E:\\Mine Code\\C Files\\ipl.txt","r");
	printf("\n");
	while(fgets(ch,2,f)!=0){
	printf("%s",ch);
	}
	
}
int main(){
		int n;
	do{
		
	printf("1.Display Teams\n");
	printf("2.Add Team\n");
	printf("3.View The Added Teams\n");
	printf("4.Make a Schedule\n");
	printf("5.Delete Team\n");
	printf("6.Exit\n");
	printf("Enter Your Choice: ");
	scanf("%d",&n);
//	printf("1.Display Teams\n");
	switch(n) {
	case 1:
		display_team();
		break;
	case 2:
		add_team();
			break;
	case 3:
		view_addedTeams();
		break;
	case 4:
		making_schedule();
		break;
	case 5:
		delete_team();
		break;
	case 6:
		printf("Thank You For Using The Program");
		
	}
}
while(n!=6);
}
