

#import <DVTFoundation/DVTSimpleDeserializer.h>

@class NSMutableArray;

@interface DVTSimplePlainTextDeserializer : DVTSimpleDeserializer
{
    NSMutableArray *_knownClasses;
}

- (id)decodeObjectList;
- (id)decodeObject;
- (id)decodeString;
- (double)decodeDouble;
- (float)decodeFloat;
- (void)decodeHexBytes:(void *)arg1 length:(unsigned long long)arg2 magic:(BOOL)arg3;
- (unsigned long long)decodeInteger;
- (id)init;
- (id)initWithData:(id)arg1;

@end

