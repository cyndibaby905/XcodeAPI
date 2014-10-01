

#import <Foundation/Foundation.h>

@class DVTExtension, NSString;

@interface IDEDebuggerSpecifier : NSObject
{
    DVTExtension *_extension;
    NSString *_correspondingLauncherIdentifier;
}

+ (BOOL)_isDefaultNonDebuggerLauncher:(id)arg1;
+ (id)_launcherExtensions;
+ (BOOL)requiresDebuggerForDevice:(id)arg1;
+ (id)defaultDebuggerSpecifierForWorkspace:(id)arg1;
+ (id)_launcherPluginIdentifierForDebuggerPlugin:(id)arg1;
+ (id)allDebuggerSpecifiersIncludingNone;
+ (id)allDebuggerSpecifiers;
+ (id)_specifierWithIdentifier:(id)arg1 inArray:(id)arg2;
+ (id)specifierWithIdentifierInAllDebuggerSpecifiersIncludingNone:(id)arg1;
+ (id)specifierWithIdentifierInAllSpecifiers:(id)arg1;
@property(readonly) DVTExtension *extension; // @synthesize extension=_extension;
@property(readonly) NSString *correspondingLauncherIdentifier;
@property(readonly) NSString *identifier;
@property(readonly) NSString *displayName;
- (id)_initWithExtension:(id)arg1;

@end

