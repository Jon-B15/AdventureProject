# Instructions

Update this document where indicated [look for the brackets!]. Replace text inside the brackets with your own information. For example: Course Name should be the name of this course, and not the generic words "Course Name".

<br>

## [ Project and Portfolio 1: Computer Science - Online ]

- **[ Jonathan Bangert ]**
- **[ October 4th ]**

This paper addresses some of the topic matter covered in research and activity this week. Be sure to include reference links below to the research and information you used to complete this assignment.

## Topic: Terminal

Professional developers use Terminal daily. It's essential to understand some fundamental commands to use the application.

Update the information below to demonstrate your knowledge on this topic.

**1. Using Terminal, there are essential commands to know.**

List the correct Terminal commands to do the actions listed below. Replace **CMD** with the correct command sequence. You can keep or enhance the brief description.

**The last bullet provides an example**.

- [ clear ]: Clear the Screen
- [ pwd ]: Print the "Working Directory"
- [ ls ]: List files and folders
- [ ls -la ]: List files and folders, including invisible files
- [ ls -lah ]: List all files and folders, in human readable form
- [ cd "folder name"]: Change directory
- [ cd / ]: Change directory, go to root directory
- [ cd ~ ]: Change directory and go to user home directory
- [ cd .. ]: Change directory, go up one folder level
- [ cd../.. ]: Change directory, go up two folder levels
- [ cd ~/Desktop ]: Change directory to my desktop!

**2. Using Terminal...**

**Folder Drop:** Try typing "cd" followed by a space, and then drag a folder into terminal and press return. Test this out and describe your results below.

[ Doing so will paste the full file/folder path. Makes for easier navigating within a terminal's directory commands ]

## Topic: Version Control & Git

Version control, also known as revision control, records changes to a file or set of files over time so that you can recall specific versions later. In this class, we are learning Git. Update the information below where indicated.

**1. There are three types of version control.**

[ Local: involves copying files from one directory to another, or saving a file with a different name. Centralized: developers have a centralized server where the main code resides and they will check out a piece of code that needs completed. Distributed: a copy of the repository is stored on a local drive, and the repository gets updated at will.]

**2. Using Terminal, there are also essential Git commands to know.**

List the correct Git commands to do the actions listed below in Terminal. Replace CMD with the correct command and keep or enhance the brief description.

- [ git clone <repository-url> ]: Clone a repository
- [ git config --global user.name "Your Name" ]: Set-up a global user name
- [ git config --global user.email "GitHubEmail@example.com" ]: Set-up a global email address (to match my GitHub account email)
- [ git status ]: Shows the current state of your directory and staging area
- [ git add <file> ]: Add modified files to the next commit
- [ git commit -m "Your commit message" ]: Make a commit with a new message
- [ git log ]: Show my commit history
- [ git help ]: Show Git's help screen

**3. Connecting to GitHub using Terminal.**
HTTPS is the the correct way to connect to GitHub in this course. Describe how you connect to GitHub from Terminal using this protocol. What steps do you take?

[ 1. Install Git, you can check that it installed with git --version
2. Clone the repo using, git clone https://github.com/username/repo
3. You'll need a personal access token, which can be created in developer settings of github
4. next time you clone, past the token instead of your password]

**4. Using .gitignore and Why it's Important**  
Most repositories contain a .gitignore file.

- What is the purpose of this file?
  <br>
  [This file tells Git which files to leave out of version control when committing changes.]

- What is the "**.DS_Store**" file and why would you want to ignore it?
  <br>
  [DS_Store contains OS files, which if committed, can cause unnecessary clutter for yourself and others viewing the repo. This can also leak information from your machine.]

- What other file or folder would you want to add to a .gitignore file and why?
  <br>
  [.exe files, these cause more clutter and pointless changes each new commit. Log and temporary files, cached folders have no value to the project.]

<br>

# Reference Links

Replace the example references below with your own links and recommended resources. It is acceptable to provide multiple links for a single topic and to use material provided to you in this class. You are encouraged to link to your own independent research as well.

[ I found a lot of good GitHub resources via the GitHub site, git-scm.com. I also utilize geeks for geeks quite a lot. That site is great for not only coding information, but just general tech and IT assistance. I also prefer to utilize the documents and information given to us via the Full Sail One instructors and modules. ]

**Terminal Commands**  
[Site Address]([Terminal Cheat Sheet - Command Line & Shell | Coddy](https://coddy.tech/cheat-sheets/terminal))

**Three Types of Version Control**  
[Site Address]([Version Control - Content - Classes – FSO](https://online.fullsail.edu/class_sections/292723/modules/1032770/activities/5888783))

**Git Commands**  
[Site Address]([Git Commands Cheatsheet (2026) | Essential Git Reference | DevToolHQ](https://devtoolhq.com/cheatsheet/git-commands))

**Connecting to GitHub using Terminal**  
[Site Address]([Login Using The Git Terminal - GeeksforGeeks](https://www.geeksforgeeks.org/git/how-to-login-using-the-git-terminal/))

**Using .gitignore and Why it's Important**  
[Site Address]([Git - Recording Changes to the Repository](https://git-scm.com/book/en/v2/Git-Basics-Recording-Changes-to-the-Repository#_ignoring))
