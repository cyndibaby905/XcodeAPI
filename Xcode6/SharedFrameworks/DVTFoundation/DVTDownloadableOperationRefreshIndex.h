

#import <DVTFoundation/DVTDownloadableOperation.h>

@class DVTDownloadableIndex, NSURL;

@interface DVTDownloadableOperationRefreshIndex : DVTDownloadableOperation
{
    NSURL *_url;
    DVTDownloadableIndex *_refreshedIndex;
}

@property(retain) DVTDownloadableIndex *refreshedIndex; // @synthesize refreshedIndex=_refreshedIndex;
- (void)downloadableOperationMain;
- (id)initWithURL:(id)arg1;

@end

