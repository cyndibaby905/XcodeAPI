

#import <Foundation/Foundation.h>

#import <IDEFoundation/IDEDiagnosticItemDelegate-Protocol.h>

@class DVTDocumentLocation, IDEActivityLogMessage, IDEActivityLogRecord, IDEIssueProvider;

@interface IDEIssue : NSObject <IDEDiagnosticItemDelegate>
{
    IDEIssueProvider *_issueProvider;
    NSArray *_documentLocations;
    NSObject *_issueTypeIdentifier;
    NSString *_fullMessage;
    unsigned long long _severity;
    unsigned long long _sequenceNumber;
    NSArray *_subissues;
    IDEActivityLogMessage *_representedMessage;
    IDEActivityLogMessage *_originatingMessage;
    IDEActivityLogRecord *_originatingLogRecord;
    IDEIssue *_parentIssue;
    int _issueType;
    NSNumber *_lineNumber;
    BOOL _frozen;
    BOOL _valid;
    BOOL _coalesced;
    BOOL _wasFetchedFromCache;
    BOOL _vended;
    NSArray *_filteredSubissues;
    DVTDocumentLocation *_primaryDocumentLocation;
}

@property(readonly) NSNumber *_lineNumber; // @synthesize _lineNumber;
@property(getter=_isVended) BOOL _vended; // @synthesize _vended;
@property(getter=_isCoalesced) BOOL _coalesced; // @synthesize _coalesced;
@property BOOL valid; // @synthesize valid=_valid;
@property(readonly) DVTDocumentLocation *primaryDocumentLocation; // @synthesize primaryDocumentLocation=_primaryDocumentLocation;
@property(readonly) int issueType; // @synthesize issueType=_issueType;
@property BOOL wasFetchedFromCache; // @synthesize wasFetchedFromCache=_wasFetchedFromCache;
@property(readonly) __weak IDEIssue *parentIssue; // @synthesize parentIssue=_parentIssue;
@property(readonly) IDEActivityLogRecord *originatingLogRecord; // @synthesize originatingLogRecord=_originatingLogRecord;
@property(readonly) IDEActivityLogMessage *originatingMessage; // @synthesize originatingMessage=_originatingMessage;
@property(retain, nonatomic) IDEActivityLogMessage *representedMessage; // @synthesize representedMessage=_representedMessage;
@property(copy, nonatomic) NSArray *subissues; // @synthesize subissues=_subissues;
@property(readonly) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(readonly) unsigned long long severity; // @synthesize severity=_severity;
@property(readonly) NSString *fullMessage; // @synthesize fullMessage=_fullMessage;
@property(retain) NSObject *issueTypeIdentifier; // @synthesize issueTypeIdentifier=_issueTypeIdentifier;
@property(readonly) NSArray *documentLocations; // @synthesize documentLocations=_documentLocations;
@property(retain, nonatomic) IDEIssueProvider *issueProvider; // @synthesize issueProvider=_issueProvider;
@property(readonly, nonatomic) IDEIssue *representativeSubIssue;
- (BOOL)isEqualDisregardingLocationTimestamps:(id)arg1;
- (id)_firstCommonLocationFromArray:(id)arg1 andArray:(id)arg2;
- (void)diagnosticItemWasFixed:(id)arg1;
- (long long)compareByLineNumber:(id)arg1;
- (long long)compare:(id)arg1;
@property(readonly) BOOL isLiveIssue;
@property(retain) IDEIssue *_parentIssue;
@property(readonly) NSString *formattedStringRepresentation;
@property(readonly, copy) NSString *description;
- (id)_severityString;
- (void)_freeze;
@property(readonly) NSArray *fixableDiagnosticItems;
- (void)_setRepresentedMessage:(id)arg1 force:(BOOL)arg2;
@property(readonly) NSArray *filteredSubissues; // @synthesize filteredSubissues=_filteredSubissues;
- (void)_setSubissues:(id)arg1 force:(BOOL)arg2;
- (void)_setSequenceNumber:(unsigned long long)arg1;
- (id)initWithIssueProvider:(id)arg1 message:(id)arg2 wasFetchedFromCache:(BOOL)arg3;
- (id)initWithIssueProvider:(id)arg1 message:(id)arg2 originatingLogRecord:(id)arg3 wasFetchedFromCache:(BOOL)arg4;
- (id)initWithIssueProvider:(id)arg1 documentLocations:(id)arg2 issueTypeIdentifier:(id)arg3 fullMessage:(id)arg4 severity:(unsigned long long)arg5 representedMessage:(id)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

