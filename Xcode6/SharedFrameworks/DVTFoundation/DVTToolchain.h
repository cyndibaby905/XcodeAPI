

#import <Foundation/Foundation.h>

@class DVTFilePath, DVTMacroDefinitionTable, DVTSearchPath, DVTVersion, NSArray, NSString;

@interface DVTToolchain : NSObject
{
    NSString *_identifier;
    DVTFilePath *_path;
    DVTVersion *_version;
    NSArray *_aliases;
    NSString *_displayName;
    NSString *_displayDescription;
    DVTMacroDefinitionTable *_defaultMacros;
    DVTMacroDefinitionTable *_additionalDefaultMacrosIfTopToolchain;
    DVTSearchPath *_executableBinarySearchPath;
    DVTSearchPath *_librarySearchPath;
}

+ (id)defaultToolchain;
+ (id)_macroDefinitionTableWithToolchainIdentifier:(id)arg1 buildSettingsDictionary:(id)arg2;
@property(readonly) DVTSearchPath *librarySearchPath; // @synthesize librarySearchPath=_librarySearchPath;
@property(readonly) DVTSearchPath *executableBinarySearchPath; // @synthesize executableBinarySearchPath=_executableBinarySearchPath;
@property(readonly) DVTMacroDefinitionTable *additionalDefaultMacrosIfTopToolchain; // @synthesize additionalDefaultMacrosIfTopToolchain=_additionalDefaultMacrosIfTopToolchain;
@property(readonly) DVTMacroDefinitionTable *defaultMacros; // @synthesize defaultMacros=_defaultMacros;
@property(readonly) NSString *displayDescription; // @synthesize displayDescription=_displayDescription;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly) NSArray *aliases; // @synthesize aliases=_aliases;
@property(readonly) DVTVersion *version; // @synthesize version=_version;
@property(readonly) DVTFilePath *path; // @synthesize path=_path;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (NSString *)description;
- (id)init;
- (id)initWithPath:(id)arg1 error:(id *)arg2;

@end

