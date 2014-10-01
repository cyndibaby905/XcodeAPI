

#import <Foundation/Foundation.h>

@interface NSMutableData (DVTNSDataStdIO)
- (struct __sFILE *)openForWriting;
- (struct __sFILE *)openForReading;
@end

