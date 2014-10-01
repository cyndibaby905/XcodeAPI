

#import <DVTFoundation/DVTSourceScanner.h>

@class DVTSourceTokens, NSCharacterSet;

@interface DVTKeywordScanner : DVTSourceScanner
{
    NSCharacterSet *_startSet;
    NSCharacterSet *_invertedOtherSet;
    DVTSourceTokens *_keywords;
    NSRange _previousTokenRange;
    BOOL _caseSensitive;
    BOOL _wordBreak;
    BOOL _isSimpleToken;
}

- (NSRange)wordRangeInString:(id)arg1 fromIndex:(unsigned long long)arg2;
- (BOOL)canTokenize;
- (id)parse:(id)arg1 withContext:(id)arg2 initialToken:(long long)arg3 inputStream:(id)arg4 range:(NSRange)arg5 dirtyRange:(NSRange *)arg6;
- (long long)nextToken:(id)arg1 withContext:(id)arg2 initialToken:(long long)arg3;
- (BOOL)predictsRule:(long long)arg1 inputStream:(id)arg2;
- (id)initWithPropertyListDictionary:(id)arg1 language:(long long)arg2;

@end

