

#import <Foundation/Foundation.h>

@class NSMutableDictionary, NSString;

@interface IDEDistributionLogging : NSObject
{
    NSMutableDictionary *_nameToAspect;
    NSString *_path;
}

@property(readonly, copy) NSString *path; // @synthesize path=_path;
- (id)logAspectWithName:(id)arg1 wantsDistinctFilesPerLogLevel:(BOOL)arg2;
- (BOOL)_createLoggingBundleAtPath:(id)arg1;
- (id)_loggingBundlePathForArchiveNamed:(id)arg1;
- (id)initWithArchiveName:(id)arg1;
- (id)init;

@end

