# 42 Madrid Coding Challenge 2024

Welcome to my repository! This contains the projects I developed during the **42 Madrid Coding Challenge 2024**. During this event we had to solve 3 puzzles in less than 3 hours, one each hour, and I am proud to say I could solve 2 of them. I'm excited to share my work and the solutions I came up with during this amazing event.

## 📅 Event Details

- **Date:** May 18, 2024
- **Location:** 42 Madrid

- **Programming Language Used:** C

  ## 💻 My Projects

### 1. Project Name: [Dashtantua] 

**Description:**
- Write a program that draws Sastantua’s pyramid
- The program takes an integer parameter that will determine the size of the pyramid.

**Solution:**
- The main challenge was to calculate the base of the pyramid after parsing the input given by the user.
- Once that was done, the next problem was to draw the door and the doorknob.


### 2. Project Name: [Word Puzzle]

**Description:**
- Given N words, determine whether the word puzzle is solvable or not.
- The word puzzle is considered solved when the words are arranged in a sequence,
such that every word begins with the same letter as the previous word ends.
- For example, the word "dash" can be followed by the word "happy", but not the
other way around.
- A word is defined as a string of lowercase characters, with length L. (1 ≤ L ≤ 100)
- Your function should accept 2 variables as input.
  ◦ N - Number of words in words. (2 ≤ N ≤ 100000)
  ◦ words - An array of N strings.
- Your function should return a 1 if the word puzzle is solvable, and 0 if it is not.
- Example:
  Input: N = 2, words = {"dash", "hard"}
  Output: 1
  Input: N = 3, words = {"dash", "too", "hard"}
  Output: 0
- Your function must be declared as follows:
    int word_puzzle(size_t N, char **words);

**Solution:**
- Iterate through the list checking if both the last char of the first word is the same as the first char of the next string, and keep doing this until the end of the list.



Thank you for checking out my projects! I'm always open to feedback and collaboration opportunities.
