#ifndef TWITTER_H
#define TWITTER_H
#include "SocialMediaAccount.h"


class Twitter: public SocialMediaAccount
{
    public:
        Twitter();

        void RT();
    private:
        int retweetCount;
};

#endif // TWITTER_H
