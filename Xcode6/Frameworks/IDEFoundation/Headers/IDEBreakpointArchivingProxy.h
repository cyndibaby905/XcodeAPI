

#import <Foundation/Foundation.h>

@class IDEBreakpoint, NSString;

@interface IDEBreakpointArchivingProxy : NSObject
{
    NSString *_breakpointExtensionID;
    IDEBreakpoint *_proxiedBreakpoint;
    BOOL _wasSuccessfullyUnarchived;
}

+ (id)_breakpointExtensions;
+ (id)_extensionIDForBreakpoint:(id)arg1;
+ (id)breakpointProxyForBreakpoint:(id)arg1;
@property(readonly) BOOL wasSuccessfullyUnarchived; // @synthesize wasSuccessfullyUnarchived=_wasSuccessfullyUnarchived;
@property(readonly) IDEBreakpoint *proxiedBreakpoint; // @synthesize proxiedBreakpoint=_proxiedBreakpoint;
- (void)addBreakpointContent:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setBreakpointExtensionIDFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;

@end

