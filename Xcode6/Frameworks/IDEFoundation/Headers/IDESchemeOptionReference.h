

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTXMLUnarchiving-Protocol.h>

@class NSString;

@interface IDESchemeOptionReference : NSObject <DVTXMLUnarchiving>
{
    NSString *_identifier;
    NSString *resolvedReference;
}

@property(copy) NSString *resolvedReference; // @synthesize resolvedReference;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
- (id)resolvedReferenceForWorkspace:(id)arg1;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)setIdentifierFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

