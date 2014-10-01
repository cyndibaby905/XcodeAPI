

#import <Foundation/Foundation.h>

@class NSMutableDictionary;

@interface IDETestSchemeBaselineRecord : NSObject
{
    NSMutableDictionary *_infoDict;
    NSMutableDictionary *_bundleBaselinesByTestBundleUUIDDict;
}

+ (id)_bundleBaselineRecordFilePathInSchemeBaselineWithFilePath:(id)arg1 withTestBundleName:(id)arg2 error:(id *)arg3;
- (void)unionWithSchemeBaselineRecord:(id)arg1;
- (void)setBundleBaselineRecord:(id)arg1 forTestBundleName:(id)arg2;
- (id)bundleBaselineRecordForTestBundleName:(id)arg1;
- (id)testBundleNames;
- (BOOL)writeToFilePath:(id)arg1 workspace:(id)arg2 error:(id *)arg3;
- (id)initWithFilePath:(id)arg1 error:(id *)arg2;
- (id)init;

@end

