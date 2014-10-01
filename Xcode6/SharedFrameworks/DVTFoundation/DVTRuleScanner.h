

#import <DVTFoundation/DVTSourceScanner.h>

@class NSMutableArray;

@interface DVTRuleScanner : DVTSourceScanner
{
    NSMutableArray *_rules;
    unsigned short _startChar;
    unsigned int _isVolatile:1;
}

- (id)parse:(id)arg1 withContext:(id)arg2 initialToken:(long long)arg3 inputStream:(id)arg4 range:(NSRange)arg5 dirtyRange:(NSRange *)arg6;
- (long long)nextToken:(id)arg1 withItemArray:(id)arg2 inTree:(id)arg3 withContext:(id)arg4 initialToken:(long long)arg5 range:(NSRange)arg6 dirtyRange:(NSRange *)arg7;
- (BOOL)predictsRule:(long long)arg1 inputStream:(id)arg2;
- (id)initWithPropertyListDictionary:(id)arg1 language:(long long)arg2;

@end

