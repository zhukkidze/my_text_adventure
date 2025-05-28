This is a text-based adventure project.
Welcome to my FIRST project that is done via VS code for Codecademy.
FYI all changes will be provided by AI in that text file.

---

## Change Log

### [May 6, 2025, 10:00 AM]
- Task confirmed to document all changes in this file, including date and time.
- Added a "Change Log" section to track updates systematically.

### [May 6, 2025, 10:30 AM]
- Fixed logic in `05052025.cpp` to ensure valid inputs (`A`, `B`, `C`, `D`) display the correct output.
- Added error handling for invalid inputs in the program.
- Updated comments in `05052025.cpp` for better clarity.

### [May 6, 2025, 11:00 AM]
- Added logic to handle career choices (1, 2, or 3) in `05052025.cpp`.
- Implemented input validation for career choices and provided feedback for invalid inputs.
- Added detailed options for the "Programming Engineer" career path (choices A, B, C, D).
- Improved comments to clarify the purpose of the program and its sections.
- Enhanced output readability by adding blank lines and structured prompts.

---

## Changes made to 05052025.cpp

### CHANGES MADE ON 22.05.2025:

1. **Fixed program flow after the first career choice:**
   - The code for the second set of questions (about starting in high school, bootcamp, or university) was originally placed after the switch statement, so it always ran, even if the user chose Baker or Sportsman.
   - Now, the second set of questions is only asked if the user selects "Programming Engineer" (choice '1'). For Baker or Sportsman, the program ends after displaying the chosen career.

2. **Moved and updated the second question logic:**
   - The prompts for "A", "B", or "C" (high school, bootcamp, university) are now only shown if the user chose Programming Engineer.
   - This prevents irrelevant questions for users who chose Baker or Sportsman.

3. **Improved input validation:**
   - The code checks if the user entered a valid option for both the first and second choices.
   - If an invalid option is entered, the program displays an error message and exits.

4. **Clarified comments and structure:**
   - Comments were updated to better explain each section of the code and the logic behind the changes.

These changes ensure the program only asks relevant questions based on the user's choices and improves the overall experience.

---

### Changes made in the last 24 hours:

1. Improved the structure and readability of the main function, including clearer prompts and comments.
2. Added detailed descriptions and consequences for each career path (Programming Engineer, Baker, Sportsman).
3. Implemented sub-choice logic for each career path using nested switch statements (e.g., learning path for Programming Engineer, development path for Baker, training path for Sportsman).
4. Added input validation for all user choices, with appropriate messages and program termination on invalid input.
5. Enhanced user prompts for clarity and engagement, including ASCII art for career path directions.
6. Ensured that each career path and sub-path provides unique feedback and guidance to the user.
7. Fixed minor typos and improved the flow of printed messages.