In sum-it/Docs directory you'll find usefull information for implementing new functions:

- Adding new functions to OpenSum-It.txt
- OpenFormula_functions_need_to_be_implemented (in sum-it spreadsheet format)
- Exel_function_nr_by_name_for_mapping (in sum-it spreadsheet format)


I think the best way to avoid unbalanced and chaotic implementation of functions in OpenSum-It would be to stick to OpenFormula specification(1) (part of OpenDocument standard(2)) and do it step by step - from small to large group of functions.

OpenFormula is a specification of an open format for exchanging recalculated formulas between office applications, in particular, formulas in spreadsheet documents. OpenFormula defines data types, syntax, and semantics for recalculated formulas, including predefined functions and operations. OpenFormula is included in version 1.2 of the OpenDocument standard. One important aspect of OpenFormula is that it provides a predefined set of "groups"; the most important of these groups are small, medium, and large:

- The small group includes a little over 100 functions, including functions for trigonometry, database, finance, and statistics. The vast majority of spreadsheet documents are ably handled by applications that implement the "small" group. At least one PDA application (SheetToGo) has this level of capability, and wikiCalc added the functions in the small group specifically to meet the set defined by OpenFormula.

- The medium group includes all the capabilities of the small group, and adds about 100 more functions.

- The large group includes all the capabilities of the medium group, adding around 130 more functions, as well as capabilities such as complex numbers.


(1) http://docs.oasis-open.org/office/v1.2/os/OpenDocument-v1.2-os-part2.html
(2) https://en.wikipedia.org/wiki/OpenFormula


beos_zealot,
2013-11-03
