

#import <DVTFoundation/DVTDocumentLocation.h>

@class NSIndexPath;

@interface IDELogDocumentLocation : DVTDocumentLocation
{
    NSIndexPath *_indexPath;
    BOOL _expandTranscript;
    NSRange _characterRange;
}

@property(readonly) NSRange characterRange; // @synthesize characterRange=_characterRange;
@property(readonly) BOOL expandTranscript; // @synthesize expandTranscript=_expandTranscript;
@property(readonly) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (BOOL)isEqual:(id)other;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2 indexPath:(id)arg3 expandTranscript:(BOOL)arg4;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2 indexPath:(id)arg3 characterRange:(NSRange)arg4;
- (id)_initWithDocumentURL:(id)arg1 timestamp:(id)arg2 indexPath:(id)arg3 expandTranscript:(BOOL)arg4 characterRange:(NSRange)arg5;

@end

