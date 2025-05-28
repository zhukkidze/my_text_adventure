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

CHANGES MADE TO 05052025.cpp on 22.05.2025:

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

These changes ensure the program only asks relevant questions based on the user's choices and improves the overall// filepath: d:\VSC_practice\my_text_adventure\readme.txt

CHANGES MADE TO 05052025.cpp:

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

These changes ensure the program only asks relevant questions based on the user's choices and improves the overall

Changes made to 05052025.cpp:

1. Moved the second set of questions (about starting in high school, bootcamp, or university) outside of the switch statement for the first career choice.
2. Added logic so that the second set of questions is only asked if the user chooses "Programming Engineer" (option '1'). For "Baker" and "Sportsman", the program now ends after displaying the chosen career.
3. Ensured that the program only continues to the next step for valid input, and exits for invalid choices.
4. Improved code structure and flow for better readability and user experience.