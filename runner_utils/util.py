""" This module is intended to keep utility functions. """

import os
from datetime import datetime
from xml.etree import ElementTree

from xml.dom import minidom


class Utils:
    """ This is the main util class. """

    def __init__(self):
        self.structure_key = "data_structure"
        self.file_data_structure_key = "file_data_structure"
        self.singleLinkedList_key = "singleLinkedList"
        self.doubleLinkedList_key = "doubleLinkedList"
        self.command_key = "command"
        self.stack_key = "stack"
        self.queue_key = "queue"
        self.all_key = "all"

        self.log_for_test_start = (
                """\n\n==========>"""
                """\t{data_structure}\t"""
                """<==========\n\n""")
        self.run_list_command = "g++ ./DataStructures/{data_structure}/main.cpp ./DataStructures/{data_structure}/{file_data_structure}.cpp -o ./DataStructures/{data_structure}/main.out & ./DataStructures/{data_structure}/main.out"
        self.run_depending_to_list_command = "g++ ./DataStructures/{data_structure}/{file_data_structure}.cpp ./DataStructures/DoubleLinkedList/doubleLinkedList.cpp ./DataStructures/{data_structure}/main.cpp -o ./DataStructures/{data_structure}/main.out & ./DataStructures/{data_structure}/main.out"

        self.data_structures = [
            self.singleLinkedList_key,
            self.doubleLinkedList_key,
            self.stack_key,
            self.queue_key
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
        # the following are helpers messages for the arguments parser
        self.helpers = {
            self.structure_key: (
                """A type of structure to run the automation against (comma-delimited):"""
                """\n\tsingleLinkedList"""
                """\n\tdoubleLinkedList"""
                """\n\tstack"""
                """\n\tqueue"""
                """\n\tall"""
                """\n\t(Default=all)"""),
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
        }