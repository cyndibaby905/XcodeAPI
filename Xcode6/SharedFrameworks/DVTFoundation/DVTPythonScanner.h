

#import <DVTFoundation/DVTSourceScanner.h>

@interface DVTPythonScanner : DVTSourceScanner
{
}

- (long long)parseOneIncludedRule:(id)arg1 inTree:(id)arg2 withContext:(id)arg3 initialToken:(long long)arg4 inputStream:(id)arg5 range:(NSRange)arg6 dirtyRange:(NSRange *)arg7 isLexing:(BOOL)arg8 reusedToken:(char *)arg9;
- (void)computeContext:(id)arg1 inString:(id)arg2 forLocation:(unsigned long long)arg3;
- (unsigned long long)nextIndentForlocation:(unsigned long long)arg1 inString:(id)arg2;
- (long long)_indentForLineWithRange:(NSRange)arg1 inString:(id)arg2;

@end

