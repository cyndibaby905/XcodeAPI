

#import <Foundation/Foundation.h>

@interface NSString (IDEIndexAdditions)
- (id)ideIndex_resolvedFilePath;
- (id)ideIndex_stringByResolvingSymlinksInPath;
- (id)ideIndex_firstNonPrefixString;
- (id)ideIndex_normalizedFoldedString;
@end

