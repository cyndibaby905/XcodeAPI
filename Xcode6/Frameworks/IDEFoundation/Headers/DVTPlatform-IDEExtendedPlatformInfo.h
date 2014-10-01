

#import <DVTFoundation/DVTPlatform.h>

@class IDEExtendedPlatformInfo;

@interface DVTPlatform (IDEExtendedPlatformInfo)
@property(readonly) IDEExtendedPlatformInfo *ide_extendedInfo;
@end

