

#import <DVTFoundation/DVTOperationGroup.h>

@class DVTFilePath;

@interface IDEArchiveProcessingOperation : DVTOperationGroup
{
    DVTFilePath *outputPath;
}

@property(retain) DVTFilePath *outputPath; // @synthesize outputPath;

@end

