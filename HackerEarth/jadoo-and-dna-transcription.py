# -*- coding: utf-8 -*-
"""
Created on Tue Aug  7 18:58:33 2018

@author: niketanrane
"""

dnaToRna = {'A':'U', 'T':'A', 'G':'C', 'C':'G', 'a':'u', 't':'a', 'g':'c', 'c':'g'}
dna = input()
#dna = dna.upper()
x = ''
flag = True
try:
    for nucleotide in dna:
        x += dnaToRna[nucleotide]
    print(x)
except:
    print("Invalid Input")