grammar Newick;

prog            : tree EOF ;

tree            : rootleaf ';' | rootinternal ';' ;
rootleaf        : name | '(' branch ')' name ;
rootinternal    : '(' branch ',' branchset ')' name ;

subtree         : leaf | internal ;
leaf            : name; 
internal        : '(' branchset ')' name ;

branchset       : branch | branch ',' branchset ;
branch          : subtree length ; 


name            : STRING? ;
length          : (':' FLOAT)? ;



STRING          : [a-zA-Z0-9]+ ;
FLOAT           : [0-9]+ ('.' [0-9]+)? ;
WHITESPACE      : [\r\n\t]+ -> skip ;