

#import <IDEFoundation/IDEArchivedContent.h>

@class DVTFilePath, DVTPlatform, NSArray, NSString;

@interface IDEArchivedApplication : IDEArchivedContent
{
}

+ (id)keyPathsForValuesAffectingIconPath;
+ (id)keyPathsForValuesAffectingApplicationPath;
+ (id)_codesigningIdentityFromApplicationPath:(id)arg1;
+ (id)archivedContentPathPlistKey;
+ (id)archivedContentPropertiesPlistKey;
+ (BOOL)fillInfoDictionary:(id)arg1 forContentAtPath:(id)arg2 inArchiveProductsDirectory:(id)arg3;
+ (id)soleArchivedContentRelativePathInDirectory:(id)arg1;
@property(readonly) DVTPlatform *platform;
- (long long)autodetectedFormatForPackaging;
- (BOOL)supportsPackagingAsFormat:(long long)arg1;
- (id)packager;
- (id)platformName;
@property(readonly) NSArray *iconPaths;
@property(readonly) DVTFilePath *applicationPath;
@property(readonly) NSString *signingIdentity;

@end

