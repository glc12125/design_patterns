//
//  DownloaderApp.cpp
//  Strategy Pattern
//
//  Created by Liangchuan Gu on 12/12/2015.
//  Copyright © 2015 Lee Inc. All rights reserved.
//

#include "DownloaderApp.hpp"
#include "FeedDownloader.hpp"

namespace Li {

    DownloaderApp::DownloaderApp(FeedDownloader* downloaderPtr) {

        if(downloaderPtr) {
           d_feedDownloader.reset(downloaderPtr);
        } else {
            std::cerr << "FeedDownloader pointer is null" << std::endl;
        }

    }
    
    int
    DownloaderApp::resetDownloader(FeedDownloader* downloaderPtr) {
        if(downloaderPtr) {
            d_feedDownloader.reset(downloaderPtr);
            
            return 0;
        } else {
            std::cerr << "FeedDownloader pointer is null" << std::endl;
            
            return -1;
        }
    }
    
    int
    DownloaderApp::downloadFeedList() {
        return d_feedDownloader->retrieveFileList();
    }

} //