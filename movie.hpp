// Movies.hpp
#include <string>
#include <iostream>
#include <set>

// A class to represent the list of movies pulled from the data.csv files
// https://www.kaggle.com/datasets/rounakbanik/the-movies-dataset?resource=download
class Movie {
    public:

    // EFFECTS: Initializes this to a an empty movie with
    // all numbers set to zero
    Movie();

    // EFFECTS: Initializes this to a movie with the data
    // from the given input stream
    Movie(std::istream &is);

    // EFFECTS: Returns the index of the movie (of the csv file)
    int get_index() const;

    // EFFECTS: Sets the index of the movie (of the csv file)
    void set_index(int num);

    // EFFECTS: Returns the duration of the movie (of the csv file)
    int get_duration() const;

    // EFFECTS: Sets the duration of the movie (of the csv file)
    void set_duration(int num);

    // EFFECTS: Returns the director of the movie
    std::string get_director() const;

    // EFFECTS: Sets the director of the movie
    void set_director(std::string str);

    // EFFECTS: Returns the first main actor of the movie
    std::string get_actor1() const;

    // EFFECTS: Sets the first main actor of the movie
    void set_actor1(std::string str);

    // EFFECTS: Returns the second main actor of the movie
    std::string get_actor2() const;

    // EFFECTS: Returns the second main actor of the movie
    void set_actor2(std::string str);

    // EFFECTS: Returns the third main actor of the movie
    std::string get_actor3() const;

    // EFFECTS: Returns the third main actor of the movie
    void set_actor3(std::string str);

    // EFFECTS: Returns the genre of the movie
    std::string get_genre() const;

    // EFFECTS: Returns the genre of the movie
    void set_genre(std::string str);

    // EFFECTS: Returns the title of the movie
    std::string get_title() const;

    // EFFECTS: Sets the title of the movie
    void set_title(std::string str);

    // EFFECTS: Returns the number of votes of the movie
    int get_num_votes() const;

    // EFFECTS: Sets the number of votes of the movie
    void set_num_votes(int num);

    // EFFECTS: Returns the number of review of the movie
    int get_num_reviews() const;

     // EFFECTS: Sets the number of review of the movie
    void set_num_reviews(int num);

    // EFFECTS: Returns the link of the movie (IMDB)
    std::string get_link() const;

    // EFFECTS: Sets the link of the movie (IMDB)
    void set_link(std::string str);

    // EFFECTS: Returns the language of the movie
    std::string get_language() const;

    // EFFECTS: Sets the language of the movie
    void set_language(std::string str);

    // EFFECTS: Returns the country of origin of the movie
    std::string get_country() const;

    // EFFECTS: Sets the country of origin of the movie
    void set_country(std::string str);

    // EFFECTS: Returns the year of release of the movie
    double get_year() const;

    // EFFECTS: Sets the year of release of the movie
    void set_year(double num);

    // EFFECTS: Returns the score of the movie
    double get_score() const;

    // EFFECTS: Sets the score of the movie
    void set_score(double num);
    
    

    // OPERATOR OVERLOADING


    private:
    int index;
    std::string director;
    double duration;
    std::string actor1;
    std::string actor2;
    std::string actor3;
    std::set<std::string> genre;
    std::string title;
    int num_voted_users;
    int num_user_for_reviews;
    std::string movie_imdb_link;
    std::string language;
    std::string country;
    double year;
    double score;

    // Personal variables, these would be redeclared after
    // all the variables above are stored;
    bool watched;
    double rating;

    // Perhaps store the data watched using ctime library
    
    // There is no reasonable invariants 
};