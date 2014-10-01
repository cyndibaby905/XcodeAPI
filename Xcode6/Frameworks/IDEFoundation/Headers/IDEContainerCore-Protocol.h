

#import <DVTFoundation/DVTInvalidation-Protocol.h>
#import <Foundation/Foundation.h>

@protocol IDEContainerGroupCore

@end

@class DVTExtension, DVTFileDataType, DVTFilePath, NSArray;

@protocol IDEContainerCore <NSObject, DVTInvalidation>
+ (NSArray *)containerDataFilePathsForFilePath:(DVTFilePath *)arg1;
+ (BOOL)supportsFilePersistence;
+ (DVTFileDataType *)containerFileType;
- (int)currentActivity;
- (DVTExtension *)containerExtension;
- (DVTFilePath *)filePath;
- (id <IDEContainerGroupCore>)rootGroup;
- (void)releaseContainerCore;
- (void)retainContainerCore;
- (id)initWithFilePath:(DVTFilePath *)arg1 extension:(DVTExtension *)arg2 error:(id *)arg3;
@end

