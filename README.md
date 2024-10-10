🏅 Sport Event Management System
🎯 Project Overview
This is your go-to system for managing sports events and players! Whether it’s tennis, swimming, or athletics, this project handles player info, performance tracking, and even audience ticket bookings. It's built using linked lists, so everything is super efficient behind the scenes!

✨ Features
Player Management: Add, view, and remove players from events.
Event Handling: Supports Tennis, Swimming, and Athletics.
Winner Calculation: Automatically figures out the winner based on scores.
Audience Registration: Visitors can book seats for events and get tickets (yes, virtual ones, no more printing!).
📚 Data Structures
Linked Lists everywhere! From managing players to visitors, it's all about linking those nodes:
Player nodes store each player's data.
Visitor nodes handle audience ticket bookings.
⚙️ Modules
1. Player Management
Each player gets their own node in the linked list of their event.
Attributes include:
p_name: Player’s name.
p_id: Unique player ID.
contact: Contact details.
age: Age of the player.
rank: Player's current rank.
The admin can:

Add players
Display their details
Remove them if they don't show up on time! ⌚
2. Audience Registration
Visitors can book tickets for tennis, swimming, or athletics.
Each visitor gets:
id: Unique visitor ID.
seat_number: Assigned seat.
name: Visitor’s name.
status: Booking status (confirmed or canceled).
🎮 Event Management
Tennis Event
Players compete in multiple rounds, and their performance is tracked using the attributes t_rounds and t_points.
Admins can add players, display details, and announce the champ!
Swimming Event
Players swim their hearts out, and their scores are stored in s_rounds and s_points. Same admin controls here.
Athletics Event
Run, jump, or throw! Players' performance in athletics is tracked, and their details are managed similarly to the other events.
🏆 Winner Determination
Winners are calculated based on points (the more, the better!). A sorting algorithm ensures the top scorers are crowned champions in each event. 🥇
🧑‍💻 Admin Functions
Add Player: Admin can add a player to any event.
Display Players: View all player details and their scores.
Remove Player: Kick a player out of the list if needed.
Announce Winner: Calculate and display the event winner.
Manage Audience: Admins also get to see and manage audience registrations. 🎟️
🎟️ Visitor Functions
Book Tickets: Visitors can book seats for the events.
Cancel Tickets: Change of plans? Visitors can cancel their bookings.
View Tickets: Visitors can view their seat numbers and ticket status.
🛠️ Technologies Used
C Language: Built using C, with a focus on structures and linked lists.
Data Structures: Linked lists handle the entire data management for players and visitors.
🚀 How to Run
Clone the project to your machine.
Compile the code:
bash
Copy code
gcc -o sport_event_management sport_event_management.c
Run it:
bash
Copy code
./sport_event_management
Enjoy the menu-driven interface to manage players, events, and audience!
🌟 Future Enhancements
Add more sports (we love options!).
Integrate a payment system for ticket booking.
Develop a shiny GUI to replace the menu-driven interface.
Add a leaderboard to track player performance across events.
