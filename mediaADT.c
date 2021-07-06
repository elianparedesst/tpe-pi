#include "mediaADT.h"


typedef struct genre{
    char * genre;
    TMedia * series;
    TMedia * movies;
    size_t moviesCount;
    struct genre * next;
} TGenre;

typedef TGenre * TList;

typedef struct year {
    unsigned short year;
    size_t moviesCount;
    size_t seriesCount;
    TMedia * bestMovie;
    TMedia * bestSeries;
    TList genres;
} TYear;

typedef struct mediaCDT{
    TYear * years;
    size_t currentYear;
    size_t minYear;
    size_t maxYear;
    size_t dim;
    size_t size;
}mediaCDT;


mediaADT newMediaADT ( const size_t minYear )
{
    mediaADT new = calloc(1,sizeof (mediaCDT));
    new->minYear = new->maxYear = minYear;
    return new;
}


