#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)  
    {
        title = s;
        rating = r;
    }
    virtual void display(){}
};

class CWHvideo : public CWH
{
    float videolength;

public:
    CWHvideo(string s, float r, float vl) : CWH(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings :" << rating << " out of 5 stars" << endl;
        cout << "Length of this video is: " << videolength << " minutes" << endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings of this text tutorial :" << rating << " out of 5 stars" << endl;
        cout << "Number of words in this tutorial is: " << words << " words" << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // For code with harry video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHvideo djVideo(title, rating, vlen);
    // djVideo.display();


   // For code with harry Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djtext(title, rating, words);
    


    return 0;
}