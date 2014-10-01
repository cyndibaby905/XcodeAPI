

#import <Foundation/Foundation.h>

@interface NSOutputStream (DVTFoundationClassAdditions)
- (void)dvt_writeSignedLEB128Integer:(long long)arg1;
- (void)dvt_writeUnsignedLEB128Integer:(unsigned long long)arg1;
@end

