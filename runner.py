"""
This is the main runner script for "Group API automation" tests' execution.
"""

import os

from runner_utils.options import parse_arguments
from runner_utils.util import Utils

UTILS = Utils()


def run_passed_data_structure(data_structure):
    print(UTILS.log_for_data_structure_test_start.format(
        data_structure=data_structure))

    data_structure_info = UTILS.data_structures_info[data_structure]
    structure_key = data_structure_info[UTILS.structure_key]
    file_data_structure_key = data_structure_info[UTILS.file_data_structure_key]
    command = data_structure_info[UTILS.command_key].format(
        data_structure=structure_key,
        file_data_structure=file_data_structure_key)
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


def run_passed_sorting_algorithm(algorithm):
    print(UTILS.log_for_algorithm_test_start.format(algorithm=algorithm))

    sorting_algorithm_info = UTILS.sorting_algorithms_info[algorithm]
    algorithm = sorting_algorithm_info[UTILS.sorting_key]
    command = sorting_algorithm_info[UTILS.command_key].format(
        algorithm=algorithm)
    os.system(command)


def run_sorting_algorithm(sorting_algorithm):
    if sorting_algorithm == UTILS.selection_sort_key:
        run_passed_sorting_algorithm(sorting_algorithm)
    elif sorting_algorithm == UTILS.insertion_sort_key:
        run_passed_sorting_algorithm(sorting_algorithm)
    elif sorting_algorithm == UTILS.bubble_sort_key:
        run_passed_sorting_algorithm(sorting_algorithm)
    elif sorting_algorithm == UTILS.merge_sort_key:
        run_passed_sorting_algorithm(sorting_algorithm)
    elif sorting_algorithm == UTILS.quick_sort_key:
        run_passed_sorting_algorithm(sorting_algorithm)
    elif sorting_algorithm == UTILS.all_key:
        for temprory_sorting_algorithm in UTILS.sorting_algorithms:
            run_passed_sorting_algorithm(temprory_sorting_algorithm)


def run_passed_searching_algorithm(algorithm):
    print(UTILS.log_for_algorithm_test_start.format(algorithm=algorithm))

    searching_algorithm_info = UTILS.searching_algorithms_info[algorithm]
    algorithm = searching_algorithm_info[UTILS.searching_key]
    command = searching_algorithm_info[UTILS.command_key].format(
        algorithm=algorithm)
    os.system(command)


def run_searching_algorithm(searching_algorithm):
    if searching_algorithm == UTILS.linear_search_key:
        run_passed_searching_algorithm(searching_algorithm)
    elif searching_algorithm == UTILS.jump_search_key:
        run_passed_searching_algorithm(searching_algorithm)
    elif searching_algorithm == UTILS.binary_search_key:
        run_passed_searching_algorithm(searching_algorithm)
    elif searching_algorithm == UTILS.ternary_search_key:
        run_passed_searching_algorithm(searching_algorithm)
    elif searching_algorithm == UTILS.interpolation_search_key:
        run_passed_searching_algorithm(searching_algorithm)
    elif searching_algorithm == UTILS.all_key:
        for temprory_searching_algorithm in UTILS.searching_algorithms:
            run_passed_searching_algorithm(temprory_searching_algorithm)


def main():
    args = parse_arguments().__dict__

    run_data_structure(args[UTILS.structure_key])
    run_sorting_algorithm(args[UTILS.sorting_key])
    run_searching_algorithm(args[UTILS.searching_key])


if __name__ == "__main__":
    main()
