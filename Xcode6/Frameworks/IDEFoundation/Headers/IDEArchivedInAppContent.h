

#import <IDEFoundation/IDEArchivedContent.h>

@class DVTFilePath;

@interface IDEArchivedInAppContent : IDEArchivedContent
{
}

+ (id)keyPathsForValuesAffectingInAppContentPath;
+ (id)archivedContentPathPlistKey;
+ (id)archivedContentPropertiesPlistKey;
+ (BOOL)fillInfoDictionary:(id)arg1 forContentAtPath:(id)arg2 inArchiveProductsDirectory:(id)arg3;
+ (id)soleArchivedContentRelativePathInDirectory:(id)arg1;
- (long long)autodetectedFormatForPackaging;
- (BOOL)supportsPackagingAsFormat:(long long)arg1;
- (id)packager;
@property(readonly) DVTFilePath *inAppContentPath;

@end

