

#import <DVTFoundation/DVTSourceScanner.h>

@class NSCharacterSet, NSMutableArray;

@interface DVTRegExScanner : DVTSourceScanner
{
    NSCharacterSet *_startSet;
    NSCharacterSet *_invertedOtherSet;
    NSMutableArray *_regExes;
    NSMutableArray *_captureNodeTypes;
    NSRange _previousTokenRange;
    BOOL _isSimpleToken;
    BOOL _altIsSimpleToken;
    BOOL _caseSensitive;
    unsigned long long _maxLinesPerToken;
}

- (NSRange)wordRangeInString:(id)arg1 fromIndex:(unsigned long long)arg2;
- (BOOL)canTokenize;
- (id)parse:(id)arg1 withContext:(id)arg2 initialToken:(long long)arg3 inputStream:(id)arg4 range:(NSRange)arg5 dirtyRange:(NSRange *)arg6;
- (long long)nextToken:(id)arg1 withContext:(id)arg2 initialToken:(long long)arg3 until:(unsigned long long)arg4 subItems:(id *)arg5;
- (unsigned long long)locationOfNextNewlineFrom:(unsigned long long)arg1 until:(unsigned long long)arg2 inStream:(id)arg3;
- (long long)tokenForString:(id)arg1 forRange:(NSRange *)arg2 subItems:(id *)arg3;
- (BOOL)predictsRule:(long long)arg1 inputStream:(id)arg2;
- (id)initWithPropertyListDictionary:(id)arg1 language:(long long)arg2;

@end

