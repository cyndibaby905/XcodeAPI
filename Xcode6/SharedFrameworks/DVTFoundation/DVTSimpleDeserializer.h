

#import <Foundation/Foundation.h>

@class DVTByteBuffer, NSData, NSError;

@interface DVTSimpleDeserializer : NSObject
{
    NSData *_inputData;
    DVTByteBuffer *_buffer;
    NSError *_error;
}

- (id)error;
- (id)decodeObjectList;
- (id)decodeObject;
- (id)decodeString;
- (double)decodeDouble;
- (float)decodeFloat;
- (unsigned long long)decodeInteger;
- (id)init;
- (id)initWithData:(id)arg1;

@end

