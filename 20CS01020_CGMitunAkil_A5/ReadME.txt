For Each question follow below instructions
1. (INPUT) in text-files directory
    1. input.tx -> write your string
2. (TOKENISE) in lex folder
    execute flex and compile c file for
        1. grammar-tokenizer.l
        2. input-tokeniser.l 
3. (PARSING) in cpp file 
    compile and execute below files in order
        1. remove-left-recursion.cpp
        2. left-factored-grammar.cpp
        3. first-follow-computation.cpp
        4. predictive-parsing-table.cpp
        5. parsing-input.cpp
4. (OUTPUT) check result in output.txt 
