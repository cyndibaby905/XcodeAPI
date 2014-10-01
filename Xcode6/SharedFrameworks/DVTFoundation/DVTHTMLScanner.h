

#import <DVTFoundation/DVTBlockScanner.h>

@interface DVTHTMLScanner : DVTBlockScanner
{
}

- (id)parseRecursive:(id)arg1 withContext:(id)arg2 inputStream:(id)arg3 range:(NSRange)arg4 dirtyRange:(NSRange *)arg5;
- (int)actionForEndToken:(id)arg1 inContext:(id)arg2 inputStream:(id)arg3;
- (id)_stringByRemovingLeadingAndTrailingCharacters:(id)arg1 fromString:(id)arg2;

@end

