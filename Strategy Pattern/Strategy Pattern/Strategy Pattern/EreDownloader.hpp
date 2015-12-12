//
//  EreDownloader.hpp
//  Strategy Pattern
//
//  Created by Liangchuan Gu on 12/12/2015.
//  Copyright © 2015 Lee Inc. All rights reserved.
//

#ifndef EreDownloader_hpp
#define EreDownloader_hpp

#include "FeedDownloader.hpp"

namespace Li{

    class EreDownloader : public FeedDownloader
    {
    public:
        EreDownloader(const std::string& externalRetrievalId);
        EreDownloader(const EreDownloader& other);
        EreDownloader& operator=(const EreDownloader& other);
        virtual int retrieveFileList();
    };
    
} // End of namespace Li

#endif /* EreDownloader_hpp */
