//
//  FeedDownloader.cpp
//  Strategy Pattern
//
//  Created by Liangchuan Gu on 12/12/2015.
//  Copyright © 2015 Lee Inc. All rights reserved.
//

#include "FeedDownloader.hpp"

namespace Li{

    
FeedDownloader::FeedDownloader(const std::string & externalRetrievalId):
    d_externalRetrievalId(externalRetrievalId)
{
    
}
    
FeedDownloader &
FeedDownloader::operator=(const FeedDownloader& other) {
    if( this != &other) {
        d_externalRetrievalId = other.d_externalRetrievalId;
    }
    return *this;
}
    
FeedDownloader::FeedDownloader(const FeedDownloader& other) :
    d_externalRetrievalId(other.d_externalRetrievalId){
    
}
    
} // End of namespace Li
