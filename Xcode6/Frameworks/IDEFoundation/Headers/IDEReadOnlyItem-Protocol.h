

#import <Foundation/Foundation.h>

@class NSURL;

@protocol IDEReadOnlyItem <NSObject>
@property(readonly) NSURL *readOnlyItemURL;
@property(readonly) int readOnlyStatus;
- (BOOL)makeWritableWithError:(id *)arg1;
@end

