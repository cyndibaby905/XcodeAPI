

#import <IDEFoundation/IDEBreakpoint.h>

@class DVTTextDocumentLocation, NSString;

@interface IDEBreakpointLocation : IDEBreakpoint
{
    IDEBreakpoint *_parentBreakpoint;
    NSString *_urlString;
    NSString *_timestampString;
    long long _startingColumnNumber;
    long long _endingColumnNumber;
    long long _startingLineNumber;
    long long _endingLineNumber;
    NSString *_characterRangeString;
    DVTTextDocumentLocation *_documentLocation;
    NSString *_symbolName;
    NSString *_moduleName;
    unsigned long long _address;
    unsigned long long _offsetFromSymbolStart;
}

@property unsigned long long offsetFromSymbolStart; // @synthesize offsetFromSymbolStart=_offsetFromSymbolStart;
@property(readonly) unsigned long long address; // @synthesize address=_address;
@property(readonly) NSString *moduleName; // @synthesize moduleName=_moduleName;
@property(readonly) NSString *symbolName; // @synthesize symbolName=_symbolName;
@property(readonly) DVTTextDocumentLocation *documentLocation; // @synthesize documentLocation=_documentLocation;
- (void)primitiveInvalidate;
- (void)dvt_awakeFromXMLUnarchiver:(id)arg1;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
@property(retain) IDEBreakpoint *parentBreakpoint;
- (BOOL)_isTextDocumentLocationEqual:(id)arg1;
- (BOOL)isBreakpointLocationTheSameDisregardingAddress:(id)arg1;
- (id)mutableLocations;
- (id)locations;
@property(readonly) DVTTextDocumentLocation *zeroBasedDocumentLocation;
- (id)displayName;
- (id)initWithDocumentTextLocation:(id)arg1 symbolName:(id)arg2 moduleName:(id)arg3 address:(unsigned long long)arg4;

@end

