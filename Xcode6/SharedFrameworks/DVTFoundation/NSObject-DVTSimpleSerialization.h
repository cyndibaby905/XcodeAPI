

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTSimpleSerialization-Protocol.h>

@interface NSObject (DVTSimpleSerialization) <DVTSimpleSerialization>
- (void)dvt_writeToSerializer:(id)arg1;
- (id)dvt_initFromDeserializer:(id)arg1;
@end

