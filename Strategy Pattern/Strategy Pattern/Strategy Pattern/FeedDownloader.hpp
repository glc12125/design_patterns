//
//  FeedDownloader.hpp
//  Strategy Pattern
//
//  Created by Liangchuan Gu on 12/12/2015.
//  Copyright © 2015 Lee Inc. All rights reserved.
//

#ifndef FeedDownloader_hpp
#define FeedDownloader_hpp

#include <string>

namespace Li{

class FeedDownloader{

public:
    FeedDownloader(const std::string & externalRetrievalId);
    FeedDownloader & operator=(const FeedDownloader& other);
    FeedDownloader(const FeedDownloader& other);
    
    virtual int retrieveFileList() = 0;
    
protected:
    std::string d_externalRetrievalId;
};
    
} // End of namespace Li

#endif /* FeedDownloader_hpp */
