<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>C++ Module 00 📚</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            line-height: 1.6;
            margin: 0;
            padding: 0;
            background-color: #f4f4f4;
        }
        .container {
            max-width: 900px;
            margin: auto;
            padding: 20px;
            background: #fff;
            box-shadow: 0 0 10px rgba(0,0,0,0.1);
        }
        h1, h2, h3 {
            color: #333;
        }
        a {
            color: #1e90ff;
            text-decoration: none;
        }
        a:hover {
            text-decoration: underline;
        }
        .video-container {
            text-align: center;
            margin: 20px 0;
        }
        .table-of-contents ul {
            list-style: none;
            padding: 0;
        }
        .table-of-contents li {
            margin-bottom: 10px;
        }
        pre {
            background: #eee;
            border: 1px solid #ddd;
            padding: 10px;
            overflow-x: auto;
        }
    </style>
</head>
<body>
    <div class="container">
        <h1>C++ Module 00 📚</h1>
        <p>Welcome to C++ Module 00! This repository contains exercises designed to teach the basics of C++ and Object-Oriented Programming (OOP). Solutions should adhere to the C++98 standard.</p>
        <div class="video-container">
            <video width="640" height="360" controls autoplay loop>
                <source src="video.mp4" type="video/mp4">
                Your browser does not support the video tag.
            </video>
        </div>
        <h2>Table of Contents 📖</h2>
        <div class="table-of-contents">
            <ul>
                <li><a href="#introduction">Introduction</a></li>
                <li><a href="#general-rules">General Rules</a></li>
                <li><a href="#exercise-00-megaphone">Exercise 00: Megaphone</a></li>
                <li><a href="#exercise-01-my-awesome-phonebook">Exercise 01: My Awesome PhoneBook</a></li>
            </ul>
        </div>
        <h2 id="introduction">Introduction 🚀</h2>
        <p>C++, developed by Bjarne Stroustrup as an extension of the C language, is a powerful general-purpose programming language. This module introduces the fundamentals of C++ and Object-Oriented Programming (OOP). Solutions must comply with the C++98 standard.</p>
        <h2 id="general-rules">General Rules 📜</h2>
        <ul>
            <li><strong>Compiler:</strong> <code>c++</code></li>
            <li><strong>Compilation Flags:</strong> Use <code>-Wall -Wextra -Werror</code> flags for compilation. These flags enable all warnings and treat them as errors.</li>
            <li><strong>Forbidden Functions:</strong> You may not use C functions such as <code>malloc</code>, <code>printf</code>, <code>free</code>. STL (Standard Template Library) functions are also prohibited.</li>
            <li><strong>File Naming:</strong> Adhere to the specified file naming conventions for each exercise. For example, use <code>ClassName.hpp</code> and <code>ClassName.cpp</code> for class definitions and implementations.</li>
            <li><strong>Header Files:</strong> Header files should contain only declarations; implementation code is not allowed in header files.</li>
            <li><strong>Namespace and Friend Keywords:</strong> The use of <code>using namespace</code> and <code>friend</code> keywords is prohibited unless otherwise stated.</li>
        </ul>
        <h2 id="exercise-00-megaphone">Exercise 00: Megaphone 🎤</h2>
        <p><strong>Objective:</strong> Develop a program that converts command-line arguments to uppercase.</p>
        <h3>Requirements:</h3>
        <ul>
            <li><strong>Input Processing:</strong> The program should accept multiple command-line arguments and convert each argument to uppercase, then concatenate them.</li>
            <li><strong>Output:</strong> The result should be printed in uppercase.</li>
            <li><strong>Edge Cases:</strong> If no arguments are provided, the program should output a loud and unbearable feedback noise.</li>
        </ul>
        <h3>Example Usage:</h3>
        <pre>
$> ./megaphone "shhhhh... I think the students are asleep..."
SHHHHH... I THINK THE STUDENTS ARE ASLEEP...

$> ./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.

$> ./megaphone
* LOUD AND UNBEARABLE FEEDBACK NOISE *
        </pre>
        <h2 id="exercise-01-my-awesome-phonebook">Exercise 01: My Awesome PhoneBook 📖📞</h2>
        <p><strong>Objective:</strong> Create a phone book application that allows users to manage contact information.</p
        <h3>Requirements:</h3>
        <ul>
            <li><strong>Storing Contact Information:</strong>
                <ul>
                    <li>The <code>PhoneBook</code> class should be designed to hold up to 8 contacts. When adding a 9th contact, the oldest one should be removed.</li>
                    <li>Use the <code>Contact</code> class to store information about each person.</li>
                </ul>
            </li>
            <li><strong>Commands:</strong>
                <ul>
                    <li><strong>ADD:</strong> Adds a new contact. Prompts the user for first name, last name, nickname, phone number, and darkest secret.</li>
                    <li><strong>SEARCH:</strong> Displays the stored contacts in a table format. The table includes columns for index, first name, last name, and nickname, with each column being 10 characters wide. Text should be right-aligned, and overly long text should be truncated with a period ('.').</li>
                    <li><strong>EXIT:</strong> Closes the program and deletes all stored contacts.</li>
                </ul>
            </li>
        </ul>
        <h3>Notes:</h3>
        <ul>
            <li>Dynamic memory allocation is prohibited; use fixed-size arrays.</li>
            <li>The contact list must be properly formatted and aligned.</li>
            <li>Handle user inputs and edge cases robustly.</li>
        </ul>
    </div>
</body>
</html>
