

#import <DVTFoundation/DVTFindResult.h>

@class NSString, NSTextCheckingResult;

@interface DVTFindRegularExpressionResult : DVTFindResult <NSCoding, NSCopying>
{
    NSTextCheckingResult *_match;
    NSString *_wholeContextString;
}

@property(retain, nonatomic) NSString *wholeContextString; // @synthesize wholeContextString=_wholeContextString;
@property(retain) NSTextCheckingResult *match; // @synthesize match=_match;
- (id)stringForReplacementString:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFoundLocation:(id)arg1 withRange:(NSRange)arg2 inContext:(id)arg3 andRegexMatch:(id)arg4 foundUsingDescriptor:(id)arg5;

@end

