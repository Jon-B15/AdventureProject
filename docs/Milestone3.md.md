- added art, dog art shows in the intro, but street art and gate art are showing up at the top of the console window
- updated my Game::run() function to separate it into it's own functions rather than running everything in game::run
- after updating the functions, my Goolden Doodle option is not showing
	- UPDATE, was not missing... just had the wrong /n rather than \n
- game only showing one reply no matter what option I chose
	- resolved by updating a line playScene, instead of a string, it needed to be currentSceneId
- needing to add in a pointer
	- thinking about adding in a function that returns a Scene pointer when the id isn't found
	- added function for finding scene to include a pointer. updated play scene with the addition of the pointer
- added showInventory function. not displaying how I would like when clicking the option
	-edited the showInventory function, the cout "inventory" needed a space and colon
- On to making a restart feature

These changes were done to improve readability and playability. The Game::run() function was basically a bunch of functions ran inside of one function, which isn't the easiest to read and also not easy to debug. Adding art and features like showInventory were additions that increase the playability of the game and the player involvement.