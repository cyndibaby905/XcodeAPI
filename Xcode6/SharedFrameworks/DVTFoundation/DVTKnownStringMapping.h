

#import <Foundation/Foundation.h>

@interface DVTKnownStringMapping : NSObject <NSCopying>
{
    CDUnknownFunctionPointerType _strToIdxFunc;
    CDUnknownFunctionPointerType _idxToStrFunc;
}

+ (id)mappingWithKnownStringToIndexFunction:(CDUnknownFunctionPointerType)arg1 indexToKnownStringFunction:(CDUnknownFunctionPointerType)arg2;
- (CDUnknownFunctionPointerType)indexToStringFunction;
- (CDUnknownFunctionPointerType)stringToIndexFunction;
- (unsigned long long)numberOfKnownStrings;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithKnownStringToIndexFunction:(CDUnknownFunctionPointerType)arg1 indexToKnownStringFunction:(CDUnknownFunctionPointerType)arg2;

@end

