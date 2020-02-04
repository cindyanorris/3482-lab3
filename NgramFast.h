//You will need to add one or more typedefs and
//declarations for whatever structure you use to hold
//your ngrams.
class Ngrams 
{
   private:
      int ngramSz;
      void insertNgram(std::string s);
   public:
      Ngrams(int ngramSz, WordList & wl);
      ~Ngrams();
      void printIncreasing();
      void printDecreasing();
};

