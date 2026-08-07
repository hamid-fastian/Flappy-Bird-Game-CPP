# 🐦 Flappy Bird Game (C++)

A **console-based Flappy Bird clone** developed in **C++** using **Object-Oriented Programming (OOP)** concepts. The game challenges players to navigate a bird through moving pipes while avoiding collisions and achieving the highest possible score.

---

# 📌 Project Overview

This project is a recreation of the classic **Flappy Bird** game for the Windows console. The player controls a bird that continuously falls due to gravity and must press the **Spacebar** to jump through gaps between moving pipes. The game ends when the bird collides with a pipe or touches the upper or lower boundary.

The project was built to strengthen understanding of **Object-Oriented Programming**, **game development fundamentals**, **collision detection**, **file handling**, and **Windows console programming**.

---

# ✨ Features

- 🐦 Smooth bird movement with gravity
- ⬆️ Spacebar jump mechanics
- 🚧 Multiple moving pipes
- 💥 Collision detection
- 📈 Real-time score tracking
- 🏆 Persistent high score system using file handling
- 📖 Instructions menu
- ℹ️ About section
- 📋 Interactive main menu
- 🚪 Professional exit screen

---

# 🛠️ Technologies Used

- C++
- Object-Oriented Programming (OOP)
- Windows Console API
- File Handling
- Keyboard Input Handling
- Visual Studio

---

# 📂 Project Structure

```text
Flappy-Bird-CPP/
│
├── Classes.h
├── Classes.cpp
├── Main.cpp
├── HighScore.txt
├── Instructions.txt
├── About.txt
└── README.md
```

---

# 🏗️ Class Design

## 🐦 Bird Class

Responsible for:

- Bird movement
- Jump mechanics
- Gravity simulation
- Position management
- Displaying the bird

### Key Functions

- `DisplayBird()`
- `jumpBird()`
- `MoveBird()`
- `Reset()`

---

## 🚧 Pipe Class

Responsible for:

- Creating pipes
- Moving pipes across the screen
- Managing pipe dimensions
- Rendering upper and lower pipes

### Key Functions

- `DisplayPipe()`
- `MovePipe()`
- `setX()`

---

## 📈 Score Class

Responsible for:

- Tracking the player's score
- Displaying the current score
- Increasing the score
- Resetting the score

### Key Functions

- `IncreaseScore()`
- `DisplayScore()`
- `ResetScore()`

---

## 🎮 Game Class

Controls the complete gameplay including:

- Game loop
- Screen rendering
- User input
- Collision detection
- Score management
- High score management
- Instructions screen
- About section
- Exit screen

### Key Functions

- `StartGame()`
- `Update()`
- `Display()`
- `HandleInput()`
- `CheckCollision()`
- `CheckScore()`
- `ShowScore()`

---

# 🎮 Controls

| Key | Action |
|------|--------|
| **Spacebar** | Make the bird jump |
| **Menu Options** | Navigate through the game |

---

# ▶️ How to Run

1. Clone the repository.

```bash
git clone https://github.com/hamid-fastian/Flappy-Bird-CPP.git
```

2. Open the project in **Visual Studio**.

3. Build the solution.

4. Run the executable.

---

# 🎯 Gameplay

1. Launch the game.
2. Select **Start Game**.
3. Press the **Spacebar** to keep the bird flying.
4. Pass safely through the gaps between pipes.
5. Earn points by clearing each pipe.
6. Avoid collisions with pipes and screen boundaries.
7. Try to achieve a new high score.

---

# 📸 Screenshots

## 🏠 Main Menu

<img width="286" height="201" alt="image" src="https://github.com/user-attachments/assets/28e828ba-99c2-44cd-99ab-6ae1838a4b19" />

---

## 🎮 Gameplay

<img width="892" height="322" alt="image" src="https://github.com/user-attachments/assets/1118edfb-3450-4d11-821f-3faa8f3703ec" />


## 💥 Game Over Screen

<img width="298" height="346" alt="image" src="https://github.com/user-attachments/assets/19360376-5953-4a6f-9300-81a8bc40bf75" />

---

# 📚 Concepts Demonstrated

- Object-Oriented Programming
- Classes & Objects
- Encapsulation
- Constructors
- Arrays of Objects
- File Handling
- Keyboard Input Handling
- Windows Console API
- Collision Detection
- Game Loop Design
- Basic Game Development

---

# 🚀 Future Improvements

- Randomized pipe heights
- Difficulty levels
- Colored console graphics
- Sound effects
- Pause and resume functionality
- Restart without exiting
- Multiple bird characters
- Leaderboard system
- Improved animations
- Cross-platform support

---

# 👨‍💻 Developer

**Malik Hamid Raza**

**BS Artificial Intelligence Student**

Passionate about **C++**, **Python**, **Object-Oriented Programming**, and **Software Development**.

- **GitHub:** https://github.com/hamid-fastian
- **LinkedIn:** https://www.linkedin.com/in/malik-hamid-raza-9338693a8

---

# 📄 License

This project is licensed under the **MIT License**.

Feel free to use, modify, and learn from this project for educational purposes.
