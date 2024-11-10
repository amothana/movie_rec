// Movie.cpp
#include "movie.hpp"
#include <iostream>

// A class to represent the list of movies pulled from the data.csv files
// https://www.kaggle.com/datasets/rounakbanik/the-movies-dataset?resource=download

// EFFECTS: Initializes this to a an empty movie with
// all numbers set to zero
Movie::Movie() : index(0), duration(0.0), num_voted_users(0), 
        num_user_for_reviews(0), year(0), score(0), watched(false), rating(0){};


    // int index;
    // std::string director;
    // double duration;
    // std::string actor1;
    // std::string actor2;
    // std::string genre;
    // std::string title;
    // int num_voted_users;
    // int num_user_for_reviews;
    // std::string movie_imdb_link;
    // std::string language;
    // std::string country;
    // double year;
    // double score;

    // // Personal variables, these would be redeclared after
    // // all the variables above are stored;
    // bool watched;
    // double rating;

// EFFECTS: Initializes this to a movie with the data
// from the given input stream
Movie::Movie(std::istream &is){

}

// EFFECTS: Returns the index of the movie (of the csv file)
int Movie::get_index() const{return index;}

// EFFECTS: Returns the duration of the movie (of the csv file)
int Movie::get_duration() const{return duration;}

// EFFECTS: Returns the director of the movie
std::string Movie::get_director() const{return director;}

// EFFECTS: Returns the first main actor of the movie
std::string Movie::get_actor1() const{return actor1;}

// EFFECTS: Returns the second main actor of the movie
std::string Movie::get_actor2() const{return actor2;}

// EFFECTS: Returns the second main actor of the movie
std::string Movie::get_actor3() const{return actor2;}

// EFFECTS: Returns the genre of the movie
std::string Movie::get_genre() const{
    return ""; /// FIX THIS 
}

// EFFECTS: Returns the title of the movie
std::string Movie::get_title() const{return title;}

// EFFECTS: Returns the number of votes of the movie
int Movie::get_num_votes() const{return num_voted_users;}

// EFFECTS: Returns the number of review of the movie
int Movie::get_num_reviews() const{return num_user_for_reviews;}

// EFFECTS: Returns the link of the movie (IMDB)
std::string Movie::get_link() const{return movie_imdb_link;}

// EFFECTS: Returns the language of the movie
std::string Movie::get_language() const{return language;}

// EFFECTS: Returns the country of origin of the movie
std::string Movie::get_country() const{return country;}

// EFFECTS: Returns the year of release of the movie
double Movie::get_year() const{return year;}

// EFFECTS: Returns the score of the movie
double Movie::get_score() const{return score;}


// EFFECTS: Sets the index of the movie (of the csv file)
void Movie::set_index(int num){
    this->index = num;
}

// EFFECTS: Returns the duration of the movie (of the csv file)
void Movie::set_duration(int num){
    this->duration = num;
}

// EFFECTS: Sets the director of the movie
void Movie::set_director(std::string str){
    this->director = str;
}

// EFFECTS: Sets the first main actor of the movie
void Movie::set_actor1(std::string str){
    this->actor1 = str;
}

// EFFECTS: Sets the second main actor of the movie
void Movie::set_actor2(std::string str){
    this->actor2 = str;
}

// EFFECTS: Sets the third main actor of the movie
void Movie::set_actor3(std::string str){
    this->actor3 = str;
}

// EFFECTS: Returns the genre of the movie
void Movie::set_genre(std::string str){
    // This is more difficult to do
}

// EFFECTS: Sets the title of the movie
void Movie::set_title(std::string str){
    this->title = str;
}

// EFFECTS: Sets the number of votes of the movie
void Movie::set_num_votes(int num){
    this->num_voted_users = num;
}

    // EFFECTS: Sets the number of review of the movie
void Movie::set_num_reviews(int num){
    this->num_user_for_reviews = num;
}

// EFFECTS: Sets the link of the movie (IMDB)
void Movie::set_link(std::string str){
    this->movie_imdb_link = str;
}

// EFFECTS: Sets the language of the movie
void Movie::set_language(std::string str){
    this->language = str;
}

// EFFECTS: Sets the country of origin of the movie
void Movie::set_country(std::string str){
    this->country = str;
}

// EFFECTS: Sets the year of release of the movie
void Movie::set_year(double num){
    this->year = num;
}

// EFFECTS: Sets the score of the movie
void Movie::set_score(double num){
    this->score = num;
}
    