

#import <Foundation/Foundation.h>

@class DVTTextDocumentLocation, IDEDiagnosticActivityLogMessage, NSString;

@interface IDEDiagnosticFixItItem : NSObject
{
    IDEDiagnosticActivityLogMessage *_diagnosticItem;
    NSString *_fixItString;
    DVTTextDocumentLocation *_replacementLocation;
}

@property(readonly) DVTTextDocumentLocation *replacementLocation; // @synthesize replacementLocation=_replacementLocation;
@property(readonly) NSString *fixItString; // @synthesize fixItString=_fixItString;
@property(nonatomic) __weak IDEDiagnosticActivityLogMessage *diagnosticItem; // @synthesize diagnosticItem=_diagnosticItem;
- (NSString *)description;
- (BOOL)isEqual:(id)other;
- (BOOL)isEqualToDiagnosticFixItItem:(id)arg1;
- (id)init;
- (id)initWithFixItString:(id)arg1 replacementLocation:(id)arg2;

@end

