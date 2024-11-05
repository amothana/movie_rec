#include "csvstream.hpp"

#include <array>
#include "movie.hpp"

using namespace std;

class MovieSet{
    private:
    int MAX_SIZE = 5050;
    
    public:
    std::array<unique_ptr<Movie>, MAX_SIZE> movies;

    void load_data(csvstream &csvin){

        while(csvin >> )
    }

    void train(){}
           
    
}