""" This module is intended to keep utility functions. """

import os
from datetime import datetime
from xml.etree import ElementTree

from xml.dom import minidom


class Utils:
    """ This is the main util class. """

    def __init__(self):
        self.structure_key = "data_structure"
        self.sorting_key = "sorting_algorithm"
        self.file_data_structure_key = "file_data_structure"
        self.singleLinkedList_key = "singleLinkedList"
        self.doubleLinkedList_key = "doubleLinkedList"
        self.command_key = "command"
        self.stack_key = "stack"
        self.queue_key = "queue"
        self.all_key = "all"
        self.quick_sort_key = "quickSort"
        self.bubble_sort_key = "bubbleSort"
        self.insertion_sort_key = "insertionSort"
        self.merge_sort_key = "mergeSort"
        self.selection_sort_key = "selectionSort"

        self.log_for_data_structure_test_start = (
                """\n\n==========>"""
                """\t{data_structure}\t"""
                """<==========\n\n""")

        self.log_for_algorithm_test_start = (
                """\n\n==========>"""
                """\t{algorithm}\t"""
                """<==========\n\n""")
        self.run_sorting_algorithm_command = "g++ ./Algorithms/Sorting/{algorithm}.cpp -o ./Algorithms/Sorting/{algorithm}.out & ./Algorithms/Sorting/{algorithm}.out"
        self.run_list_command = "g++ ./DataStructures/{data_structure}/main.cpp ./DataStructures/{data_structure}/{file_data_structure}.cpp -o ./DataStructures/{data_structure}/main.out & ./DataStructures/{data_structure}/main.out"
        self.run_depending_to_list_command = "g++ ./DataStructures/{data_structure}/{file_data_structure}.cpp ./DataStructures/DoubleLinkedList/doubleLinkedList.cpp ./DataStructures/{data_structure}/main.cpp -o ./DataStructures/{data_structure}/main.out & ./DataStructures/{data_structure}/main.out"

        self.data_structures = [
            self.singleLinkedList_key,
            self.doubleLinkedList_key,
            self.stack_key,
            self.queue_key
        ]

        self.sorting_algorithms = [
            self.quick_sort_key,
            self.bubble_sort_key,
            self.insertion_sort_key,
            self.merge_sort_key,
            self.selection_sort_key
        ]
        self.data_structures_info = {
            self.singleLinkedList_key : {
                self.command_key : self.run_list_command,
                self.structure_key : "SingleLinkedList",
                self.file_data_structure_key : "singleLinkedList"
            },
            self.doubleLinkedList_key : {
                self.command_key : self.run_list_command,
                self.structure_key : "DoubleLinkedList",
                self.file_data_structure_key : "doubleLinkedList"
            },
            self.stack_key : {
                self.command_key : self.run_depending_to_list_command,
                self.structure_key : "Stack",
                self.file_data_structure_key : "stack"
            },
            self.queue_key : {
                self.command_key : self.run_depending_to_list_command,
                self.structure_key : "Queue",
                self.file_data_structure_key : "queue"
            }
        }
        self.sorting_algorithms_info = {
            self.quick_sort_key : {
                self.command_key : self.run_sorting_algorithm_command,
                self.sorting_key : "QuickSort"
            },
            self.bubble_sort_key : {
                self.command_key : self.run_sorting_algorithm_command,
                self.sorting_key : "BubbleSort"
            },
            self.insertion_sort_key : {
                self.command_key : self.run_sorting_algorithm_command,
                self.sorting_key : "InsertionSort"
            },
            self.merge_sort_key : {
                self.command_key : self.run_sorting_algorithm_command,
                self.sorting_key : "MergeSort"
            },
            self.selection_sort_key : {
                self.command_key : self.run_sorting_algorithm_command,
                self.sorting_key : "SelectionSort"
            }
        }
        # the following are helpers messages for the arguments parser
        self.helpers = {
            self.structure_key: (
                """A type of data structure to run the automation against (comma-delimited):"""
                """\n\tsingleLinkedList"""
                """\n\tdoubleLinkedList"""
                """\n\tstack"""
                """\n\tqueue"""
                """\n\tall"""
                """\n\t(Default=all)"""),
            self.sorting_key : (
                """A type of sorting algorithm to run the automation against (comma-delimited):"""
                """\n\tquickSort"""
                """\n\tbubbleSort"""
                """\n\tinsertionSort"""
                """\n\tmergeSort"""
                """\n\tselectionSort"""
                """\n\tall"""
                """\n\t(Default=None)""")
        }
        # the following are choices for the arguments parser
        self.choices = {
            self.structure_key: [
                self.singleLinkedList_key,
                self.doubleLinkedList_key,
                self.stack_key,
                self.queue_key,
                self.all_key
            ],
            self.sorting_key: [
                self.quick_sort_key,
                self.bubble_sort_key,
                self.insertion_sort_key,
                self.merge_sort_key,
                self.selection_sort_key,
                self.all_key
            ]
        }