//
//  IndexDownloader.cpp
//  Strategy Pattern
//
//  Created by Liangchuan Gu on 12/12/2015.
//  Copyright © 2015 Lee Inc. All rights reserved.
//

#include "IndexDownloader.hpp"
#include <iostream>

namespace Li{
    
    IndexDownloader::IndexDownloader(const std::string& externalRetrievalId) : FeedDownloader(externalRetrievalId){
        
    }
    
    int
    IndexDownloader::retrieveFileList(){
        std::cout << "IndexDownloader::retrieveFileList: " << d_externalRetrievalId
        << std::endl;
        
        return 0;
    }
    
    IndexDownloader::IndexDownloader(const IndexDownloader& other) : FeedDownloader(other){
        
    }
    
    IndexDownloader&
    IndexDownloader::operator=(const IndexDownloader& other) {
        FeedDownloader::operator=(other);
        
        return *this;
    }
    
} // End of namespace Li