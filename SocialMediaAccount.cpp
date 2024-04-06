#include "SocialMediaAccount.h"

template<class T>
SocialMediaAccount::SocialMediaAccount(bool privateCheck, T hndlr, int followerCnt, int followedCnt):
privacy(privateCheck), handler(hndlr), followerCount(followerCnt), followedCount(followedCnt){}

template<class T>
bool SocialMediaAccount::getPriv()const{return privacy;}
void SocialMediaAccount::setPriv(bool priv){privacy = priv;}

bool SocialMediaAccount::getFollowed()const{return followedCount;}
void SocialMediaAccount::setFollowed(bool followed){followedCount = followed;}

bool SocialMediaAccount::getFollowers()const{return followerCount;}
void SocialMediaAccount::setFollowers(bool follower){followerCount = follower;}

void SocialMediaAccount::displayFollowers(){}
void SocialMediaAccount::displayFollowed(){}

void addFollower (T user);
void addFollowed (T user);
