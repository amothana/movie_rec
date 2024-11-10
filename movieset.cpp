#include "csvstream.hpp"

#include <array>
#include <map>
#include "movie.hpp"

using namespace std;

class MovieSet{
    private:
    static const int MAX_SIZE = 5050;
    std::array<unique_ptr<Movie>, MAX_SIZE> movies;

    public:
    
    MovieSet();

    void load_data(csvstream &csvin){

        map<string, string> row;
        int index = 0;
        
        cout << " Loading Data..." << endl;

        while(csvin >> row){
            movies[index]->set_index(stoi(row["index"]));
            movies[index]->set_director(row["director_name"]);
            movies[index]->set_duration(stoi(row["duration"]));
            movies[index]->set_genre(row["genres"]);
            movies[index]->set_actor1(row["actor_1_name"]);
            movies[index]->set_actor2(row["actor_2_name"]);
            movies[index]->set_actor3(row["actor_3_name"]);
            movies[index]->set_title(row["movie_title"]);
            movies[index]->set_num_votes(stoi(row["num_voted_users"]));
            movies[index]->set_link(row["movie_imdb_link"]);
            movies[index]->set_num_reviews(stoi(row["num_user_for_reviews"]));
            movies[index]->set_language(row["language"]);
            movies[index]->set_country(row["country"]);
            movies[index]->set_year(stof(row["title_year"]));
            movies[index]->set_score(stof(row["imdb_score"]));
        }

        cout << " Data Loading Ending..."
    }

    void print_data(){


        for(Movie *i = movies.begin(); *i != movies.end(); i++){

        }
    }

    void train(){}
           
    
}


