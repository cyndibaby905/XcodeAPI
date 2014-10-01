

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTXMLUnarchiving-Protocol.h>
#import <IDEFoundation/IDETestingSpecifier-Protocol.h>

@class IDEDeviceAppDataReference, IDELocationScenarioReference, IDEScheme, IDESchemeBuildableReference, NSArray, NSMutableArray, NSString;

@interface IDETestableReference : NSObject <IDETestingSpecifier, DVTXMLUnarchiving>
{
    IDESchemeBuildableReference *_buildableReference;
    NSMutableArray *_skippedTests;
    IDEDeviceAppDataReference *_deviceAppDataReference;
    IDELocationScenarioReference *_locationScenarioReference;
    BOOL _skipped;
}

+ (id)keyPathsForValuesAffectingScheme;
+ (void)initialize;
@property(retain) IDELocationScenarioReference *locationScenarioReference; // @synthesize locationScenarioReference=_locationScenarioReference;
@property(retain) IDEDeviceAppDataReference *deviceAppDataReference; // @synthesize deviceAppDataReference=_deviceAppDataReference;
@property BOOL skipped; // @synthesize skipped=_skipped;
@property(readonly) IDESchemeBuildableReference *buildableReference; // @synthesize buildableReference=_buildableReference;
- (void)setSkippedFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addLocationScenarioReference:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addDeviceAppData:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addBuildableReference:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addSkippedTests:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
@property(retain) IDEScheme *scheme;
- (void)resolveBuildableFromImport;
- (id)testableName;
- (id)testable;
@property(readonly, copy) NSString *description;
- (id)init;
- (id)initWithTestable:(id)arg1 scheme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) NSMutableArray *mutableSkippedTests; // @dynamic mutableSkippedTests;
@property(copy) NSArray *skippedTests; // @dynamic skippedTests;
@property(readonly) Class superclass;

@end

