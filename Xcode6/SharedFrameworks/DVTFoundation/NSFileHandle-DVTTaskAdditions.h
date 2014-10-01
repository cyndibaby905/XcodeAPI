

#import <Foundation/Foundation.h>

@interface NSFileHandle (DVTTaskAdditions)
+ (id)dvt_writeOnlyFileHandleWithNullDevice:(id *)arg1;
+ (id)dvt_readOnlyFileHandleWithNullDevice:(id *)arg1;
+ (id)dvt_fileHandleWithNullDeviceInMode:(int)arg1 error:(id *)arg2;
@end

