

#import <Foundation/Foundation.h>

@class NSArray, NSDictionary, NSNumber, NSSet, NSString;

@interface IDERefactoringBuildSettings : NSObject
{
    int _status;
    NSDictionary *_headerMappings;
}

+ (id)plistFileSettings;
+ (id)dataModelFileSettings;
+ (id)nibFileSettings;
+ (id)fileInNoIndexables;
+ (id)noBuildSettingsFound;
@property(readonly) NSDictionary *headerMappings; // @synthesize headerMappings=_headerMappings;
@property int status; // @synthesize status=_status;
- (id)pathForFileName:(id)arg1 includedByFiles:(id)arg2 usingQuotes:(BOOL)arg3;
@property(readonly) BOOL alwaysSearchUserPaths;
@property(readonly) NSNumber *arcMode;
@property(readonly) NSString *languageDialect;
@property(readonly) NSArray *undefinedMacroNames;
@property(readonly) NSArray *predefinedMacroNamesAndDefs;
@property(readonly) NSArray *userIncludePaths;
@property(readonly) NSArray *systemIncludePaths;
@property(readonly) NSArray *frameworkSearchPaths;
@property(readonly) NSSet *plistFilePaths;
@property(readonly) NSArray *preincludeFiles;
- (id)init;

@end

