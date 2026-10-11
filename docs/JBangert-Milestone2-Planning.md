> Use this worksheet to plan the next phase of your project **before you begin coding**
> Be clear, specific, and intentional—this will guide your development this week.

---
## 📌 Project Overview

**Project Name:**
→   Lets Go Home
  
**What does your program currently do? (1–3 sentences)**   
→This project is an adventure game in the point of view of a dog character. You play the game by going through scenes and choose different paths. Based on those paths the outcome may be different.

---
## 🔍 Current Progress Check  
  
**What is working right now?**   
→   The core loop is working
  
**What is NOT working or incomplete?**   
→   Additional features
  
**What feels confusing or messy in your code?**   
→   I would say the dialog. It isn't very in depth and it really didn't feel like a game when I went through it.

---
## 🚀 Feature Planning  
  
List the features you plan to add or improve this week.  
  
### Feature 1  
**Name:**  
→   Play again feature. Might also add in a main menu
  
**What does this feature do?**   
→   It allows the user to restart the game at the beginning
  
**Why is this feature important?**   
→   So the game has replay ability. Normal games don't just end and close the game, they'll send you back to the menu.
  
---
### Feature 2  
**Name:**   
→   ASCI art
  
**What does this feature do?**   
→   This feature will add in some visuals for the player
  
**Why is this feature important?**   
→   I think this is important in a console game because without visuals it feels more like a book, at least that is how I felt playing it. With a bit of art in there I feel like the players would enjoy the game a bit more.
  
---
  
### Feature 3 (optional)  
**Name:**   
→   RNG feature
  
**What does this feature do?**   
→   I am not sure how I want to implement it but I want some sort of RNG factor. I feel like that would make it feel more like a game.
  
**Why is this feature important?**   
→   Adding in a feature to make the game more gamey and involving the player a bit more than just selecting the path. I think that is my main focus the next two weeks, is how do I involve the player more.
  
---
## 🧩 System Design Updates  
  
**Will you need to create any new classes? If so, which ones?**   
→   I don't think I will, but it is possible, especially for ASCI art. It would probably be cleaner to simply call the art in the main loop.
  
**Will you modify any existing classes? How?**   
→   Yes, I'll need to add the art into the Game class as well as adding in the play again feature. If I do end up adding in some RNG features, I'll need to edit some existing classes I am sure.
  
**What data structures will you use (vectors, 2D vectors, etc.)?**   
→   ASCII art would be a number of strings and a restart game would be a loop (probably a do/while loop)
  
---
## 🔄 Program Flow  
  
**Describe how a user interacts with your program:**  
  
1. Program starts →   Title screen and you select your dog breed
2. User chooses →   Dog breed and name
3. Program responds →   Intro dialog and setup to first choice
4. Loop/next step →    Making first choice, leading to different scenes and different choices
  
---
## 🎯 Usability Improvements  
  
How will you make your program easier to use this week?  
  
- Clearer prompts:   
→   Adding in a How to Play screen at the beginning of the game
  
- Better error handling:   
→   Making sure my game exits cleanly so that it can't get stuck in an endless loop
  
- Improved menu/navigation:   
→   I plan on adding an inventory display above the users choices. I want it to look clean and integrate into the game nicely.
  
---
## ⚠️ Potential Challenges  
  
**What do you think will be the hardest part this week?**   
→   The RNG portion, if I plan to add that in. I haven't really understood the random C++ stuff
  
**What is your plan if you get stuck?**   
→   I'll definitely be pulling up some documentation on random and how to use it prior to taking on that challenge.
  
---
  
## 📈 Level Up Goal  
  
**What skill are you focusing on improving this week?**   
→   Debugging
  
**What will you do to improve it?**   
(e.g., tutorial, practice, debugging, office hours)   
→   Debug more. I feel like it really is that simple. I just have to continue coding and failing, figure out why it is failing, and fix it.
  
---
## 🗓️ Task Breakdown (GitHub Issues Planning)  
  
List the tasks you plan to create as GitHub Issues:  
  
- [ ]   Research ASCII art
- [ ]   Play again feature
- [ ]   How to Play
- [ ]   RNG features
  
---
  
## 🔥 Final Check  
  
Before you start coding, ask yourself:  
  
- [x] Do I know what I’m building this week?   
- [x] Do I know where to start?   
- [x] Did I break my work into small tasks?   
  
If yes → start coding 🚀   
If no → refine your plan first   
  
---
## 😈 Final Thought  
  
> Plan it now… or debug it later.