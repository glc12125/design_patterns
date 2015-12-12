//
//  IndexDownloader.hpp
//  Strategy Pattern
//
//  Created by Liangchuan Gu on 12/12/2015.
//  Copyright © 2015 Lee Inc. All rights reserved.
//

#ifndef IndexDownloader_hpp
#define IndexDownloader_hpp

#include "FeedDownloader.hpp"

namespace Li{
    
    class IndexDownloader : public FeedDownloader
    {
    public:
        IndexDownloader(const std::string& externalRetrievalId);
        IndexDownloader(const IndexDownloader& other);
        IndexDownloader& operator=(const IndexDownloader& other);
        virtual int retrieveFileList();
    };
    
} // End of namespace Li

#endif /* IndexDownloader_hpp */
