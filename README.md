# ISOTTA (Intelligent System for Organic Tweeting and Thoughtful Artistry)

!(Isotta trento foto mic.jpg)

ISOTTA is a critical design vintage artifact designed to act as a co-creative writing partner for Twitter users. It embodies slow technology principles to highlight the productivity disparities between humans and computers, fostering a discussion on the implications of Human-AI interaction.

The physical artifact is a hybrid machine combining an antiquated AEG Mignon typewriter with a hidden Arduino Nano board, speed sensors, linear sliding potentiometers, and an iPad acting as a display.

## How It Works

* **Input**: The user moves a metallic cursor on a printed matrix to select a letter, then presses a confirm button to input the character.


* **AI Collaboration**: As the user slowly types, a hidden timer activates. ISOTTA queries the OpenAI API (using models like `gpt-3.5-turbo-instruct`) to generate text continuations. These continuations are intentionally influenced by the fictional "Sith Code" ideology, focusing on strength, passion, and power.


* **Publishing**: Once the tweet is finalized, it is published to the `@IsottaAI` profile. A background bash script continuously checks for a generated AppleScript file (`LastTweet.scpt`), appends a timestamp, and executes it to seamlessly post the tweet via GUI scripting.



---

## Setup & Configuration

* A Vuo composition handles the user interface and core logic.


* You must provide your own OpenAI API key in a file named `openai_key.txt`.


* Upon execution, the system creates a `~/Library/Application Support/Isotta/` folder to store data, calibrations, and tweet prompts (`TweetPrompts.txt`).



---

## Academic Publications

The design, implementation, and evaluation of ISOTTA have been featured in the following research publications:

* *[Demo: ISOTTA - A Slow Exploration of Power Relations in Writing with Language Models](https://doi.org/10.1145/3605390.3610826)* (CHItaly 2023) by Michele Cremaschi, Maria Menendez-Blanco, and Antonella De Angeli.


* *[A Steampunk Critique of Machine Learning Acceleration](https://doi.org/10.1145/3643834.3660688)* (DIS '24) by Michele Cremaschi, Max Dorfmann, and Antonella De Angeli.



---

## Licenses & Credits

This project utilizes the following third-party audio assets and fonts:

* **Menu Tick.wav** by LorenzoTheGreat -- [https://freesound.org/s/417792/](https://freesound.org/s/417792/) -- License: Attribution 3.0
* **UI Confirmation Alert, B1.wav** by InspectorJ -- [https://freesound.org/s/403011/](https://freesound.org/s/403011/) -- License: Attribution 4.0
* **UI Confirmation Alert, C4.wav** by InspectorJ -- [https://freesound.org/s/403019/](https://freesound.org/s/403019/) -- License: Attribution 4.0
* **zai_AEGMignonTypewriter1924.ttf** ©2021 version 1.1 zai.tomasz.skowronski@gmail.com
