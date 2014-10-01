

#import <DVTFoundation/DVTSourceScanner.h>

@class NSString;

@interface DVTBlockScanner : DVTSourceScanner
{
    NSString *startString;
    NSString *endString;
    NSString *altEndString;
    unsigned short startChar;
    unsigned short endChar;
    unsigned short altEndChar;
    unsigned short escapeChar;
    unsigned int recursive:1;
    unsigned int dontIncludeEnd:1;
    unsigned int parseEndBeforeIncludedRules:1;
    unsigned int caseSensitive:1;
    unsigned int isVolatile:1;
    long long startToken;
    long long endToken;
    long long altEndToken;
    long long altToken;
}

- (id)parse:(id)arg1 withContext:(id)arg2 initialToken:(long long)arg3 inputStream:(id)arg4 range:(NSRange)arg5 dirtyRange:(NSRange *)arg6;
- (id)parseRecursive:(id)arg1 withContext:(id)arg2 inputStream:(id)arg3 range:(NSRange)arg4 dirtyRange:(NSRange *)arg5;
- (int)actionForEndToken:(id)arg1 inContext:(id)arg2 inputStream:(id)arg3;
- (long long)nextToken:(id)arg1 withItem:(id)arg2 inTree:(id)arg3 withContext:(id)arg4 initialToken:(long long)arg5 insideBlock:(BOOL)arg6 range:(NSRange)arg7 dirtyRange:(NSRange *)arg8 reusedToken:(char *)arg9;
- (BOOL)predictsRule:(long long)arg1 inputStream:(id)arg2;
- (id)initWithPropertyListDictionary:(id)arg1 language:(long long)arg2;

@end

