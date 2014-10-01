

#import <IDEFoundation/IDEBreakpoint.h>

@class DVTObservingToken, DVTTextDocumentLocation, NSString, NSURL;

@interface IDEFileBreakpoint : IDEBreakpoint
{
    NSURL *_documentURL;
    DVTTextDocumentLocation *_location;
    NSString *_filePath;
    NSString *_timestampString;
    long long _startingColumnNumber;
    long long _endingColumnNumber;
    long long _startingLineNumber;
    long long _endingLineNumber;
    NSString *_characterRangeString;
    NSString *_landmarkName;
    unsigned long long _landmarkType;
    DVTObservingToken *_fileReferenceToken;
    DVTObservingToken *_workspaceToken;
}

+ (id)keyPathsForValuesAffectingDisplayName;
+ (BOOL)automaticallyNotifiesObserversOfLocation;
+ (id)propertiesAffectingPersistenceState;
@property unsigned long long landmarkType; // @synthesize landmarkType=_landmarkType;
@property(copy) NSString *landmarkName; // @synthesize landmarkName=_landmarkName;
@property(copy, nonatomic) DVTTextDocumentLocation *location; // @synthesize location=_location;
@property(readonly) NSURL *documentURL; // @synthesize documentURL=_documentURL;
- (id)ideModelObjectTypeIdentifier;
- (id)zeroBasedLocation;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)_updateFilePath;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (void)dvt_awakeFromXMLUnarchiver:(id)arg1;
- (NSString *)description;
- (void)setLocationFromZeroBasedLocation:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)displayName;
- (void)baseSetLocation:(id)arg1;
- (void)_watchNewURL:(id)arg1;
- (void)_watchFileRefs:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithDocumentTextLocation:(id)arg1;

@end

