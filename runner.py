"""
This is the main runner script for "Group API automation" tests' execution.
"""

import os

from runner_utils.options import parse_arguments
from runner_utils.util import Utils

UTILS = Utils()


def run_passed_data_structure(data_structure):
    print(UTILS.log_for_test_start.format(data_structure=data_structure))

    data_structure_info = UTILS.data_structures_info[data_structure]
    structure_key = data_structure_info[UTILS.structure_key]
    file_data_structure_key = data_structure_info[UTILS.file_data_structure_key]
    command = data_structure_info[UTILS.command_key].format(data_structure=structure_key,file_data_structure=file_data_structure_key)
    os.system(command)



def run_data_structure(data_structure):
    if data_structure == UTILS.singleLinkedList_key:
        run_passed_data_structure(data_structure)
    elif data_structure == UTILS.doubleLinkedList_key:
        run_passed_data_structure(data_structure)
    elif data_structure == UTILS.stack_key:
        run_passed_data_structure(data_structure)
    elif data_structure == UTILS.queue_key:
        run_passed_data_structure(data_structure)
    elif data_structure == UTILS.all_key:
        for temprory_data_structure in UTILS.data_structures:
            run_passed_data_structure(temprory_data_structure)

def main():
    args = parse_arguments().__dict__

    run_data_structure(args[UTILS.structure_key])
    

if __name__ == "__main__":
    main()