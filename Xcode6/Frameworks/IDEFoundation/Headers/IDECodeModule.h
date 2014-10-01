

#import <Foundation/Foundation.h>

@class DVTFilePath, NSString;

@interface IDECodeModule : NSObject
{
    BOOL _isInBuiltProductDirectories;
    int _debugSymbolsLoadState;
    DVTFilePath *_filePath;
    NSString *_name;
    NSString *_frameworkNameIncludingExtension;
    NSString *_identifier;
    unsigned long long _address;
    NSString *_displayAddress;
    NSString *_path;
}

+ (id)frameworkNameIncludingExtensionFromPath:(id)arg1;
@property int debugSymbolsLoadState; // @synthesize debugSymbolsLoadState=_debugSymbolsLoadState;
@property(nonatomic) BOOL isInBuiltProductDirectories; // @synthesize isInBuiltProductDirectories=_isInBuiltProductDirectories;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) NSString *displayAddress; // @synthesize displayAddress=_displayAddress;
@property unsigned long long address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *frameworkNameIncludingExtension; // @synthesize frameworkNameIncludingExtension=_frameworkNameIncludingExtension;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(retain) DVTFilePath *filePath; // @synthesize filePath=_filePath;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)other;
- (id)initWithIdentifier:(id)arg1 pathString:(id)arg2;

@end

