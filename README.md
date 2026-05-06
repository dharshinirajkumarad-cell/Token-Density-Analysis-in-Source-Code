Task_Density_Indicator

HoT Skill - Token Density Indicator

Overview
This project implements a Token Density Indicator to analyze lexical tokens generated during compilation. The objective is to derive a meaningful metric from raw token data to evaluate code complexity and readability.

Problem Statement
Raw lexical tokens do not directly indicate code maintainability or structural complexity. Therefore, a feature called Token Density (tokens per line) is computed to quantify how dense the code is.

Approach
1. Data Processing
Token counts for each line are stored using arrays
Input is taken line by line
Data is processed using loops
2. Feature Computation
Token Density is calculated using:

Token Density = Tokens per Line

3. Flag Generation
A threshold value is used to classify code:

Density > 5 → Token Heavy Code
Density ≤ 5 → Normal Code
4. Additional Analysis
Line-wise token density is displayed
Helps identify complex lines
Improves readability analysis
Implementation Details
Language Used: C

Concepts Used:

Arrays
Loops
Conditional statements
Formatted output using printf()
Sample Input
Enter number of lines: 3 Enter tokens in line 1: 4 Enter tokens in line 2: 8 Enter tokens in line 3: 3

Sample Output
Line Tokens Density Token_Heavy 1 4 4.00 NO 2 8 8.00 YES 3 3 3.00 NO

Threshold Justification
A threshold of 5 tokens per line is selected based on standard coding practices. Code exceeding this value tends to be dense and harder to read, debug, and maintain.

Real-World Relevance
Token Density can be used in compiler optimization and static code analysis tools to identify complex or poorly structured code. It helps developers improve readability and maintainability.

Files Included

RA2311026050253_Dharshini R_HoT.c
RA2311026050253_Dharshini R_Output.png
RA2311026050253_Dharshini RExplanation.pdf

Conclusion
This project demonstrates how raw lexical data can be transformed into meaningful insights using feature engineering and conditional logic. The Token Density metric provides a simple yet effective way to analyze code complexity.
