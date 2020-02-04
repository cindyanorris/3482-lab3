//Lots of STL header files included here.
//You shouldn't have to include any others.
#include <iostream>
#include <set>
#include <string>
#include <array>
#include <iterator>
#include <list>
#include <tuple>
#include <utility>
#include <map>
#include <unordered_map>
#include <vector>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <algorithm>
#include <functional>

#include "WordList.h"
#include "NgramSTL.h"


/*
 * Ngrams
 *
 * takes as input the size of the ngrams to be built and the list  
 * of words to build the ngrams from and builds a linked list of 
 * ngrams.
 *
 * param: int ngramSz - size of the ngram
 * param: const WordList & wl - list of the words use
 */
Ngrams::Ngrams(int ngramSz, WordList & wl)
{
   //ADD any code you need to initialize whatever structure
   //you use for your ngram

   //This code to get the next ngram will stay the same.
   this->ngramSz = ngramSz;
   wl.beginIter();
   while (!wl.endIter())
   {
      std::string ngram = wl.getNextNgram(ngramSz);
      wl.incrementIter();
      if (!ngram.empty()) insertNgram(ngram);
   }
}


/*
 * Ngrams destructor
 *
 * automatically called when Ngrams object goes out of scope
 * should delete any space dynamically allocated for the ngram
 */
Ngrams::~Ngrams()
{

}


/*
 * insertNgram
 *
 * Inserts ngram into whatever structure you choose to hold
 * your ngrams.
 *
 * param: std::string s - ngram to be inserted
 * return: none
 */
void Ngrams::insertNgram(std::string s)
{
//ADD code to insert ngram in whatever structure you choose
}

/*
 * You can ADD any other methods that you need here.
 */

/*
 * printIncreasing
 *
 * prints the list of ngrams in increasing order
 *
 */
void Ngrams::printIncreasing()
{
    std::cout << "\nIncreasing list of " << ngramSz << " word ngrams and counts\n";
    std::cout << "-------------------------------------------\n";

    //ADD code to print the ngrams in increasing order of count
}

/*
 * printIncreasing
 *
 * prints the list of ngrams in decreasing order
 *
 */
void Ngrams::printDecreasing()
{
    std::cout << "\nDecreasing list of " << ngramSz << " word ngrams and counts\n";
    std::cout << "-------------------------------------------\n";

    //ADD code to print the ngrams in increasing order of count

}
