#ifndef SOCIALMEDIAACCOUNT_H
#define SOCIALMEDIAACCOUNT_H

template<class T>
class SocialMediaAccount
{
    public:
        SocialMediaAccount();
        SocialMediaAccount(bool privateCheck, T hndlr, int followerCnt, int followedCnt);
        bool getPriv()const;
        void displayFollowers();
        void displayFollowed();
        void addFollower (T user);
        void addFollower (T user);

    private:
        T handler;//owner
        T followers;//[int maxFollowers];
        T followed;//[int maxFollowed];
        int followerCount; //number of followers.
        int followedCount; //number of following.
        bool privacy;//Determines whether account is private or not.
};

const int maxFollowers = 10;
const int maxFollowed = 10;

#endif // SOCIALMEDIAACCOUNT_H
