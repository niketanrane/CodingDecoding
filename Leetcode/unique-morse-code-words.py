__author__ = "niketanrane"

class Solution(object):
    def uniqueMorseRepresentations(self, words):
        """
        :type words: List[str]
        :rtype: int
        """
        morse = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--",
                 "-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
        start = ord('a')
        finalSet = set()
        for word in words:
            morseConvert = ""
            for ch in word:
                morseConvert += morse[ord(ch) - start]
            finalSet.add(morseConvert)
         
        return len(finalSet)
                
                
        
        