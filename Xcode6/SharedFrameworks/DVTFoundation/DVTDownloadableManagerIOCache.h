

#import <Foundation/Foundation.h>

@class DVTDispatchLock, NSFileManager, NSMutableDictionary;

@interface DVTDownloadableManagerIOCache : NSObject
{
    DVTDispatchLock *_lock;
    NSFileManager *_fileManager;
    NSMutableDictionary *_fileExistsCache;
    NSMutableDictionary *_shasumCache;
    NSMutableDictionary *_packageVersionCache;
}

+ (id)sharedCache;
- (id)packageVersionOfIdentifer:(id)arg1 atInstallPrefix:(id)arg2;
- (id)shasumOfFileAtPath:(id)arg1;
- (BOOL)fileExistsAtPath:(id)arg1;
- (id)_objectForKey:(id)arg1 fromCache:(id)arg2 orCreate:(CDUnknownBlockType)arg3;
- (void)clear;
- (id)init;

@end

