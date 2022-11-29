from typing import Dict
import srcmlcpp
from srcmlcpp.cpp_types import *

options = srcmlcpp.SrcmlcppOptions()
cpp_unit = srcmlcpp.code_to_cpp_unit(options, filename="imspinner.cpp")
print("a")


replacements: Dict[int, str] = {}

for cpp_element in cpp_unit.all_cpp_elements_recursive():
    if isinstance(cpp_element, CppFunction):
        fn = cpp_element
        # print(fn.function_name)
        if fn.function_name.startswith("Spinner"):
            for param in cpp_element.parameter_list.parameters:
                param.decl.initial_value_code = ""

        line_number = fn.start().line
        signature = fn._str_signature()
        # print(f"{line_number=} {signature}")

        replacements[line_number] = "    " + signature


with open("imspinner.cpp", "r") as f:
    code = f.read()
    code_lines = code.split("\n")

    for line_number, replacement in replacements.items():
        code_lines[line_number - 1] = replacement

    code_patched = "\n".join(code_lines)
    print(code_patched)

