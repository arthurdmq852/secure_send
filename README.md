# secure_send

Secure Send (Temporary name) is a communication application currently under development. 
Its goal is to bring instant messaging and video calls together in a desktop application.

> **Status** : Early stage. Try to understand how Qt 6 works to create a great user interface.

## Context

I had the idea of making this application after hearing from my classmates about their own 
text messaging application. I was thinking that this project can be really interesting to
learn a lot of things and get a lot of skills.

## Goals

My main goal is to create a full desktop application while learning how applications are 
designed and developed, how video calls work, and much more.

- Send and receive messages.
- Add and manage friends.
- Make video calls
- Provide a simple and clear desktop interface.

## Technologies

- **C++** - The programming language used for the application.
- **Qt 6** - The framework used to build the graphical user interface.
- **CMake** — The build system used to configure and compile the project.

## Launch the project

To launch this application, you need to use CMake and the required development dependencies
installed on your system.

Run the following commands from the project's root directory:

```bash
cmake -S . -B build
cmake --build build
./build/src/app/secure_send
```

> (You can also use my own bash script to launch it quickly)

## Current Development Status

This project is still in its early stages. It is primarily a learning project, and its features are not yet fully implemented.

## Roadmap

- [x] Understand the first principles of Qt 6
- [ ] Develop and organize the user interface.
- [ ] Implement friend and contact management.
- [ ] Develop the messaging system.
- [ ] Integrate video calls.
- [ ] Document installation, building, and usage.
