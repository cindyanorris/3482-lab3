
class Ngrams 
{
   private:
      int ngramSz;
      void insertNgram(std::string s);
      void insertCount();
   public:
      int maxCount;
      Ngrams(int ngramSz, WordList & wl);
      ~Ngrams();
      void printIncreasing();
      void printDecreasing();
};

