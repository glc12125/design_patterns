//
//  main.cpp
//  Strategy Pattern
//
//  Created by Liangchuan Gu on 12/12/2015.
//  Copyright © 2015 Lee Inc. All rights reserved.
//

#include <iostream>
#include "EreDownloader.hpp"
#include "IndexDownloader.hpp"
#include "DownloaderApp.hpp"

using namespace Li;

namespace {
    static const std::string S_EXTERNAL_RETRIEVAL_ID("Strategy Pattern");
}

int main(int argc, const char * argv[]) {
    
    std::cout << "Starting the demo for Strategy Pattern." << std::endl;

    IndexDownloader* indexDownloader = new IndexDownloader(S_EXTERNAL_RETRIEVAL_ID);
    EreDownloader* ereDownloader = new EreDownloader(S_EXTERNAL_RETRIEVAL_ID);
    
    DownloaderApp app(indexDownloader);
    app.downloadFeedList();
    
    app.resetDownloader(ereDownloader);
    app.downloadFeedList();
    
    std::cout << "Finished the demo for Strategy Pattern." << std::endl;
    
    delete ereDownloader;
    delete indexDownloader;
    return 0;
}
