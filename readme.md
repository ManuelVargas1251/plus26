<!-- using shields.io for status buttons -->
![Programming language](https://img.shields.io/badge/Language-C++-black.svg)
![Build Status](https://img.shields.io/badge/Build-Passing-green.svg)
![UELVVA](https://img.shields.io/badge/Version-v1-blue.svg?style=flat)
![Aneranupy](https://img.shields.io/badge/Aneranupy-Critical-ff69b4.svg?style=flat)

##plus26

I wanted to seperate my textbook into pdf chapters so that they would take forever to load when I want to read the, on my phone through dropbox but chrome or some other incorrect numbering of the pages made it so the pages didn't match up at all to the Table of Content. So I wrote this very specific program to take in a txt file that lists the pages numbers and adds 26 to all the numbers and format them back to look like page numbers. That's it. That's all it does.

There were a lot of chapters though which is why I didn't want to sit down with a calculator and to it all manually.

ex. 
345-367
756-800

in .txt file = 
345
367
756
800
---
To compile:

    cpp -o chord chord.cpp

To run:

    ./chord

#Further Research
I could've wrote in to use the hyphen as a delimiter but I wason a time limit so I didn't really care. The output file should give the numbers back in the original format so you can easily copy and paste them into google pdf viewer for printing only the pages you want.
