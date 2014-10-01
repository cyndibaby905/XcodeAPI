

#import <Foundation/Foundation.h>

@class NSString;

@interface DVTRegularExpression : NSObject <NSCopying>
{
    NSString *_expressionString;
    struct URegularExpression *_compiledExpression;
    int _options;
}

+ (struct URegularExpression *)testAndCompileExpressionString:(id)arg1 options:(int)arg2 error:(id *)arg3;
+ (id)descriptionForParseError:(struct UParseError *)arg1;
+ (void)initialize;
@property int options; // @synthesize options=_options;
@property struct URegularExpression *compiledExpression; // @synthesize compiledExpression=_compiledExpression;
@property(copy) NSString *expressionString; // @synthesize expressionString=_expressionString;
- (NSString *)description;
- (BOOL)enumerateMatchesInString:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (BOOL)enumerateMatchesInString:(id)arg1 searchRange:(NSRange)arg2 error:(id *)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)matchString:(id)arg1 error:(id *)arg2;
- (id)matchString:(id)arg1 searchRange:(NSRange)arg2 error:(id *)arg3;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)other;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
@property(readonly) unsigned long long groupCount;
- (id)initWithExpressionString:(id)arg1 options:(int)arg2 error:(id *)arg3;

@end

