

#import <Foundation/Foundation.h>

@class DVTByteBuffer, NSError;

@interface DVTSimpleSerializer : NSObject
{
    DVTByteBuffer *_buffer;
    NSError *_error;
}

- (id)data;
- (id)error;
- (void)encodeObjectList:(id)arg1;
- (void)encodeObject:(id)arg1;
- (void)encodeString:(id)arg1;
- (void)encodeDouble:(double)arg1;
- (void)encodeFloat:(float)arg1;
- (void)encodeInteger:(unsigned long long)arg1;
- (id)init;

@end

