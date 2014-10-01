

#import <Foundation/Foundation.h>

@class DVTFileDataType, DVTFilePath, IDEScheme, NSError, NSString;

@interface IDERunnable : NSObject
{
    DVTFileDataType *_dataType;
    NSError *_dataTypeDetectionError;
    IDEScheme *_scheme;
    NSString *_bundleIdentifier;
    DVTFilePath *_remotePath;
}

@property(readonly, copy) DVTFilePath *remotePath; // @synthesize remotePath=_remotePath;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain) IDEScheme *scheme; // @synthesize scheme=_scheme;
- (int)runnableType;
- (void)resolveBuildableFromImport;
@property(readonly) BOOL hasRunnablePath;
@property(readonly) id <IDEBuildableProduct> buildableProduct;
- (id)runnableUTIType:(id *)arg1;
- (id)pathToRunnableForBuildParameters:(id)arg1;
@property(readonly, copy) NSString *toolTip;
@property(readonly, copy) NSString *displayName;

@end

