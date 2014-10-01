

#import <Foundation/Foundation.h>

@interface NSInputStream (DVTFoundationClassAdditions)
- (long long)dvt_readSignedLEB128Integer;
- (unsigned long long)dvt_readUnsignedLEB128Integer;
@end

