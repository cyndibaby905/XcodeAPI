

#import <DVTFoundation/DVTBlockScanner.h>

@class NSDictionary;

@interface DVTHTMLEntityScanner : DVTBlockScanner
{
    NSDictionary *_entityMap;
}

- (id)parse:(id)arg1 withContext:(id)arg2 initialToken:(long long)arg3 inputStream:(id)arg4 range:(NSRange)arg5 dirtyRange:(NSRange *)arg6;
- (id)initWithPropertyListDictionary:(id)arg1 language:(long long)arg2;

@end

