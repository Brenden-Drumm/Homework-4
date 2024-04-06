#include "Twitter.h"

Twitter::Twitter():SocialMediaAccount(){}
int Twitter::getRT()const{return retweetCount;}
void Twitter::setRT(int RT){retweetCount = RT;}

void Twitter::RT(){
    retweetCount++;
}
