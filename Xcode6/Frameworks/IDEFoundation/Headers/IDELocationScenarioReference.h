

#import <IDEFoundation/IDESchemeOptionReference.h>

@interface IDELocationScenarioReference : IDESchemeOptionReference
{
    int _referenceType;
}

@property int referenceType; // @synthesize referenceType=_referenceType;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;

@end

