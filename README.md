# penguin
Repo for a tutorial on setting up c++ project with cmake and ninja

Requirements:
CMake : https://cmake.org/
Ninja : https://ninja-build.org/

#### Steps to build the project:

1. Install **cmake **
   1. On Mac OS, `brew install cmake`
2. Install the **ninja** build system
   1. On Mac OS, `brew install ninja`
3. From the root directory of the project, run `mkdir -p build`
4. Go to newly created directory, `cd build`
5. Run the cmake command, `cmake -GNinja ..`
6. Run `ninja` to build the project
7. Run  `./penguin` from build directory to run the project
8. Run `./test/penguin_test` from build directory to run the tests.
9. On changes, run `ninja` in the "build" directory.
