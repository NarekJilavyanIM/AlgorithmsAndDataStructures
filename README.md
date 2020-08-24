# Table of contents
1. [Project description](#project_description)
2. [Project requirements](#project_requirements)
3. [Project structure](#project_structure)
4. [Tests' execution](#tests_execution)


## project_description
##### Test automation for Groups' API

    This project is intended for implementation of:
        1. Data Structures
        2. Algorithms
        3. Design Patterns

## project_requirements
1. runner scripts require installed __'Python3'__

## project_structure

    .
    ├── Algorithms
    │   └── Sorting
    │       ├── BubbleSort.cpp
    │       ├── InsertionSort.cpp
    │       ├── MergeSort.cpp
    │       ├── QuickSort.cpp
    │       └── SelectionSort.cpp
    ├── DataStructures
    │   ├── DoubleLinkedList
    │   │   ├── doubleLinkedList.cpp
    │   │   ├── doubleLinkedList.hpp
    │   │   └── main.cpp
    │   ├── Queue
    │   │   ├── main.cpp
    │   │   ├── queue.cpp
    │   │   └── queue.hpp
    │   ├── SingleLinkedList
    │   │   ├── main.cpp
    │   │   ├── singleLinkedList.cpp
    │   │   └── singleLinkedList.hpp
    │   └── Stack
    │       ├── main.cpp
    │       ├── stack.cpp
    │       └── stack.hpp
    ├── README.md
    ├── runner.py
    └── runner_utils
        ├── options.py
        └── util.py


1. __runner.py__ - this is the scripts' runner script.
	Use the following command to view the script parameters:
	- ***$ python3 runner.py --help***
	- also all parameters are listed under ***'./runner_utils/options.py'*** module
2. __./DataStructures/<__STRUCTURE__>__ folder contains implementation of <__STRUCTURE__>  
3. __./Algorithms/Sorting/<__ALGORITHM__>.cpp__ file contains implementation of <__ALGORITHM__> sorting algoritm

## tests_execution
Below is the comprehensive command to execute an from the command line:

	$ python runner.py \
        --data_structure all \
        --sorting_algorithm all

Below are the most used runnig commands examples:

    $ python runner.py
    $ python runner.py -d_s stack
    $ python runner.py -sorting_a all
    $ python runner.py -sorting_a quickSort