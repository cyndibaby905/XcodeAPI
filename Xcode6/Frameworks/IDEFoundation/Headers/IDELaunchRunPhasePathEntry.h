

#import <Foundation/Foundation.h>

@class DVTFilePath, NSString;

@interface IDELaunchRunPhasePathEntry : NSObject
{
    BOOL _isEnabled;
    NSString *_path;
}

@property(getter=isEnabled) BOOL enabled; // @synthesize enabled=_isEnabled;
@property(copy) NSString *path; // @synthesize path=_path;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)setIsEnabledFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setPathFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
@property(readonly) DVTFilePath *filePath;
- (NSString *)description;
- (id)init;
- (id)initWithPathString:(id)arg1 enabled:(BOOL)arg2;

@end

