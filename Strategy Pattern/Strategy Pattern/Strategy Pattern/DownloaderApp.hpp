//
//  DownloaderApp.hpp
//  Strategy Pattern
//
//  Created by Liangchuan Gu on 12/12/2015.
//  Copyright © 2015 Lee Inc. All rights reserved.
//

#ifndef DownloaderApp_hpp
#define DownloaderApp_hpp

#include <memory>
#include <iostream>

namespace Li {

    class FeedDownloader;
    
    class DownloaderApp{
    public:

        DownloaderApp(FeedDownloader* downloaderPtr);
        int resetDownloader(FeedDownloader* downloaderPtr);
        int downloadFeedList();
    private:
        DownloaderApp& operator=(const DownloaderApp& other);
        DownloaderApp(const DownloaderApp& other);
        std::shared_ptr<FeedDownloader> d_feedDownloader;
        
    };
    
} // End of namespace Li
#endif /* DownloaderApp_hpp */
