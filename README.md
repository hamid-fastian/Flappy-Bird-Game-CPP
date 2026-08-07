🐦 Flappy Bird Game (C++)

A simple console-based Flappy Bird clone developed in C++ using Object-Oriented Programming (OOP) concepts. The game challenges players to control a bird, avoid pipes, and achieve the highest score possible.

---

📌 Project Overview

This project recreates the classic Flappy Bird gameplay in the Windows console. The player controls a bird that continuously falls due to gravity and must press the Spacebar to jump through gaps between moving pipes. The game ends when the bird collides with a pipe or touches the top or bottom boundary.

The project demonstrates the implementation of game logic, object-oriented design, file handling, and keyboard interaction in C++.

---

✨ Features

- 🎮 Console-based Flappy Bird gameplay
- 🐦 Bird movement with gravity and jumping mechanics
- 🚧 Multiple moving pipes
- 💥 Collision detection
- 📈 Real-time score tracking
- 🏆 High score system using file handling
- 📖 Instructions menu
- ℹ️ About section
- 📋 Interactive main menu
- 🚪 Exit screen with final score

---

🛠 Technologies Used

- C++
- Object-Oriented Programming (OOP)
- Windows Console API
- File Handling
- Keyboard Input Handling
- Visual Studio / Code::Blocks (Windows)

---

📂 Project Structure

FlappyBird/
│
├── Classes.h            # Class declarations
├── Classes.cpp          # Class implementations
├── Main.cpp             # Program entry point
├── HighScore.txt        # Stores highest score
├── Instructions.txt     # Game instructions
├── About.txt            # Game information
└── README.md

---

🏗 Class Structure

Bird

Responsible for:

- Bird position
- Jumping
- Gravity movement
- Displaying the bird
- Resetting the bird

Pipe

Responsible for:

- Pipe generation
- Pipe movement
- Gap management
- Displaying pipes

Score

Responsible for:

- Current score
- Score display
- Score reset
- Score increment

Game

Controls the complete gameplay:

- Game loop
- Rendering
- User input
- Collision detection
- Score checking
- High score management
- Instructions
- About section
- Exit screen

---

🎮 Controls

Key| Action
Spacebar| Jump
Menu Options| Navigate through the game menu

---

▶️ How to Run

1. Clone this repository.

git clone https://github.com/your-username/FlappyBird.git

2. Open the project in Visual Studio or another Windows-compatible C++ IDE.

3. Compile the project.

4. Run the executable.

---

📖 Game Flow

1. Launch the game.
2. Select Start Game.
3. Press Spacebar to keep the bird flying.
4. Pass through pipe gaps.
5. Earn points for each pipe cleared.
6. Avoid collisions.
7. Try to beat the saved high score.

---

📸 Screenshots
Main Menu

<img width="286" height="201" alt="image" src="https://github.com/user-attachments/assets/60a01553-e622-4b60-a775-c4e37807cfe1" />

Gameplay

<img width="892" height="322" alt="image" src="https://github.com/user-attachments/assets/6d313eb8-a1d1-44e4-a9b0-8b2cc926fc1e" />

Game Over Screen

<img width="298" height="346" alt="image" src="https://github.com/user-attachments/assets/e5d551d8-50d4-4f55-b337-1fa4493e5fc4" />

---

📚 Concepts Demonstrated

- Classes and Objects
- Encapsulation
- Constructors
- Member Functions
- Arrays of Objects
- File Handling
- Console Graphics
- Keyboard Input
- Collision Detection
- Game Loop
- Object Interaction
- Basic Game Development

---

🚀 Future Improvements

- Random pipe heights
- Difficulty levels
- Multiple bird characters
- Sound effects
- Colored console graphics
- Better animations
- Pause and Resume
- Restart option
- Leaderboard with multiple players
- Cross-platform support

---

👨‍💻 Developer

Malik Hamid Raza

Second-Year BS Artificial Intelligence Student

Passionate about C++, Python, Object-Oriented Programming, and Software Development.

GitHub: https://github.com/hamid-fastian

LinkedIn: https://www.linkedin.com/in/malik-hamid-raza-9338693a8

---

📄 License

This project is developed for educational and learning purposes. Feel free to use and modify it for academic projects.
