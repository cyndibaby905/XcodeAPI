

#import <Foundation/Foundation.h>

@interface NSMutableData (DVTFoundationClassAdditions)
- (void)dvt_appendMD5DigestOfData:(id)arg1;
- (void)dvt_appendMD5DigestOfBytes:(const void *)arg1 length:(unsigned long long)arg2;
@end

