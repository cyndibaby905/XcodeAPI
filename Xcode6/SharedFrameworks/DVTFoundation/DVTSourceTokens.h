

#import <Foundation/Foundation.h>

@class NSMutableSet;

@interface DVTSourceTokens : NSObject
{
    NSMutableSet *_tokens;
    BOOL _caseSensitive;
}

+ (long long)addTokenForString:(id)arg1;
+ (long long)_tokenForString:(id)arg1;
- (id)allTokens;
- (long long)tokenForString:(id)arg1;
- (BOOL)containsToken:(id)arg1;
- (void)setCaseSensitive:(BOOL)arg1;
- (void)addArrayOfStrings:(id)arg1;
- (id)initWithArrayOfStrings:(id)arg1 caseSensitive:(BOOL)arg2;

@end

