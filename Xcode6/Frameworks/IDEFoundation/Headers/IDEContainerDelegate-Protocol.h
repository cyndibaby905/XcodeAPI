

#import <Foundation/Foundation.h>

@class DVTFilePath, IDEContainer;

@protocol IDEContainerDelegate <NSObject>

@optional
- (void)_container:(IDEContainer *)arg1 didChangeFromFilePath:(DVTFilePath *)arg2 toFilePath:(DVTFilePath *)arg3;
@end

