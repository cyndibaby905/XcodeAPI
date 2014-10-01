

#import <Foundation/Foundation.h>

@class DVTFilePath, NSArray, NSString;

@interface DVTSearchPath : NSObject <NSCopying>
{
    NSArray *_searchDirectoryFilePaths;
    NSString *_unixShellSearchPathRepresentation;
}

+ (id)searchPathWithSearchDirectoryFilePaths:(id)arg1;
@property(readonly) NSString *unixShellSearchPathRepresentation; // @synthesize unixShellSearchPathRepresentation=_unixShellSearchPathRepresentation;
@property(readonly) NSArray *searchDirectoryFilePaths; // @synthesize searchDirectoryFilePaths=_searchDirectoryFilePaths;
- (NSString *)description;
- (id)pathForFileWithRelativePathString:(id)arg1;
- (id)pathForFileWithRelativePathString:(id)arg1 matchingPredicate:(CDUnknownBlockType)arg2;
@property(readonly) DVTFilePath *preferredDirectoryPath;
- (id)searchPathByAppendingSearchPath:(id)arg1;
- (id)searchPathByAppendingSearchDirectoryFilePaths:(id)arg1;
- (id)initWithSearchDirectoryFilePaths:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

