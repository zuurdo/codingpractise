
class Checker{
public:
    // complete this method
    static int comparator(Player a, Player b)
    {
      if(a.score < b.score)
      {
        return -1;
      }
      else if (a.score > b.score)
      {
        return 1;
      }
      else
      {
        int comp = a.name.compare(b.name);
        if(comp == 0)
        {
          return 0;
        }
        else if ( comp < 0)
        {
          return 1;
        }
        else
        {
          return -1;
        }
      }
    }
};
