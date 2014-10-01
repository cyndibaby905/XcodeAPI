

#import <Foundation/Foundation.h>

#import <Foundation/Foundation.h>

@class DVTFilePath;

@interface IDEArchivePathsSnapshot : NSObject <NSCopying>
{
    DVTFilePath *_archivePath;
    DVTFilePath *_archiveProductsPath;
    DVTFilePath *_archiveDSYMsPath;
}

@property(retain) DVTFilePath *archiveDSYMsPath; // @synthesize archiveDSYMsPath=_archiveDSYMsPath;
@property(retain) DVTFilePath *archiveProductsPath; // @synthesize archiveProductsPath=_archiveProductsPath;
@property(retain) DVTFilePath *archivePath; // @synthesize archivePath=_archivePath;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

