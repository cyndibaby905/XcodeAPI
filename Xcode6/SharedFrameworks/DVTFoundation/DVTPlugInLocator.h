

#import <Foundation/Foundation.h>

@class NSFileManager;

@interface DVTPlugInLocator : NSObject
{
    NSFileManager *_fileManager;
}

- (BOOL)_checkCanUsePlugInAtFilePath:(id)arg1 bundle:(id *)arg2 plugInPlist:(id *)arg3 error:(id *)arg4;
- (BOOL)_checkCanUsePlugInAtDirectoryPath:(id)arg1 bundle:(id *)arg2 plugInPlist:(id *)arg3 error:(id *)arg4;

+ (void)initialize;
- (BOOL)canUsePlugInAtPath:(id)arg1 bundle:(id *)arg2 plugInPlist:(id *)arg3 error:(id *)arg4;
- (id)propertyListAtURL:(id)arg1 error:(id *)arg2;
- (void)plugInManagerDidScanForPlugIns:(id)arg1;
- (void)plugInManagerWillScanForPlugIns:(id)arg1;
- (id)init;

@end

