

#import <Foundation/Foundation.h>

@class IDEBreakpointAction, NSString;

@interface IDEBreakpointActionArchivingProxy : NSObject
{
    NSString *_actionExtensionID;
    IDEBreakpointAction *_proxiedAction;
    BOOL _wasSuccessfullyUnarchived;
}

+ (id)_breakpointActionExtensions;
+ (id)_extensionIDForAction:(id)arg1;
+ (id)actionProxyForAction:(id)arg1;
@property(readonly) BOOL wasSuccessfullyUnarchived; // @synthesize wasSuccessfullyUnarchived=_wasSuccessfullyUnarchived;
@property(readonly) IDEBreakpointAction *proxiedAction; // @synthesize proxiedAction=_proxiedAction;
- (void)addActionContent:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setActionExtensionIDFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;

@end

