/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_SRC_RULES_PARSER_TAB_H_INCLUDED
# define YY_YY_SRC_RULES_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    BEGIN_RULE = 258,
    END_RULE = 259,
    COLON = 260,
    FOR_ALL = 261,
    THERE_EXISTS = 262,
    IN = 263,
    IS = 264,
    AND = 265,
    OR = 266,
    NOT = 267,
    IMPLIES = 268,
    ALL_NODES = 269,
    LEFT_PAREN = 270,
    RIGHT_PAREN = 271,
    PRED = 272,
    SUCC = 273,
    NODE_TYPE = 274,
    EDGE_TYPE = 275,
    EDGE_SUBTYPE = 276,
    EDGE_SUBTYPE_DNF = 277,
    NODE_INPUT_EDGE_TYPE = 278,
    NODE_OUTPUT_EDGE_TYPE = 279,
    NODE_INPUT_EDGE_SUBTYPE = 280,
    NODE_OUTPUT_EDGE_SUBTYPE = 281,
    GENE = 282,
    GROUP = 283,
    COMPOUND = 284,
    PPREL = 285,
    ECREL = 286,
    GEREL = 287,
    PCREL = 288,
    ACTIVE = 289,
    INHIBIT = 290,
    EXPRESS = 291,
    REPRESS = 292,
    INDIRECT = 293,
    STATE_CHANGE = 294,
    ASSOC = 295,
    DISSOC = 296,
    MISSING_INTERACTION = 297,
    COMPONENT = 298,
    COMMA = 299,
    SEMICOLON = 300,
    EDGE = 301,
    NODE = 302,
    ACTIVATED = 303,
    INHIBITED = 304,
    OVEREXPRESSED = 305,
    REPRESSED = 306,
    DIFFER_EXPRESSED = 307,
    NOT_DIFFER_EXPRESSED = 308,
    PRESENT = 309,
    ABSENT = 310,
    VARIABLE = 311
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 27 "src/rules_parser.y" /* yacc.c:1909  */

  char* str;
  opr_t opr;
  fun_name_t fun_name;
  fun_name2_t fun_name2;
  quantifier_t quantifier;
  node_t node_type;
  edge_t edge_type;
  edge_subt edge_subtype;
  node_state_t node_state;
  node_state2_t node_state2;
  edge_state_t edge_state;
  set_nodes_t* set_nodes;
  list_edge_subtypes_t* list_edge_subtypes;
  //logical_edge_subt_t* logical_edge_subtypes;
  edge_subt_literal_t* edge_subtype_literal;
  ANDed_edgesub_literals_t* ANDed_edge_subtype_clause;
  DNF_edgesub_t* DNF_edge_subtype;
  list_antecedent_t* list_antecedent;
  logical_stmt_t* logical_stmt;
  consequent_t* consequent;
  rule_t* rule;
  list_rules_t* list_rules;

#line 136 "src/rules_parser.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_RULES_PARSER_TAB_H_INCLUDED  */
