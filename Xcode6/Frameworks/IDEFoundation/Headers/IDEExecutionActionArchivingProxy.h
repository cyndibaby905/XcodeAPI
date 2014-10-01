

#import <Foundation/Foundation.h>

@class IDEExecutionAction, NSString;

@interface IDEExecutionActionArchivingProxy : NSObject
{
    NSString *_actionExtensionID;
    IDEExecutionAction *_proxiedAction;
}

+ (id)actionProxyForAction:(id)arg1;
@property(readonly) IDEExecutionAction *proxiedAction; // @synthesize proxiedAction=_proxiedAction;
@property(readonly) NSString *actionExtensionID; // @synthesize actionExtensionID=_actionExtensionID;
- (void)addActionContent:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setActionTypeFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;

@end

