

#import <Foundation/Foundation.h>

#import <Foundation/Foundation.h>

@class DVTDocumentLocation, IDEActivityLogSection, IDETypeIdentifier, NSArray, NSMutableArray, NSString;

@interface IDEActivityLogMessage : NSObject <NSCopying>
{
    NSString *_title;
    NSString *_shortTitle;
    double _timeEmitted;
    IDEActivityLogSection *_supersection;
    NSRange _rangeInSectionText;
    IDEActivityLogMessage *_supermessage;
    NSMutableArray *_submessages;
    unsigned long long _severity;
    IDETypeIdentifier *_type;
    DVTDocumentLocation *_location;
    NSString *_categoryIdent;
    NSArray *_secondaryLocations;
    NSString *_additionalDescription;
    int _lock;
}

+ (id)messageWithType:(id)arg1 severity:(unsigned long long)arg2 title:(id)arg3 filePath:(id)arg4 lineNumber:(unsigned long long)arg5;
+ (id)messageWithType:(id)arg1 severity:(unsigned long long)arg2 title:(id)arg3 location:(id)arg4;
@property(readonly) IDETypeIdentifier *type; // @synthesize type=_type;
@property(readonly) unsigned long long severity; // @synthesize severity=_severity;
- (void)dvt_writeToSerializer:(id)arg1;
- (id)dvt_initFromDeserializer:(id)arg1;
@property(readonly) unsigned long long totalNumberOfAnalyzerResults;
@property(readonly) unsigned long long totalNumberOfAnalyzerWarnings;
@property(readonly) unsigned long long totalNumberOfWarnings;
@property(readonly) unsigned long long totalNumberOfErrors;
@property(readonly) unsigned long long totalNumberOfTestFailures;
- (void)setSecondaryLocations:(id)arg1;
@property(readonly) NSArray *secondaryLocations;
@property(readonly) NSString *additionalDescription;
- (void)setCategoryIdentifier:(id)arg1;
@property(readonly) NSString *categoryIdentifier;
@property(readonly) DVTDocumentLocation *location;
- (void)setShortTitle:(id)arg1;
@property(readonly) NSString *shortTitle;
- (void)logRecorder:(id)arg1 addSectionTextRange:(NSRange)arg2;
- (void)logRecorder:(id)arg1 setSectionTextRange:(NSRange)arg2;
@property(readonly) NSString *logMessageString;
- (void)logRecorder:(id)arg1 addSubmessage:(id)arg2;
- (void)addSubmessage:(id)arg1;
@property(readonly) NSArray *submessages;
- (void)_setSupermessage:(id)arg1;
@property(readonly) __weak IDEActivityLogMessage *supermessage;
- (void)setSectionTextRange:(NSRange)arg1;
@property(readonly) NSRange rangeInSectionText;
- (void)_setSupersection:(id)arg1;
@property(readonly) __weak IDEActivityLogSection *supersection;
- (NSString *)description;
@property(readonly) double timeEmitted;
@property(readonly) NSString *title;
- (BOOL)_hasEqualTitleLocationsSubmessages:(id)arg1 disregardingTimestamp:(BOOL)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(id)arg1 severity:(unsigned long long)arg2 title:(id)arg3 filePath:(id)arg4;
- (id)initWithType:(id)arg1 severity:(unsigned long long)arg2 title:(id)arg3 filePath:(id)arg4 lineNumber:(unsigned long long)arg5;
- (id)initWithType:(id)arg1 severity:(unsigned long long)arg2 title:(id)arg3 location:(id)arg4;
- (id)initWithTitle:(id)arg1;
- (id)init;
- (id)initWithType:(id)arg1 severity:(unsigned long long)arg2 title:(id)arg3;

@end

