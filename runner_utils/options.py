"""
This module is intended to parse given command line arguments.
"""

import argparse

from runner_utils.util import Utils

UTILS = Utils()


def parse_arguments():
    """
    This method parses arguments passed from command line.

    This method parses arguments passed from command line.
    NOTE: arguments priorities are the following:
      --data_structure=all
    """

    formatter = argparse.RawTextHelpFormatter
    desc = "Parse arguments for automation testing execution."
    parser = argparse.ArgumentParser(description=desc,
                                     formatter_class=formatter)

    platform_group = parser.add_argument_group("Platform arguments keeper")
    platform_group.add_argument("--{}".format(UTILS.structure_key),
                                "-d_s",
                                type=str,
                                default="all",
                                choices=UTILS.choices[UTILS.structure_key],
                                help=UTILS.helpers[UTILS.structure_key],
                                metavar='')

    parsed_arguments = parser.parse_args()

    return parsed_arguments