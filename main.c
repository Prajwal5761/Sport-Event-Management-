#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "logic.c"

int main()
{
	p_t pt=create_list_tennis();
	p_s ps=create_list_swim();
	p_a pa=create_list_ath();
	create_list_ticket_tennis();
	create_list_ticket_swim();
	// create_list_ticket_ath();

    int r,p,l,m,q;
	int a,b,c,n,idn;

	char password_correct[26]="admin_sports",password[26];
	char vis_name;

	printf("------------------------------------------\n WELCOME TO THE SPORTS COMPETITION 2020!! \n------------------------------------------\n");
    l:


	printf("==================\n");
	printf("ENTER YOUR ROLE : \n");
	printf("==================\n");
	printf("\n1.  ADMIN \n2.  PLAYER \n3.  VISITOR \n4.  EXIT\nENTER YOUR CHOICE : ");
	scanf("%d",&c);
	while(1)
	{
		switch(c)
		{
       	case 1: //ROLE : ADMIN
		while(1)
		{
		int count=0;
		printf("Enter your password for Admin log-in: ");
	    scanf("%s", password);
		if(strcmp(password_correct,password)==0)
		{
			printf("\n");
			printf("\n");
		    printf("**WELCOME ADMIN**\n");
			while(1)
			{
			printf("\n----------------------------------\n");
			printf("              MENU                \n");
			printf("----------------------------------\n");
			printf("1.View the events\n");
			printf("2.Player details for each event\n");
			printf("3.Add new player to an event\n");
			printf("4.Remove a player from an event\n");
			printf("5.Show the winners list for each event\n");
			printf("6.Ticket Status for each event\n");
			printf("7.Ticket Reservation for an event\n");
			printf("8.Ticket Cancellation for an event\n");
			printf("9.Log Out\n");
			printf("\n----------------------------------\n");
			printf("             *****                \n");
			printf("----------------------------------\n");
			printf("ENTER YOUR CHOICE : ");
			scanf("%d",&n);
			switch(n)
			{
                case 1: //VIEWING EVENT
                    printf("The events are:\n");
                    disp_events();
                    break;
                case 2: //DISPLAYING PLAYER DETAILS
                    detail_player(pt,ps,pa);
                    break;
                case 3: //ADDING PLAYERS TO EVENT
                    add_player(pt,ps,pa);
                    break;
                case 4: //REMOVE PLAYER FROM EVENT
                    delete_player(pt,ps,pa);
                    break;
                case 5: //DISPLAY WINNER OF EVENT
                    winner_player(pt,ps,pa);
                    break;
                case 6: //DISPLAY TICKET STATUS OF EACH EVENT
                    printf("\n");
                    printf("TENNNIS\n");
                    tickets_available(head_ticket_t);
                    print(head_ticket_t);
                    printf("\n");
                    printf("SWIMMING\n");
                    tickets_available(head_ticket_s);
                    print(head_ticket_s);
                    printf("\n");
                    printf("ATHLETICS\n");
                    tickets_available(head_ticket_a);
                    print(head_ticket_a);
                    printf("\n");
                    break;
                case 7: //TICKET RESERVATION FOR EACH EVENT
                    do{
                    printf("ENTER THE EVENT TO RESERVE TICKETS :\n");
                    disp_events();
                    printf(" 4. EXIT\n CHOOSE YOUR OPTION : ");
                    scanf("%d",&p);
                    switch (p)
                    {
                        case 1://tennis
                        {
                            print(head_ticket_t);
                            tickets_available(head_ticket_t);
                            printf("ENTER ID : ");
                            scanf("%d",&idn);
                            printf("ENTER THE SEAT NO AND NAME TO BOOK IT UNDER : ");
                            scanf("%d\n",&b );
                            printf("\n");
                            update_data_book(idn,b,head_ticket_t);
                            printf("\n");
                            break;
                        }
                        case 2://swimming
                        {
                            print(head_ticket_s);
                            tickets_available(head_ticket_s);
                            printf("ENTER ID : ");
                            scanf("%d",&idn);
                            printf("ENTER THE SEAT NO AND NAME TO BOOK IT UNDER : ");
                            scanf("%d\n",&l );
                            printf("\n");
                            update_data_book(idn,l,head_ticket_s);
                            printf("\n");
                            break;

                        }
                        case 3://athletics
                        {
                            print(head_ticket_a);
                            tickets_available(head_ticket_a);
                            printf("ENTER ID : ");
                            scanf("%d",&idn);
                            printf("ENTER THE SEAT NO AND NAME TO BOOK IT UNDER : ");
                            scanf("%d\n",&a );
                            printf("\n");
                            update_data_book(idn,a,head_ticket_a);
                            printf("\n");
                            break;
                        }
                        case 4:
                            printf("<<< EXITING TICKET RESERVATION MENU >>>");
                            break;
                        default:
                            printf("\nINCORRECT OPTION!\n");
                            break;
                    }}while (p!=4);
                    break;
            case 8: //TICKET CANCELLATION FOR AN EVENT
            do{
                printf("ENTER THE EVENT TO CANCEL TICKETS :\n");
                disp_events();
                printf(" 4. EXIT\n CHOOSE YOUR OPTION : ");
                scanf("%d",&q);
                switch (q)
                {
                    case 1://tennis
                    {
                        print(head_ticket_t);
                        update_booking_cancel(head_ticket_t);
                        break;

                    }
                    case 2://swimming
                    {
                        print(head_ticket_s);
                        update_booking_cancel(head_ticket_s);
                        break;

                    }
                    case 3://athletics
                    {
                        print(head_ticket_a);
                        update_booking_cancel(head_ticket_a);
                        break;
                    }
                    case 4:
                        printf("<<< EXITING TICKET CANCELLING MENU >>>");
                        break;
                    default:
                        printf("\nINVALID OPTION\n");
                        break;
                }}while(q != 4);
                break;
                case 9: //LOGGING OUT OF ADMIN ROLE
                    printf("\n<<< LOGGING OUT OF ADMIN >>>\n");
                    goto l;
                    break;
                default:
                    printf("INVALID OPTION!\n");
                    break;
            }
            }
            }
            else //when password is incorrect
            {
                printf("\nINCORRECT PASSWORD FOR ADMIN!!\n");
                break;
            }
          break;
		}
//case 2: ROLE IS PLAYER
		case 2:
		{
            printf("\n\nWELCOME PLAYER!!\n");
            printf("*****************\n");
            result_player(pt,ps,pa);
            goto l;
            break;
		}
//case 3: ROLE IS VISITOR
		case 3:
		{
            printf("\nWELCOME VISITOR!!\n");
            printf("*****************\n");
            detail_vis(head_ticket_t,head_ticket_s,head_ticket_a);
            goto l;
            break;
		}
//case 4 : EXIT
		case 4:
		    printf("\n\n<<<  EXITING  >>>\n");
		    printf("----------------------------------------------------\n");
		    printf("THANK YOU FOR BEING A PART OF SPORTS EVENTS 2020!!");
		    printf("\n----------------------------------------------------\n");
            exit(0);
            break;
		default:
            printf("\nINVALID OPTION! PLEASE CHOOSE VALID CHOICE.\n");
            goto l;
            break;

		}
	}
	return 0;
}