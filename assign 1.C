#include <stdio.h>
struct Friends {
    char name[50];
    char pet_name[50];
    double phone_number;
    struct type{
        char type_of_friends[50];
        char name_of_friends[50];
        int place_visited;
    } t;
};
int main()
{
    int i,n;
    printf("ENTER THE NUMBER OF FRIENDS TO ADD:");
    scanf("%d",&n);
    struct Friends f[n];
    for(i=0;i<n;i++){
        printf("ENTER FRIEND NAME: ");
        scanf("%s",&f[i].name);
        printf("ENTER PET NAME: ");
        scanf("%s",&f[i].pet_name);
        printf("ENTER PHONE NUMBER: ");
        scanf("%lf", &f[i].phone_number);
        printf("ENTER TYPE OF FRIENDS: ");
        scanf("%s",&f[i].t.type_of_friends);
        printf("ENTER NAME OF COMMON FRIENDS: ");
        scanf("%s",&f[i].t.name_of_friends);
        printf("ENTER NUMBER OF PLACE VISITED TOGETHER: ");
        scanf("%d",&f[i].t.place_visited);
    }
    printf("S.NO.  \t");
    printf("FRIENDS LIST NAME \t");
    printf("PET NAME \t");
    printf("PHONE NUMBER  \t");
    printf("TYPE OF FRIENDS \t");
    printf("NAME OF COMMON FRIENDS \t");
    printf("NUMBER OF PLACES VISITED TOGETHER  \t\n");
    for(i=0;i<n;i++){
        printf("%d \t",i+1);
        printf("%S \t",f[i].name);
        printf("%s \t",f[i].pet_name);
        printf("%lf \t",f[i].phone_number);
        printf("%s \t",f[i].t.type_of_friends);
        printf("%s \t",f[i].t.name_of_friends);
        printf("%d \t\n",f[i].t.place_visited);
    }
}
