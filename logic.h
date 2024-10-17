#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct player
{
	char p_name[20];
	int p_id;
	char contact[20];
	int age;
	int rank;
};

struct t_score{int t_rounds; int t_points;};
struct s_score{int s_rounds; int s_points;};
struct a_score{int a_rounds; int a_points;};

struct p_tennis_node
{
    struct player p1;
	struct t_score tscore;
    char perf;
    struct p_tennis_node *t_next;
};

 struct p_swim_node
{
    struct player p2;
	struct s_score sscore;
    char perf;
    struct p_swim_node *s_next;
};

struct p_ath_node
{
    struct player p3;
	struct a_score ascore;
    char perf;
    struct p_ath_node *a_next;
};

typedef struct p_tennis_node *p_tennis;
typedef struct p_swim_node *p_swim;
typedef struct p_ath_node *p_ath;
typedef p_tennis p_t;
typedef p_swim p_s;
typedef p_ath p_a;

//function when list empty for each event
int t_Empty(p_t pt);
int s_Empty(p_s ps);
int a_Empty(p_a pa);

//function for creating the linked lists for each event
p_t create_list_tennis();
p_s create_list_swim();
p_a create_list_ath();

//DISPLAYING EVENTS
void disp_events();

//functions for finding the previous node in each linked list for the events
p_t t_find_previous( int x, p_t pt );
p_s s_find_previous( int x, p_s ps );
p_a a_find_previous( int x, p_a pa );

//functions for adding a player node to each linked list of TENNIS
void t_add_player(p_t pt);

//functions for adding a player node to each linked list of SWIMMING
void s_add_player(p_s ps);

//functions for adding a player node to each linked list of ATHLETICS
void a_add_player(p_a pa);

//functions for displaying the details of player for event TENNIS
void t_display(p_t pt);

//functions for displaying the details of player for event SWIMMING
void s_display(p_s ps);

//functions for displaying the details of player for event ATHLETICS
void a_display(p_a pa);

//FUNCTION USED WHEN ADMIN SELECTS OPT:2 FOR DISPLAYING PLAYERS OF AN EVENT
//function to select which event's players to display (MENU DRIVEN)
void detail_player(p_t pt,p_s ps,p_a pa);

//FUNCTION USED WHEN ADMIN SELECTS OPT:3 FOR ADDING PLAYER TO AN EVENT
//function to select which event to add player to  (MENU DRIVEN)
void add_player(p_t pt,p_s ps,p_a pa);

//FUNCTION USED WHEN ADMIN SELECTS OPT:4 FOR REMOVING PLAYER FROM AN EVENT
//function to select which event's players to delete (MENU DRIVEN)
void delete_player(p_t pt,p_s ps,p_a pa);

//function to display the winners list of TENNIS
void t_display_winner(p_t pt);

//function to display the winners list of SWIMMING
void s_display_winner(p_s ps);

//function to display the winners list of ATHLETICS
void a_display_winner(p_a pa);
void swap_t(struct p_tennis_node *a, struct p_tennis_node *b);

//function for displaying winner in TENNIS event
void t_winner(p_t pt);
void swap_s(struct p_swim_node *a, struct p_swim_node *b);

//function for displaying winner in SWIMMING event
void s_winner(p_s ps);
void swap_a(struct p_ath_node *a, struct p_ath_node *b);

//function for displaying winner in ATHLETICS event
void a_winner(p_a pa);

//FUNCTION USED WHEN ADMIN SELECTS OPT:5 FOR DISPLAYING WINNER OF AN EVENT
//function to select which event to display winners list for (MENU DRIVEN)
void winner_player(p_t pt,p_s ps,p_a pa);

//function to display plater details when role is PLAYER
void result_player(p_t pt,p_s ps,p_a pa);

//Now the Visitor part is started..
struct visitornode
{
	int id;
    int seat_number;
    char *status;
    char *name;
    struct visitornode *link;
};

struct visitornode *head_ticket_t, *current_ticket_t,*head_ticket_a,*current_ticket_a,*head_ticket_s,*current_ticket_s;
struct visitornode *temp,*ptr,*t,*s,*a;

//function to create linked list for ticket booking for event TENNIS
void create_list_ticket_tennis();

//function to create linked list for ticket booking for event SWIMMING
void create_list_ticket_swim();

//function to create linked list for ticket booking for event ATHLETICS
void create_list_ticket_ath();

//Function to print the seat booking details
void print (struct visitornode *first);

//function to print the available seats
void tickets_available (struct visitornode *first);

//function to print the visitors booked ticker (booking invoice)
void print_ticket(int idn,int x,char names[20]);

//function to update the booking details
void update_data_book(int idn,int old,struct visitornode *first);

//FOR CASE:8 WHEN ROLE IS ADMIN
//function to cancel ticket booked by visitor
//void update_booking_cancel(struct visitornode *first);

//function to print the confirmation for ticket booking for VISITOR
void detail_vis(struct visitornode *first1,struct visitornode *first2,struct visitornode *first3);
