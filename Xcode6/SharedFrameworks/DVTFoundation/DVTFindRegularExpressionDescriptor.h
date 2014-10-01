

#import <DVTFoundation/DVTFindDescriptor.h>

@class NSRegularExpression;

@interface DVTFindRegularExpressionDescriptor : DVTFindDescriptor
{
    NSRegularExpression *_regularExpression;
}

@property(readonly) NSRegularExpression *regularExpression; // @synthesize regularExpression=_regularExpression;
- (id)firstMatchingResultInString:(id)arg1 backwards:(BOOL)arg2 inRange:(NSRange)arg3 withWordFindingBlock:(CDUnknownBlockType)arg4 docLocationCreationBlock:(CDUnknownBlockType)arg5;
- (BOOL)caseSensitive;
- (id)displayString;
- (BOOL)isEqual:(id)other;
- (NSUInteger)hash;
- (NSString *)description;
- (id)initWithRegularExpression:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

