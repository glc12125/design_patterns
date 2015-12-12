//
//  EreDownloader.cpp
//  Strategy Pattern
//
//  Created by Liangchuan Gu on 12/12/2015.
//  Copyright © 2015 Lee Inc. All rights reserved.
//

#include "EreDownloader.hpp"
#include <iostream>

namespace Li{

    EreDownloader::EreDownloader(const std::string& externalRetrievalId) : FeedDownloader(externalRetrievalId){
    
    }
    
    int
    EreDownloader::retrieveFileList(){
        std::cout << "EreDownloader::retrieveFileList: " << d_externalRetrievalId
                  << std::endl;
        
        return 0;
    }
    
    EreDownloader::EreDownloader(const EreDownloader& other) : FeedDownloader(other){
    
    }
    
    EreDownloader&
    EreDownloader::operator=(const EreDownloader& other) {
        FeedDownloader::operator=(other);
        
        return *this;
    }
    
} // End of namespace Li